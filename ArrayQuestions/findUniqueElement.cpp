#include <iostream> // This is my approach 
using namespace std;

void printArr(int arr[],int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main() {
    int arr[] = {1,2,3,4,5,6,5,4,3,2,1,1,2,4,5};
    int size = sizeof(arr)/sizeof(int);
    cout<<size<<endl;

    int array[16] = {0};
    for (int i=0; i<size; i++){
        for (int j = 0; j<size; j++){
            if(i==j){
                continue;
            }
            if (arr[i] == arr[j]) {
                array[i] = array[i] + 1;
                array[j] = array[j] + 1;
            }
        }
    }
    printArr(array,size);
    for (int i=0; i<size; i++){
        if(array[i] == 0){
            cout << "Unique element is : "<<arr[i]<<endl;
        }
    }
    
}