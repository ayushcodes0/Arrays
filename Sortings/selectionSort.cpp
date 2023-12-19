#include <iostream>
using namespace std;

void printArr(int arr[],int n){

    for (int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[],int n){

    for (int i = 0; i<n; i++ ){
        int min = i;
        for (int j = i+1; j<n; j++) {
            if(arr[min] > arr[j]) {
                min = j;
            }
        }
        int temp = arr[i]; 
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printArr(arr,n);
}

int main() {
    int arr [] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(int);

    selectionSort(arr,n);
}