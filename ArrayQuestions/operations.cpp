#include <iostream>
using namespace std;

void printArr(string arr[],int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main() {
    string operations[] = {"--X","X++","X++"};
    int size = sizeof (operations)/sizeof(string);
    int x = 0;
    for (int i = 0; i<size; i++) {
        if (operations [i][1] == '+') {
            x++;
        }
        else {
            x--;
        }
    }
    cout << x <<endl;
}