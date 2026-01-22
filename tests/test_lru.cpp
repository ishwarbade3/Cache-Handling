#include "LRUCache.h"
#include <iostream>
using namespace std;

int main() {
    cout << "=== LRUCache Test ===" << endl;

    // Create a cache with capacity 
    LRUCache cache(2);

    // Test 1: Insert two values
    cache.put(1, 10);
    cache.put(2, 20);
    cout << "Get(1): " << cache.get(1) << " (expected 10)" << endl;

    // Test 2: Insert third value, should evict key 2 (least recently used)
    cache.put(3, 30);
    cout << "Get(2): " << cache.get(2) << " (expected -1, evicted)" << endl;
    cout << "Get(3): " << cache.get(3) << " (expected 30)" << endl;

    // Test 3: Access key 1 again, then insert new key
    cout << "Get(1): " << cache.get(1) << " (expected 10)" << endl;
    cache.put(4, 40); // should evict key 3 now
    cout << "Get(3): " << cache.get(3) << " (expected -1, evicted)" << endl;
    cout << "Get(4): " << cache.get(4) << " (expected 40)" << endl;

    // Test 4: Update existing key
    cache.put(1, 100);
    cout << "Get(1): " << cache.get(1) << " (expected 100)" << endl;

    cout << "=== Tests Finished ===" << endl;
    return 0;
}
