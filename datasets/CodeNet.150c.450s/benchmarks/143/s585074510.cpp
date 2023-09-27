#include <bits/stdc++.h>
#define int long long

#define rng(i, l, r) for (size_t i = (l); i < (r); ++i)
#define rep(i, n) rng(i, 0, n)
#define gnr(i, l, r) for (size_t i = (r)-1; i >= (l); i--)
#define per(i, b) gnr(i, 0, b)
#define ALL(obj) (obj).begin(), (obj).end()    //1,2,3,...
#define rALL(obj) (obj).rbegin(), (obj).rend() //...,3,2,1

using namespace std;

const int INF = 1e18;

int MIN(int a, int b)
{
    return (a > b) ? b : a;
}



void solve()
{

    // remove the bottom 3 lines when you submit this code.
    std::ifstream in("sample.txt");
    std::cin.rdbuf(in.rdbuf());

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;cin >> n;
    vector<int> A(n);
    rep(i, n) cin >> A[i];
    int q; cin >> q;
    vector<int> B(q);
    vector<int> C(q);
    rep(i, q) cin >> B[i] >> C[i];

    map<int, int> mp ={};
    for (int i = 0; i < n; i++) mp[A[i]]++;

    int sum = 0;
    for (int i = 0; i< n;i++) sum += A[i];
    vector<int> ans;

    for (int i = 0; i< q; i++) {
        int b = mp[B[i]];
        sum = sum - B[i]*b + C[i]*b;
        mp[B[i]] = 0;
        mp[C[i]] += b;

        ans.push_back(sum);

    }

    for (auto a:ans) cout << a << endl;




}

signed main()
{
    solve();
    return 0;
}
