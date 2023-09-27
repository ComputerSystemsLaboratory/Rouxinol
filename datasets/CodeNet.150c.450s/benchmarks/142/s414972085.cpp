#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep2(i, x, n) for(int i = x; i < (n); ++i)

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int i = 0, j = k;
    while (j <= n-1) {
        if (a[i] >= a[j]) cout << "No" << endl;
        else cout << "Yes" << endl;
        i++;
        j++;
    }
}