#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main() { 
    int arr[] = {1,1,0,0,0,0,1,0};
    int size = sizeof(arr)/sizeof(int);

    int i = 0, j = size-1;
    while (i<j) {
        if(arr[i] == 0) {
            i++;
        }
        else if(arr[j] == 1) {
            j--;
        }
        else if(arr[i] == 1 && arr[j] == 0) {
            swap(arr[i],arr[j]);
            // int temp = arr[i];
            // arr[i] = arr[j];
            // arr[j] = temp;
            i++;
            j--;
        }
    }
    printArr(arr,size);
}