#include <iostream>
using namespace std;

int peak(int arr[] , int n) {
    int se = 0,ee = n-1;
    int mid = se + (ee - se)/2,ans;

    while (se<=ee) {
        if (arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]) {
            ans = arr[mid];
            return ans;
        }
        if(arr[mid] < arr[mid+1]) {
            se = mid+1;
        }
        if(arr[mid] < arr[mid-1]) {
            ee = mid-1;
        }
        mid = se + (ee-se)/2;
    }
    return -1;
}
int main() {
    int arr[] = {0,1,2,3,4,5,6,7,6,5,4,3,2};
    int size = sizeof(arr)/sizeof(int);
    cout << "Peak element is : " << peak(arr,size) << endl;


}