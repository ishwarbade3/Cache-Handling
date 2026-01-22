# Cache Handling
 ***********/////////Least Resently Used Cache Implementation (C++)//////////*************

** Problem Statement (Real-Life Scenario)

In real-life computer systems, memory is limited, but applications need fast access to frequently used data.
# Examples include:-
                   1.Web browsers storing recently visited pages
                   2.Operating systems managing recently accessed files
                   3.Databases caching frequently queried records


* If the system stores too much unused data, memory gets wasted.
* If it removes data randomly, important data may be lost, causing slow performance.

# Thus, there is a need for a smart caching mechanism that:
                                   * Keeps recently used data
                                   * Automatically removes least useful data
                                   * Works efficiently under memory constraints

1) **Existing Solutions**
* No Caching
* Data is fetched repeatedly from the source
* Causes high latency and poor performance

2️) **FIFO (First In First Out) Cache**
* Removes the oldest stored item
* Does not consider recent usage
* May remove frequently used data

3️) **LFU (Least Frequently Used) Cache**
* Removes least frequently accessed items
* Complex to implement
* Higher time and memory overhead

# Limitations of Existing Solutions

               * Inefficient memory utilization
               * Slow data access in some scenarios
               * Increased complexity or poor eviction logic


## Proposed Solution – LRU Cache
  
  This project implements an LRU (Least Recently Used) Cache, which removes the least recently accessed item when the cache reaches its maximum capacity.

# The LRU strategy ensures:-
                      * Recently used data stays in memory
                      * Old and unused data is automatically removed
                      * Fast access and updates


 **Solution Explanation**
# Core Concept

* The LRU Cache works on the principle:-
                          || If data hasn’t been used recently, it is least likely to be used again.

# Data Structures Used
    * Data Structure	Purpose
    * Hash Map	Provides O(1) access to cache items
    * Doubly Linked List	Maintains usage order
    * Most Recently Used (MRU) → Front of the list
    * Least Recently Used (LRU) → End of the list

# Working Mechanism
->>> GET Operation
      (Check if the key exists in the cache)
->If found:-
        * Move the node to the front (MRU)
        * Return the value
->If not found:-
        * Return -1 or an error value

 ->Time Complexity:-**O(1)**

 ->>>PUT Operation
      (Check if the key already exists)

->If it exists:
       * Update the value
       * Move it to the front
->If it does not exist:-
->If cache is full:-
      * Remove the LRU item (from end)
      * Insert new item at the front

-> Time Complexity:-**O(1)**

# Project Structure
├── include/        # Header files
├── src/            # LRU Cache implementation
├── tests/          # Test cases
├── main.cpp        # Program entry point
└── README.md       # Project documentation

# Advantages of This LRU Cache
                * Constant time operations (O(1))
                * Efficient memory usage
                * Automatic eviction of unused data
                * Suitable for real-time systems

# Future Enhancements
                      Thread-safe implementation
                      Configurable eviction policies 
                      Performance benchmarking
                      Integration with databases or web servers......

                      ***************/Thanks/****************
