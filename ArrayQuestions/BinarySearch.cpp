#include <iostream> // Binary search
using namespace std;
int main() {
    int arr[] = {1,2,3,4,7,9,9,12,35,67,89};
    int size = sizeof(arr) / sizeof(int ) ;
    int key;
    int se = 0;
    int ee = size-1;
    int mid = (se + (ee - se)/2);
    cout << "Enter key you want to search : ";
    cin >> key;
    
    while (se<=ee) {
        if(arr[mid] == key) {
            cout << "Required position is : " << mid << endl;
            break;
        }
        if(arr[mid] > key) {
            ee = mid-1;
        }
        if(arr[mid] < key) {
            se = mid+1;
        }
        mid = (se+(ee - se)/2);
    }
}