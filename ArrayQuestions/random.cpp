#include <iostream>
using namespace std;
int main() {
    int x = 1534236469;
    int ans = 0;
    if(x<INT_MIN || x>INT_MAX){
        return 0;
    }
    else {
        while (x!=0){
        int rem = x%10;
        ans = (ans*10) + rem;
        x/=10;
        }
    }
    cout << ans;

        

}