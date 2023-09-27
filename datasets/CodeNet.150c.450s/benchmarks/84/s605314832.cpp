#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define rrep(i,n) for(int i=(int)(n)-1;i>=0;--i)
#define srep(i,s,t) for(int i=(int)(s);i<(int)(t);++i)
#define each(a,b) for(auto (a): (b))
#define all(v) (v).begin(),(v).end()
#define len(v) (int)(v).size()
#define zip(v) sort(all(v)),v.erase(unique(all(v)),v.end())
#define cmx(x,y) x=max(x,y)
#define cmn(x,y) x=min(x,y)
#define fi first
#define se second
#define pb push_back
#define show(x) cout<<#x<<" = "<<(x)<<endl
#define spair(p) cout<<#p<<": "<<p.fi<<" "<<p.se<<endl
#define svec(v) cout<<#v<<":";rep(kbrni,v.size())cout<<" "<<v[kbrni];cout<<endl
#define sset(s) cout<<#s<<":";each(kbrni,s)cout<<" "<<kbrni;cout<<endl
#define smap(m) cout<<#m<<":";each(kbrni,m)cout<<" {"<<kbrni.first<<":"<<kbrni.second<<"}";cout<<endl

using namespace std;

typedef pair<int,int> P;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<double> vd;
typedef vector<P> vp;
typedef vector<string> vs;

const int MAX_N = 100005;

template<typename V> class BIT {
private:
    int n; vector<V> bit;
public:
    void add(int i,V x){ i++; while(i < n) bit[i] += x, i += i & -i;}
    V sum(int i){ i++; V s = 0; while(i>0) s += bit[i], i -= i & -i; return s;}
    BIT(){} BIT(int sz){ n = sz + 1, bit.resize(n,0);} //?????????????????????0?????´???
    BIT(vector<V> v){ n = (int)v.size()+1; bit.resize(n); rep(i,n-1) add(i,v[i]);}
    void print(){ rep(i,n-1)cout<<sum(i)-sum(i-1)<< " ";cout<<endl;}
    void print_sum(){ rep(i,n)cout<<sum(i-1)<<" ";cout<<endl;}	//-1????????????
};

//u,v???????´????0~n-1??¨??????
ll inv_count(vector<int>& u,vector<int>& v)
{
    int n = len(u);
    vector<int> p(n);
    BIT<int> bt(n);
    ll ans = 0;
    rep(i,n){
        p[v[i]] = i;
    }
    rep(i,n){
        ans += i-bt.sum(p[u[i]]);
        bt.add(p[u[i]],1);
    }
    return ans;
}


int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vi u(n),v(n);
    iota(all(v),0);
    rep(i,n){
        cin >> u[i];
    }
    vi tmp = u;
    sort(all(tmp));
    rep(i,n){
        u[i] = lower_bound(all(tmp),u[i]) - tmp.begin();
    }
    cout << inv_count(u,v) << "\n";
    return 0;
}