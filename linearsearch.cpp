#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // found
        }
    }
    return -1; // not found
}

int main() {
    int arr[] = {8,234,23,56,34,77,120,89,233,7};
    int size = 10;
    int target = 77;

    int index = linearSearch(arr, size, target);

    if (index != -1) {
        cout << "Found at index " << index << endl;
    } else {
        cout << "Not found" << endl;
    }
}
