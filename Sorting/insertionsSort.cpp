#include <iostream>
using namespace std;

void printArr(int arr[],int n){

    for (int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[],int n) {

    for (int i = 1; i<n; i++) {
        int min = arr[i];
        int j = i-1;

        while (min<arr[j] && j>=0) {
            arr[j + 1] = arr[j];
            j--;

        }
        arr[j+1] = min;
    }
    printArr(arr,n);
}

int main() {
    int arr[] = {8,7,6,5,4,3,2};
    int n = sizeof(arr)/sizeof(int);

    insertionSort(arr,n);
}