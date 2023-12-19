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

int search(int arr[], int size, int key,int se,int ee) {
    int mid = se + (ee-se)/2;

    while (se<=ee) {
        if(arr[mid] == key) {
            return mid;
        }
        if(arr[mid] > key) {
            ee = mid-1;
        }
        if(arr[mid] < key) {
            se = mid+1;
        }
        mid = (se+(ee - se)/2);
    }
    return -1;
}

int main() {
    int arr[] = {7,8,1,3,5};
    int size = sizeof(arr) / sizeof(int);
    int target = 5;
    int piv = pivot(arr,size);

    if (target >= piv && target <= arr[size-1]) {
        cout << "Your key is present at index : " << search(arr,size,target,piv,size-1)<<endl;
    } 
    else {
        cout << "Your key is present at index : " << search(arr,size,target,0,piv-1)<<endl;
    }

}