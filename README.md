# Algorithms

This repository contains implementations of common searching and sorting algorithms written in C++. The goal of this project is to practice algorithmic thinking, array manipulation, recursion, and time complexity analysis. Each algorithm is implemented in its own file and includes a simple main() function for testing and demonstration.
Implemented Algorithms
Sorting:

Bubble Sort [O(n) if already sorted, O(n^2) if not]
Selection Sort [O(n^2)]
Insertion Sort [O(n) if already sorted, O(n^2) if not]
Merge Sort [O(n log n)]
Quick Sort [usually O(n log n)]
Heap Sort [O(n log n)]

Searching:
Linear Search [O(1) if first element, O(n) if not]
Binary Search [O(1) if first element, O(log n) if not]

# What Techniques Were Incorporated
In-place vs. auxiliary-memory algorithms were considered. Iterative and recursive functions were considered. Use of managing variables and array indices in loops within loops. Performance tradeoffs between different approaches were considered. 

# Execution
Each file can be compiled and executed independently, following the instructions below:

To run each of the following programs, clone the repository to your computer and then compile each file independently. These files were written in C++ and were tested on Windows using MSYS2 (MinGW64).

### Requirements
- g++ (C++17)

### Compile
g++ binarysearch.cpp -o program

and replace 'binarysearch' with the name of each file in the repository, before the '.cpp' extension.

### Run
./program


# Purpose
This project was created as a learning exercise to reinforce comprehension of fundamental computer science algorithms, such as the searching and sorting algorithms listed above. 

