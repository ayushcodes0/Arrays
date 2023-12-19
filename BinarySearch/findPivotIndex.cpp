
// Here pivot index is the index for which the left side sum is equal to the right side sum.
// And this also a leetcode question.

#include <iostream> 
using namespace std;
int main () {
    int arr[] = {1,7,3,6,5,6};
    int size = sizeof(arr)/sizeof(int );
    int sum1=0,sum2 = 0;
    int ans1,ans2,answer;

    int i = 0, j = size - 1;
    while (i<j-1) {
        if(ans1 != i || (j == size-1 && i == 0)) {
            sum1 += arr[i];
        }
        if(ans2 != j || (j == size-1 && i == 0)) {
            sum2 += arr[j];
        }
        ans1 = i;
        ans2 = j;
        if(sum1 < sum2){
            i++;
        }
        if(sum1 > sum2) {
            j--;
        }
        if (sum1 == sum2) {
            answer = i+1;
            break;
        }
    }
    if (sum1 != sum2) {
        cout << "-1"<<endl;
    }else{
        cout << "Pivot index is : " << answer<<endl;
    }
}