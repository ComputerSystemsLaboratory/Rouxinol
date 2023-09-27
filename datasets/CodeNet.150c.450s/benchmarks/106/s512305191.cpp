#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    int n = 0;
    cin >> a >> b >> c;
    for (int i = a; i < b+1; ++i) {
        if (c % i == 0) {
            n += 1;
        }
    }
    cout << n << endl;
    return 0;
}
