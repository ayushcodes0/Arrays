#include <iostream>
#include <vector>

using namespace std;

void printArr(int arr[],int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void merge(int arr1[],int n1,int arr2[],int n2,int arr3[],int n3) {

    int i = 0,j = 0,k = 0;
    while(i<n1) {
        if (j==n2 ) {
            arr3[k] = arr1[i];
            i++;
            k++;
            continue;
        }
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            k++;
            i++;

        }
        if(arr1[i] == arr2[j]) {
            arr3[k] = arr2[j];
            k++;
            i++;
            j++;
        }

        if(arr1[i] > arr2[j]) {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    printArr(arr3,n3);
}

int main() {
    int arr1[] = {1,3,5,7,9,10};
    int arr2[] = {2,4,6,11};

    int arr3[10] = {0};
    merge(arr1,6,arr2,4,arr3,10);
}