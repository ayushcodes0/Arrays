#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main() { 
    int arr[] = {0,1,1,0,1,0,1,1};
    int size = sizeof(arr)/sizeof(int);

    for (int i = 1; i<size; i++) {
        int temp = arr[i];
        int j = i-1;
        while(temp < arr[j] && j>0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    printArr(arr,size);
}