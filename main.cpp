#include "LRUCache.h"
#include <iostream>
using namespace std;

int main() {
    LRUCache cache(2);

    cache.put(1, 10);
    cache.put(2, 20);

    cout << "Get (1) : "<<cache.get(1) << endl;

    cache.put(3, 30);
    cout << "Get (2) : "<< cache.get(2) << endl;
    //cache.put(4, 50);
    cout << "Get (3) : "<< cache.get(3) << endl;

    return 0;
}
