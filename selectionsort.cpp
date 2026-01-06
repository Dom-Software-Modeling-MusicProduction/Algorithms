#include <iostream>
#include <ctime>
using namespace std;



void selectionsort(int arr[], int size){
    int minindex = 0;
    while(minindex < size){
        int smallest = minindex;
        for (int i = minindex; i < size; i++){
            if (arr[i] < arr[smallest]){
               smallest = i;
            }
        }
        int temp = arr[smallest]; // keep arr[i] stored as a temp variable since in the next line, it's being rewritten
        arr[smallest] = arr[minindex];
        arr[minindex] = temp;
        minindex++;
    }
    
}

int main(){
    srand(time(NULL));
    int size = 1000;
    int target = 45;
    int arr[size];
    arr[0] = 0;
    for (int i = 1; i < size; i++){
        arr[i] = rand()%20000;
        
    }
    selectionsort(arr, size);
    for (int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}
