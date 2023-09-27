#include <iostream>
using namespace std;

void solve(int a, int b) {
    int count = 0;
    for (int i = 1; i < a; i++) {
        for (int j = i + 1; j < a; j++) {
            int k = b - i - j;
            if (k > j && k <= a) {
                count++;
                //cout << i << j << k << endl;
            }
        }
    }
    cout << count << endl;
}

int main() {
    int a, b;
    while (1) {
        cin >> a >> b;
        if (a + b == 0) break;
        solve(a, b);
    }
}