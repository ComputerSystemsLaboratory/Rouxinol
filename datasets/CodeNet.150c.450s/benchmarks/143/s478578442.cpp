#include<iostream>
#include<map>
using namespace std;

int main() {
    int n, q;
    int a, b, c;
    map<int, int> mp;
    long long sum[100010] = {};

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        mp[a]++;
        sum[0] += a;
    }

    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> b >> c;
        sum[i+1] = sum[i] + (c - b) * mp[b];
        mp[c] += mp[b];
        mp[b] = 0;
    }

    for (int i = 1; i <= q; i++) cout << sum[i] << endl;
}