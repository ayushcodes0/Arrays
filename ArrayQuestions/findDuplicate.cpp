#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,2,3,4,5,6,4};
    int size = sizeof(arr) / sizeof(int);
    int ans = 0;
    for (int i=0; i<size; i++) {
        ans = ans ^ arr[i];       // xor ka kaam hai ki jab same same ho tab usko zero bana dega 
                                  // pahle ham 1 se n-1 tak ko 1 se n-1 se xor kiye to sab zero ho gaya ab jo element 2 baar
                                  // wo bach gaya ek to uska xor 0 se hua to wahi bacha bas.
    }
    for (int i = 1; i<size; i++) {
        ans = ans ^ i;
    }
    cout <<"Duplicate element is "<< ans << endl;
}