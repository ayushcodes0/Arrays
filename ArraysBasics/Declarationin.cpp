#include <iostream>
using namespace std;
void printArr(int arr[],int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void printcharArr(char arr[],int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int); // int ka size 4 hota hai issiliye yaha 4 se divide karna pad raha hai.
    printArr(arr,size);

    //Initializing array with zero
    int arr2[10] = {0};
    int size2 = sizeof(arr2)/sizeof(int);
    printArr(arr2,size2);

    //Trying to initialize array with one ,but in this case only the first element will become 1 rather all become zero.
    int arr3[10] = {1};
    int size3 = sizeof(arr3)/sizeof(int);
    printArr(arr3,size3);

    char arr4[] = {'a','b','c','d','e'};
    int size4 = sizeof(arr4)/sizeof(char); // char ka size 1 hi hota hai to lagao chahe na lagao ek hi baat hai.
    printcharArr(arr4,size4);

}