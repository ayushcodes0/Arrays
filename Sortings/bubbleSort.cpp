#include <iostream>
using namespace std;

void printArr(int arr[],int n){

    for (int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[],int n) {

    for (int i=0; i<n; i++){
        for (int j = i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printArr(arr,n);
}

int main() {
    int arr[] = {8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);

    bubbleSort(arr,n);
}