#include <iostream>
#include <ctime>
using namespace std;



void bubblesort(int arr[], int size){
    bool swapped = true;
    while (swapped == true){
        swapped = false;
        for (int i = 0; i < size-1; i++){
            if (arr[i] > arr[i+1]){ //if the next element is smaller than the current, swap
                int temp = arr[i]; // keep arr[i] stored as a temp variable since in the next line, it's being rewritten
                arr[i] = arr[i+1]; //set the next item in the array as the current item in the array
                arr[i+1] = temp;
                swapped = true;
            }
        }
    }
}

int main(){
    srand(time(NULL));
    int size = 100;
    int target = 45;
    int arr[size];
    arr[0] = 0;
    for (int i = 1; i < size; i++){
        arr[i] = rand()%20000; //make a random number between 1 and 20,000
        
    }
    bubblesort(arr, size);
    for (int i = 0; i < size; i++){
        cout << arr[i] << endl; //print out all the numbers in the array sorted, each on a new line
    }
}
