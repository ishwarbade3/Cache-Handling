# LRU Cache in C++

## 📌 Problem Statement
In real-world systems, memory is limited. A cache is used to store frequently accessed data.
This project implements an LRU (Least Recently Used) Cache that evicts the least recently accessed item when capacity is full.

## 🚀 Features
- O(1) get and put operations
- Uses Hash Map + Doubly Linked List
- Clean object-oriented design
- Memory efficient

## 🛠 Technologies Used
- C++
- STL (unordered_map)
- OOP Design

## 🧠 How It Works
- Hash Map stores key → node mapping
- Doubly Linked List maintains access order
- Most Recently Used at front
- Least Recently Used at back

## ⏱ Time & Space Complexity
| Operation | Complexity |
|---------|------------|
| Get     | O(1)       |
| Put     | O(1)       |
| Space  | O(N)       |

## ▶️ How to Run
```bash
g++ main.cpp src/LRUCache.cpp -Iinclude
./a.out
