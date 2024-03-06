#include <iostream>
#include <list>
#include <vector>
using namespace std;

class HashTable {
private:
    static const int hashGroups = 10;
    list< pair<int, int>> table[hashGroups];

public:
    bool isEmpty() const;
    int hashFunction(int key);
    void insertItem(int key, int value);
    void removeItem(int key);
    int searchItem(int key);
    void printTable();
};

bool HashTable::isEmpty() const {
    int sum{};
    for (int i{}; i < hashGroups; i++) {
        sum += table[i].size();
    }
    if(!sum) {
        return true;
    }
    return false;
}

int HashTable::hashFunction(int key) {
    return key % hashGroups;
}

void HashTable::insertItem(int key, int value) {
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for (; bItr != end(cell); bItr++) {
        if (bItr->first == key) {
            keyExists = true;
            bItr->second = value;
             cout << "[WARNING] Key exists. Value replaced.\n";
            break;
        }
    }

    if (!keyExists) {
        cell.emplace_back(key, value);
    }

    return;
}

void HashTable::removeItem(int key) {
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for (; bItr != end(cell); bItr++) {
        if (bItr->first == key) {
            keyExists = true;
            bItr = cell.erase(bItr);
             cout << "[INFO] Key removed.\n";
            break;
        }
    }

    if (!keyExists) {
         cout << "[WARNING] Key not found.\n";
    }

    return;
}

int HashTable::searchItem(int key) {
    int hashValue = hashFunction(key);
    auto& cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for (; bItr != end(cell); bItr++) {
        if (bItr->first == key) {
            keyExists = true;
            return bItr->second;
        }
    }

    if (!keyExists) {
         cout << "[WARNING] Key not found.\n";
        return {};
    }
}

void HashTable::printTable() {
    for (int i{}; i < hashGroups; i++) {
        if(table[i].size() == 0) {
            continue;
        }
        auto bItr = table[i].begin();
         cout << "[INFO] Group " << i << " : ";
        for (; bItr != table[i].end(); bItr++) {
             cout << "(" << bItr->first << ", " << bItr->second << ") ";
        }
         cout << "\n";
    }
    return;
}



int main() {
    HashTable hTable;

    // Insert items
    hTable.insertItem(12, 120);
    hTable.insertItem(22, 220);
    hTable.insertItem(32, 320);
    hTable.insertItem(42, 420);
    hTable.insertItem(52, 520);
    hTable.insertItem(62, 620);
    hTable.insertItem(72, 720);
    hTable.insertItem(82, 820);

    // Print table
    hTable.printTable();

    // Search for items
    cout << "Searching for 12: " << hTable.searchItem(12) << endl;
    cout << "Searching for 100: " << hTable.searchItem(100) << endl;

    // Remove items
    hTable.removeItem(12);
    hTable.removeItem(42);

    // Print table
    hTable.printTable();

    // Search for removed items
    cout << "Searching for 12 after removal: " << hTable.searchItem(12) << endl;
    cout << "Searching for 42 after removal: " << hTable.searchItem(42) << endl;

    return 0;
}