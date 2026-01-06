#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
  for (int i =1; i < size; i++){
    int key = arr[i]; 
    int j = i -1;
    //move elements greater than the key one position to the right
    while (j >= 0 && arr[j] > key){
      arr[j+1] = arr[j];  
      j--;
    }
    arr[j+1] = key;
  }
}

int main(){
  int arr[] = {34,35,6,32,64,2,75,20,46,77};
  int size = 10;
  insertionSort(arr,size);
  for (int i = 0; i < size; i++){
    cout << arr[i] << endl;
  }
  return 0;
}
