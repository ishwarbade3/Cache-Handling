#ifndef LRU_CACHE_H
#define LRU_CACHE_H

#include <unordered_map>
using namespace std;

class LRUCache {
private:
    struct Node {
        int key;
        int value;
        Node* prev;
        Node* next;
    };

    int capacity;
    unordered_map<int, Node*> cache;
    Node* head;
    Node* tail;

    void removeNode(Node* node);
    void addToFront(Node* node);

public:
    explicit LRUCache(int cap);
    int get(int key);
    void put(int key, int value);
};

#endif
