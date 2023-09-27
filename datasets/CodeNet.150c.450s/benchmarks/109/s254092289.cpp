#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
#define MOD (1000000007)
#define INF (1e9)
#define INFL (1e12)
 
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
template<class T>using arr=vector<vector<T>>;
template<class T>void pr(T x){cout << x << endl;}
template<class T>void prvec(vector<T>& a){rep(i, a.size()-1){cout << a[i] << " ";} cout << a[a.size()-1] << endl;}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
 
int main()
{
    int n;
    while(cin >> n){
        if(n==0) break;
        int h1, m1, s1, h2, m2, s2;
        int maxv=0, minv=3600*24;
        vector<int> v(60*60*24, 0);
        rep(i, n){
            scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
            // printf("%d:%d:%d %d:%d:%d\n", h1, m1, s1, h2, m2, s2);
            int st = h1*3600 + m1*60 + s1;
            int ed = h2*3600 + m2*60 + s2;
            chmin(minv, st); chmax(maxv, ed);
            v[st] += 1;
            v[ed] += -1;
        }
        int ans = 0;
        rep(i, 86400) v[i+1] += v[i];
        FOR(i, minv, maxv+1) chmax(ans, v[i]);
        pr(ans);
    }
    return 0;}
