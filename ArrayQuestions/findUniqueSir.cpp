#include <iostream>
using namespace std;

void printArr(int arr[],int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {1,2,3,4,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(int );
    printArr(arr,size);
    int ans = 0;
    for (int i = 0; i<size; i++) {
        ans = ans ^ arr[i];
    }
    cout<< "Unique element is : "<<ans <<endl;

}