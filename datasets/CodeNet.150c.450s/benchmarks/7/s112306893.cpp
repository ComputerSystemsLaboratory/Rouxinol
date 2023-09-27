#include<iostream>
using namespace std;

int main(){
    int a[3];
    for (int i = 0;i < 10; i++) {
        int input;
        cin >> input;

        if (input > a[0]) {
            a[2] = a[1];
            a[1] = a[0];
            a[0] = input;
        } else if (input > a[1]) {
            a[2] = a[1];
            a[1] = input;
        } else if (input > a[2]) {
            a[2] = input;
        }

    }

    for (int j = 0; j < 3; j++) {
        cout << a[j] << endl;
    }

    return 0;
}