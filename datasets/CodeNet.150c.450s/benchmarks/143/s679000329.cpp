#pragma warning(disable: 4996)
#include <string>
#include <vector>
#include <iostream>
#include <cstdio>
#include <sstream>
#include <fstream>
#include <math.h>
#include <algorithm>

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); i++)
//分布を集計する用
const int M = 100005;

int main() {
    vector<ll>cnt(M);
    int n,q;
    ll S = 0;
    cin >> n;
    vector<int>a(n);
    rep(i, n) {
        cin >> a[i];
        cnt[a[i]]++;//入力の分布を集計
    }
    rep(i, M)S += cnt[i] * i;//初期の和
    cin >> q;
    vector<ll>b(q), c(q);
    rep(i, q) {
        cin >> b[i];
        cin >> c[i];
        cnt[c[i]] += cnt[b[i]];
        S += (c[i] - b[i]) * cnt[b[i]];
        cnt[b[i]] = 0;
        cout << S << endl;
    }


    return 0;
}