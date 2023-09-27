#include <bits/stdc++.h>

typedef long long ll;
#define IO ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#define endl '\n'
const int N = 5e5 + 10;
using namespace std;

int main() {
    IO;
    int n;
    cin >> n;
    map<int, int> cnt;
    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= 100; ++j) {
            for (int k = 1; k <= 100; ++k) {
                int ans = i * i + j * j + k * k + i * j + j * k + k * i;
                cnt[ans]++;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << cnt[i] << endl;
    }


}