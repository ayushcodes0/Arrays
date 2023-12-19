
// Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
// Return the array in the form [x1,y1,x2,y2,...,xn,yn].

#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void shuffleArray(int arr[],int n){
    int array[n];
    int mid = n/2;
    array[0] = arr[0];
    int j = 1;
    int k = n/2;

    for (int i = 1; i<n; i++) {
        if(i%2 == 0) {
            array[i] = arr[j];
            j++;
        }
        else {
            array[i] = arr[k];
            k++;
        }
    }
    printArr(array,n);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int n = sizeof(arr)/sizeof(int);

    shuffleArray(arr,n);


}