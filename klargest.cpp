#include "Heap.tpp"
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kth_largest(std::vector<int> values, int k) {
    // Create a max-heap priority queue
    priority_queue<int> max_heap;

    // Insert all elements from the vector into the max-heap
    for (int value : values) {
        max_heap.push(value);
    }

    // Pop the largest (k-1) elements
    for (int i = 0; i < k - 1; i++) {
        max_heap.pop();
    }

    // The kth largest element is now at the top of the max-heap
    return max_heap.top();
}