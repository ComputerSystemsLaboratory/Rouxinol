#include <iostream>
using namespace std;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int a, b;
    while (cin >> a >> b) {
        int x = a + b;
        int i = 0;
        while (x > 0) {
            x /= 10;
            i++;
        }
        cout << i << "\n";
    }
}