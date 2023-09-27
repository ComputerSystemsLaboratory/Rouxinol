#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,x,n) for(int i=x; i<(n); i++)
#define ALL(n) begin(n),end(n)
#define MOD (1000000007)
#define INF (1e9)
#define INFL (1e18)
 
typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
template<class T>using arr=vector<vector<T>>;
template<class T>void pr(T x){cout << x << endl;}
template<class T>void prvec(vector<T>& a){rep(i, a.size()-1){cout << a[i] << " ";} cout << a[a.size()-1] << endl;}
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

int n;
vector<int> bit;

int sum(int i){
    int ans = 0;
    while(i>0){
        ans += bit[i];
        i -= i & -i;
    }
    return ans;
}

void add(int i, int x){
    while(i<=n){
        bit[i] += x;
        i += i & -i;
    }
}

int main()
{
    cin >> n;
    bit.resize(n+1, 0);
    vector<int> a(n), b(n), c(n);
    rep(i, n) cin >> a[i];
    b = a; sort(ALL(b));
    
    rep(i, n){
        int l=0,r=n-1,m=(l+r)/2;
        while(l<=r){
            if(a[i]==b[m]){
                c[i]=m+1;
                break;
            }else if(a[i]<b[m]){
                r = m-1;
            }else{
                l = m+1;
            }
            m = (l+r)/2;
        }
    }
    // prvec(a);
    // prvec(b);
    // prvec(c);
    ll res=0;
    rep(i, n){
        // cout << i << ": ";
        // prvec(bit);
        res += c[i] - 1 - sum(c[i]-1);
        add(c[i], 1);
    }
    pr(res);
    return 0;}
