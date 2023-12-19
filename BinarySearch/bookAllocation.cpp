
// Book allocation problem (Advance Binary search problem).

#include <iostream>
using namespace std;

bool ispossibleSol(int arr[],int n,int m,int mid){
    int pagesum = 0;
    int studentcount = 1;

    for (int i = 0; i<n; i++) {
        if(pagesum + arr[i] <= mid) {  // {10,20,30,40}
            pagesum += arr[i];
        }
        else {
            studentcount++;
            if(studentcount > m || arr[i] > mid) {
                return false;
            }
            pagesum = arr[i];
        }
    }
    return true;
}

int allocatebooks(int arr[],int n,int m) {
    int sum = 0;
    int maxElement =0; 
    for (int i=0; i<n; i++) {
        sum += arr[i];
        maxElement = max(maxElement,arr[i]);
    }
    int se = maxElement, ee;
    ee = sum;
    int ans = 0;
    int mid = se + (ee - se)/2;    

    while (se<=ee) {
        if (ispossibleSol(arr,n,m,mid)){
            ans = mid;
            ee = mid-1;
        }
        else {

            se = mid+1;
        }
        mid = se + (ee - se)/2;    
    }
    return ans;
}
int main() {
    int arr [] = {10,20,30,40};
    int size = sizeof(arr)/sizeof(int);
    int m = 2;
    cout <<"The required answer is : " << allocatebooks(arr,size,m)<<endl;

}