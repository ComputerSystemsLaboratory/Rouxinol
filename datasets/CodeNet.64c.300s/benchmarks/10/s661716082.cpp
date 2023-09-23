#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while (a != 0 || b != 0) {
        if (a < b) cout << a << ' ' << b << "\n";
        else cout << b << ' ' << a << "\n";
        cin >> a >> b;
    }
    cout << flush;
    return 0;
}