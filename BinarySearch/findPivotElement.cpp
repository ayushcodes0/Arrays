
// Here pivot element is the element which is the smallest element in the array. 
// We can also take largest element as a pivot element but for now we are taking smallest as pivot element.
// we are finding this pivot index by using binary search.

#include <iostream>
using namespace std;

int pivot(int arr[] , int size) {
    int se = 0, ee = size-1;
    int mid = se + (ee - se)/2;
    int ans;
    while (se <= ee) {
        if(arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1]) {
            return mid;
        }
        if(arr[mid] > arr[mid+1]) {
            se = mid+1;
        }
        if( arr[mid]< arr[mid+1] && arr[mid] > arr[mid-1]){
            ee = mid-1;
        }
        mid = se + (ee - se)/2;
    }
    return -1;
}

int main() {
    int arr[] = {7,8,10,17,1,3,5};
    int size = sizeof(arr) / sizeof(int) ;
    
    cout<< "Pivot index is : " << pivot(arr,size) << endl;
}