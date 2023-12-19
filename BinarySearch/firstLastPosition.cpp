#include <iostream>
using namespace std;

int firstOccur(int arr[],int n,int key) {
    int se = 0,ee = n-1,ans;
    int mid = se +(ee - se)/2;
    while (se<=ee){
        if(arr[mid] == key) {
            ans = mid;
            ee = mid-1;
        }
        if (arr[mid] > key) {
            ee = mid-1;
        }
        if (arr[mid] < key) {
            se = mid+1;
        }
        mid = se +(ee - se)/2;
    }
    return ans;
}

int lastOccur(int arr[],int n,int key) {
    int se = 0,ee = n-1,ans;
    int mid = se +(ee - se)/2;
    while (se<=ee){
        if(arr[mid] == key) {
            ans = mid;
            se = mid + 1;
        }
        if (arr[mid] > key) {
            ee = mid-1;
        }
        if (arr[mid] < key) {
            se = mid+1;
        }
        mid = se +(ee - se)/2;
    }
    return ans;
}

int main() {
    int arr[] = {0,0,1,1,2,2,2,2,2,2,2,2,2,2,2,2};
    int size = sizeof(arr) / sizeof(int);
    int key;
    cout << "Enter the key you want to search : ";
    cin >> key;
    // pair <int , int > p;
    // p.first = firstOccur(arr,size,key);
    // p.second = lastOccur(arr,size,key);
    // cout << "first and last occurance is : " << p << endl;
    cout << "First occurance : " << firstOccur(arr,size,key) << endl;
    cout << "Last occurance : " << lastOccur(arr,size,key) << endl;
    cout << "Total no of occurance : " << lastOccur(arr,size,key) - firstOccur(arr,size,key) + 1 << endl;
}