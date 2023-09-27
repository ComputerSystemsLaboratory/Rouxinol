#include<iostream>
using namespace std;
int main() {
    int a;
    int b;
    while (1) {
        cin >> a >> b;
        if (a == 0) {
            if (b == 0) break;
        }
        if (a<=b) {
            cout << a << " " << b << endl;
        } else {
            cout << b << " " << a << endl;
        }
    }
    return 0;
}
