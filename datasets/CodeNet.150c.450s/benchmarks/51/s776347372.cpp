#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main() {
    vector<int> a(28), s(0);
    rep(i, 28) cin >> a[i];
    int b = 0;
    sort(a.begin(), a.end());
    rep(i, 30) {
        if(a[i] != i + b + 1) {
            s.push_back(i +b+ 1);
            b++;
        }
    }
    rep(i, 2) cout << s[i] << endl;
}
