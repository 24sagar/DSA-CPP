#include <iostream>
#include <list>

const int ARRAY_SIZE = 10;

class HashTable {
private:
    std::list<int> table[ARRAY_SIZE];

    int hashFunc(int key) {
        return key % ARRAY_SIZE;
    }

    int quadraticProbe(int key, int hash) {
        int i = 1;
        while (true) {
            int newHash = (hash + i*i) % ARRAY_SIZE;
            if (table[newHash].empty()) {
                return newHash;
            }
            i++;
        }
    }

public:
    void insert(int key) {
        int hash = hashFunc(key);
        if (table[hash].size() == 0) {
            table[hash].push_back(key);
        } else {
            int newHash = quadraticProbe(key, hash);
            table[newHash].push_back(key);
        }
    }

    void remove(int key) {
        int hash = hashFunc(key);
        if (table[hash].front() == key) {
            table[hash].pop_front();
            return;
        }
        for (auto it = table[hash].begin(); it != table[hash].end(); it++) {
            if (*it == key) {
                table[hash].erase(it);
                return;
            }
        }
    }

    void print() {
        for (int i = 0; i < ARRAY_SIZE; i++) {
            std::cout << i << ": ";
            for (auto it = table[i].begin(); it != table[i].end(); it++) {
                std::cout << *it << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    HashTable ht;
    ht.insert(10);
    ht.insert(22);
    ht.insert(31);
    ht.insert(4);
    ht.insert(15);
    ht.print();

    ht.remove(10);
    ht.remove(15);
    ht.print();

    return 0;
}