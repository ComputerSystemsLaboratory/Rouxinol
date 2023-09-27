#include<iostream>
using namespace std;

int main() {
    int a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0)break;
        else if (a > b) { cout << b << " " << a << endl; }
        else { cout << a << " " << b << endl; }
    }
    return 0;
}