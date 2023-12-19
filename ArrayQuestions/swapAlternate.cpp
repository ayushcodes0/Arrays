#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Original array is : ";
    printArr(arr,size);
    for (int i = 0; i<size; i=i+2) {
        if(i == size-1) {
            break;
        }
        int temp = arr[i];  // swap(arr[i], arr[i+1]) we can also use this inbuilt function for swapping.
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    cout<< "Alternately swaped array is : ";
    printArr(arr,size);
}