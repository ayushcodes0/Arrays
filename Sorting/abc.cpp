#include <iostream>
using namespace std;
int main() {
    int n = -50;
    int x = 3; 

    double pow = 1;
    int num;
    if (n<0){
        x = 1/x;
        for (double i = 1; i<=-n; i++) {
            pow = pow*x;
        }
    }
    else {
        for (double i = 1; i<=n; i++) {
            pow = pow*x;
        }
    }

    cout << pow;
}
