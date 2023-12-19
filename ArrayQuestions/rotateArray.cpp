

#include <iostream>
#include <vector>
using namespace std;

void printArr(int arr[],int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void rotateArr(int arr[],int n,int k) {


    // modulous operator wo shifted position de raha hai For e.g. 2 % 4 = 2nd index, n % n = 0th index
    vector <int> temp(n); // ye temp banana pada kyuki agar original array me karte to elements override ho jate.
    for (int i = 0; i<n; i++) {
        int index = i+k;
        temp[index%n]=arr[i];  // Main thing of this question is (index % n) which gives the rotated position to place elements.
    }
    // copy temp in original arr.
    for (int i = 0 ; i<n; i++) {
        arr[i] = temp[i];
    }
    printArr(arr,n);
    
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    int k;
    cout << "Enter k : ";
    cin >> k;

    rotateArr(arr,size,k);
}