#include <bits/stdc++.h>

using namespace std;

void __start__() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifdef MY
    freopen("/home/ainur/CLionProjects/wow/input.txt", "r", stdin);
    freopen("/home/ainur/CLionProjects/wow/output.txt", "w", stdout);
#else
#define endl '\n'
    //freopen("search.in", "r", stdin);
    //freopen("search.out", "w", stdout);
#endif
}

#define sz(x) (int)x.size()
#define yes cout<<"Yes\n"
#define  no cout << "No\n"
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define ft first
#define sd second
#define read(a) for(auto &qwqw:a)cin >> qwqw;
#define print(a) for(auto qwqw:a)cout<<qwqw<<' ';
#define print_plus(a) for(auto qwqw:a)cout<<qwqw+1<<' ';
//#define FOR(i, b, n) for(int i=b;i<n;i++) #define FOR(i, n) FOR(i, 0, n) #define FOR(n) FOR(i, 0, n)
mt19937_64 rnd(time(0));
#define int long long
using ll = long long;
using vi = vector<int>;
using ld = long double;
using vb = vector<bool>;
using pii = pair<int, int>;
using vd = vector<long double>;


int log2(int q) {
    int c = 0;
    while (q) {
        q >>= 1;
        c++;
    }
    return c;
}

void test_case() {
    int n, a, b, c, d;
    cin >> n;
    a=b=c=d=0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        if(s=="AC")
            a++;
        if(s=="WA")
            b++;
        if(s=="TLE")
            c++;
        if(s=="RE")
            d++;
    }
    cout << "AC x " << a<<'\n';
    cout << "WA x " << b<<'\n';
    cout << "TLE x " << c<<'\n';
    cout << "RE x " << d<<'\n';

}

signed main() {
    __start__();
    int Q = 1;
    //cin >> Q;
    while (Q--) {
        test_case();
    }
}



