#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int N[10001] = {};
    for(int x = 1; x <= 100; x++) {
        for(int y = 1; y <= 100; y++) {
            for(int z = 1; z <= 100; z++) {
                int f = x * x + y * y + z * z + x * y + y * z + z * x;
                if(f <= 10000) N[f]++;
            }
        }
    }
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << N[i] << endl;
    }
}