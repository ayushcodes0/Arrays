// Painters partition problem is basically similar to the book allocation problem.
// we can solve it by the similar approach as we solve the book allocation problem.

#include <iostream>
using namespace std;

int ispossible(int arr[],int n,int noOfPainter,int mid) {
    int painters = 1;
    int paintSum = 0;

    for (int i = 0; i<n; i++) {
        if(paintSum + arr[i] <= mid) {
            paintSum += arr[i];
        }
        else {
            painters++;
            if(painters>noOfPainter || arr[i] > mid){
                return 0;
            }
            paintSum = arr[i];
        }
    }
    return 1;
}

int partition(int arr[],int n,int noOfPainter) {

    int maxElement;
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += arr[i];
        maxElement = max(maxElement,arr[i]);
    }
    int se = maxElement ,ee = sum;
    int mid = se+(ee - se)/2;
    int ans = -1;

    while (se<=ee) {
        if(ispossible(arr,n,noOfPainter,mid)) {
            ans = mid;
            ee = mid-1;
        }
        else {
            se = mid+1;
        }
        mid = se + (ee-se)/2;
    }
    return ans;
}

int main() {
    int arr[] = {5,5,5,5};
    int n = sizeof(arr)/sizeof(int);
    int noOfPainter = 2;
    cout << "The required answer is : " << partition(arr,n,noOfPainter)<<endl;

}