
// This program fails when there is repeated element in the array

#include <iostream>
#include <vector>
using namespace std;


// This function returns the index of the maximum valued element of the array.
int maxIndex(int arr[],int n){
    
    int index,maxi;
    for (int i = 0; i<n; i++) {
        maxi = max(arr[i],maxi);
    }
    for (int i = 0; i<n; i++) {
        if (arr[i] == maxi) {
            index = i;
        }
    }
    return index;
}

// This function checks that the array is sorted and rotated.
void isSorted(int arr[],int n) {
     int count = 0;
    for (int i = 1;i<n; i++){
        if(arr[i-1] > arr[i]) {
            count++;
        }
    }
    if(arr[n-1] > arr[0]) {
        count++;
    }
    if(count > 1){
        cout << "No it is not sorted" << endl;
    }
    else {
        cout << "Yes it is sorted" << endl;
    }
    
}

int main() {
    int arr[] = {1,1,1};
    int size = sizeof(arr)/sizeof(int);
    isSorted(arr,size);

}