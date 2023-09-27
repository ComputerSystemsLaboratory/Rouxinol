#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int x = 0;
    for (; a <= b; a++) {
        if (c % a != 0) continue;
        x++;
    }
    cout << x << endl;
    return 0;
}