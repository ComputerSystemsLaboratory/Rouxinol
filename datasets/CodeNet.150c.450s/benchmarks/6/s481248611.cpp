#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a <= -100 || a >= 100) {
        return 0;
    }
    if (b <= -100 || b >= 100) {
        return 0;
    }
    if (c <= -100 || c >= 100) {
        return 0;
    }
    if (a < b && b < c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}