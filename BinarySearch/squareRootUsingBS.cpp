// Here i am adding this comment to see changes in the git repo

#include <iostream>
using namespace std;

int squareRoot(int n) {
    int se = 0, ee = n;
    long long int ans;
    long long int mid = se + (ee - se)/2;

    while(se<=ee) {
        if(mid*mid == n) {
            ans = mid;
            break;
        }
        if((mid*mid) > n) {
            ee = mid-1;
        }
        else if((mid*mid) < n) {
            ans = mid;
            se = mid+1;
        }
        mid = se + (ee - se)/2;

    }
    return ans;
}

double preciseSqrt(long long int n,int precision,long long int tempsol) {
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i< precision; i++ ){
        factor = factor / 10;
        for (double j = ans; j*j < n; j = j+factor) {
            ans = j;
        }
    }
    return ans;
}

int main() {
    long long int n;
    cout << "Enter the number to find square root : ";
    cin>> n;
    int tempsol = squareRoot(n);
    cout << " Square root of " << n << " is : " << squareRoot(n) << endl;
    cout << " Precise Square root of " << n << " is : " << preciseSqrt(n,4,tempsol) << endl;
}