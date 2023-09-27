#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a <= -500 || a >= 500) {
        return 0;
    }
    if (b <= -500 || b >= 500) {
        return 0;
    }
    if (a < b) {
        cout << "a < b" << endl;
    } else if (a > b) {
        cout << "a > b" << endl;
    } else if (a == b) {
        cout << "a == b" << endl;
    }
}