
// Hai similar book allocation or painterspartition ki tarah hi lekin ye samajh nahi aaya 
// isko kahi or se samjh lo .

#include <iostream>
using namespace std;

int ispossible (int stalls[],int n,int mid,int noOfCows){
    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 0; i<n; i++) {
        if((stalls[i] - lastPos) >= mid) {
            cowCount++;
            if(cowCount == noOfCows) {
                return 1;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(int stalls[],int n,int noOfCows) {
    sort(stalls , stalls+n);
    int se = 0;
    int maxi = -1;
    for (int i = 0; i<n; i++ ){
        maxi = max(maxi,stalls[i]);
    }
    int ee = maxi;
    int mid = se + (ee - se)/2;
    int ans = -1;

    while (se<=ee) {
        if (ispossible(stalls,n,mid,noOfCows)) {
            ans = mid;
            se = mid+1;
        }
        else {
            ee = mid-1;
        }
        mid = se + (ee - se)/2;

    }
    return ans;
}

int main() {
    int stalls[] = {4,2,1,3,6};
    int n = sizeof(stalls) /sizeof(int);
    int noOfCows = 2;
    cout << "The required distance between cows are : "<< aggressiveCows(stalls,n,noOfCows)<<endl;


}