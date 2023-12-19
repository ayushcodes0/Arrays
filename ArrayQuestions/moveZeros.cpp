
// Very easy with two pointers.

#include <iostream>
#include <vector>

using namespace std;

void printArr(int arr[],int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void moveZeros(int arr[],int n) {
    int i = 0,j = 0;

    while(j<n) {
        if(arr[j]!=0){
            swap(arr[i++],arr[j++]);
        }
        else {
            j++;
        }
    }
    printArr(arr,n);
}
int main() {
    int arr[] = {1,0,2,3,0,4,0,5,0,6,0,7,0,8,0};
    int size = sizeof(arr)/sizeof(int);
    moveZeros(arr,size);
}