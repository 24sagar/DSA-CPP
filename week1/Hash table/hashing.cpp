#include <iostream>
#include <vector>
#include <list>
#include <cmath>
using namespace std;

class Hashing {
private:
    vector<list<int>> hashtable;
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
            cout << "Bucket " << i << ": ";
            for (auto it = hashtable[i].begin(); it != hashtable[i].end(); it++) {
                cout << *it << " ";
            }

            
            cout << endl;
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