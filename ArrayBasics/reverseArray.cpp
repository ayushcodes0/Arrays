#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Original array is : ";
    printArr(arr,size);
    for (int i = 0; i<size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
    cout<<"Reversed array is : ";
    printArr(arr,size);
}