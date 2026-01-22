#include "LRUCache.h"

LRUCache::LRUCache(int cap) : capacity(cap) {
    head = new Node();
    tail = new Node();
    head->next = tail;
    tail->prev = head;
}

void LRUCache::removeNode(Node* node) {
    node->prev->next = node->next;
    node->next->prev = node->prev;
}

void LRUCache::addToFront(Node* node) {
    node->next = head->next;
    node->prev = head;
    head->next->prev = node;
    head->next = node;
}

int LRUCache::get(int key) {
    if (cache.find(key) == cache.end())
        return -1;

    Node* node = cache[key];
    removeNode(node);
    addToFront(node);
    return node->value;
}

void LRUCache::put(int key, int value) {
    if (cache.find(key) != cache.end()) {
        Node* node = cache[key];
        node->value = value;
        removeNode(node);
        addToFront(node);
    } else {
        if (cache.size() == capacity) {
            Node* lru = tail->prev;
            cache.erase(lru->key);
            removeNode(lru);
            delete lru;
        }
        Node* node = new Node{key, value, nullptr, nullptr};
        addToFront(node);
        cache[key] = node;
    }
}
