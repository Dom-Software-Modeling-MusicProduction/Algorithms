#include <iostream>
#include <vector>
using namespace std;

// Function to "heapify" a subtree that has roots at index i and n is the size of the heap
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;         
    int left = 2 * i + 1;    // Left child index
    int right = 2 * i + 2;   // Right child index

    // If the left child is larger than the root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If the right child is larger than the current largest
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not the root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        // Recursively heapify the affected subtree
        heapify(arr, n, largest);
    }
}


void buildHeap(vector<int>& arr, int n) {
    // Index of last non-leaf node = n/2 - 1
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

// Heap Sort implementation
void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Build max heap
    buildHeap(arr, n);

    // One by one extract elements from heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // Call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main() {
    vector<int> arr = {4, 10, 3, 5, 1};

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    heapSort(arr);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
