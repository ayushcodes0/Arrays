#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for (int i = 0; i<n; i++) {
        if(arr[i] == arr[i-1] || arr[i] == 0) {
            continue;
        }
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main() {
    int arr1[] = {1,2,2,2,3,4,5,6,7,8}; // Little error
    int arr2[] = {2,2,3,3,4,5,6,7};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    int arr3[size1];

    int i = 0,j = 0,k = 0;
    while(i<size1 || j<size2){
        if(arr1[i] == arr2[j]) {
            arr3[k] = arr2[j];
            // cout<< arr1[i] << " ";
            i++;
            j++;
            k++;
        }
        if(arr1[i] < arr2[j]) {
            i++;
        }
        if(arr1[i] > arr2[j]) {
            j++;
        }
    }
    printArr(arr3,size1);
}