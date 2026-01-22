#include "LRUCache.h"
#include <iostream>
using namespace std;
//from main function you can conclude mostly how my project working 
int main() {
    LRUCache cache(2);// initialize the capacity of maximum cache Files
    cache.put(1, 10);//Adding cache 1
    cache.put(2, 20);//Adding cache 2

    cout << "Get (1) : "<<cache.get(1) << endl;//Use the Cache one(1) again(means its recent than cache two(2)
    cache.put(3, 30);//Adding cache  3
    cout << "Get (2) : "<< cache.get(2) << endl;//These cache doesn't Exist because its  automatically deleted now it will print cache 3
    //cache.put(4, 50);
    cout << "Get (3) : "<< cache.get(3) << endl;
    return 0;
}
