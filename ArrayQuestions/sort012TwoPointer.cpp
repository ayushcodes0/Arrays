#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main() { 
    int arr[] = {0,2,2,1,0,1,1,0,2};
    int size = sizeof(arr)/sizeof(int);

    int i = 0,j = size-1;
    while (i<j) {
        if (arr[i] == 0) {
            i++;
        }
        else if(arr[j] == 2) {
            j--;
        }
        else if(arr[i] == 2 && arr[j] == 0) {
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==1 && arr[j] == 0) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i] == 2 && arr[j] == 1) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }

    
    printArr(arr,size);
}