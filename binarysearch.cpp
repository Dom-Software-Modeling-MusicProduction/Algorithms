#include <iostream>
#include <ctime>
using namespace std;



int binarysearch(int arr[], int target, int size){
    int start = 0; 
    int end = size -1; //indices of earliest and latest points where the number could be
    while(end>=start){
        int mid = (start+end)/2; //split the list in half
        if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target){
            start = mid+1; 
        }
        else if (arr[mid] > target){
            end = mid-1;
        }
    }
    cout << "Did not find!!!" << endl;
    return -1;
    
    
}

int main(){
    srand(time(NULL));
    int size = 100;
    int target = 45;
    int arr[size];
    arr[0] = 0;
    for (int i = 1; i < size; i++){
        arr[i] = arr[i-1] + rand()%3;
        cout << arr[i] << endl;
        
    }
    cout << "The value " << target << " is at index " << binarysearch(arr, target, size) << endl;
}
