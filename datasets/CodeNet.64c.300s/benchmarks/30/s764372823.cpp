#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    
    while (cin >> n, n) {
        n = 1000 - n;

        int a = n / 500;
        n %= 500;

        int b = n / 100;
        n %= 100;

        int c = n / 50;
        n %= 50;

        int d = n / 10;
        n %= 10;

        int e = n / 5;
        int f = n % 5;

        int ans = a + b + c + d + e + f;
        cout << ans << endl;
    }
    return 0;
}

