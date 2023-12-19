#include <iostream>
using namespace std;
int main() {
    int arr[] = {4,6,2,27,3,7,9,2,17};
    int size = sizeof(arr)/sizeof(int);
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i<size; i++){
        if (arr[i] > max) {   //maxi = max(maxi,arr[i]) --> this is inbuilt function for max or min
            max = arr[i];
        }
        if(arr[i] < min) {    //mini = min(mini,arr[i])
            min = arr[i];
        }
    }
    cout << "Max element of arr is : " << max << endl<< "Minimum element of arr is : " << min<<endl;
}