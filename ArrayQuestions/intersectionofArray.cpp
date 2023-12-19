#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for (int i = 0; i<n; i++) {
        if(arr[i] == 0) {
            continue;
        }
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main() {
    int arr1[] = {1,2,3,4,5,4};
    int arr2[] = {4,5,6,7,8};
    int size1 = sizeof(arr1)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    int finalarr[2];
    int k = 0;

    for (int i = 0; i<size1; i++){
        for (int j = 0; j<size2; j++) {
            if(arr1[i] == arr2[j]) {
                finalarr[k] = arr1[i];
                arr2[j] = INT_MIN;
                k++;
                break;
            }
        }
    }
    cout<<"Final array after intersection is : ";
    printArr(finalarr,2);
}