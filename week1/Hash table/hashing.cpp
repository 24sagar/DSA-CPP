#include <iostream>
#include <vector>
#include <list>
#include <cmath>

class Hashing {
private:
    std::vector<std::list<int>> hashtable;
    int bucket;

    int hashFunction(int key) {
        return key % bucket;
    }

public:
    Hashing(int size) {
        bucket = size;
        hashtable.resize(bucket);
    }

    void insert(int key) {
        int index = hashFunction(key);
        hashtable[index].push_back(key);
    }

    void printTable() {
        for (int i = 0; i < bucket; i++) {
            std::cout << "Bucket " << i << ": ";
            for (auto it = hashtable[i].begin(); it != hashtable[i].end(); it++) {
                std::cout << *it << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Hashing h(10);

    h.insert(12);
    h.insert(25);
    h.insert(34);
    h.insert(47);
    h.insert(50);
    h.insert(62);

    h.printTable();

    return 0;
}