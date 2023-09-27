#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<(int)(n);++i)
#define rrep(i,n) for(int i=(int)(n)-1;i>=0;--i)
#define srep(i,s,t) for(int i=(int)(s);i<(int)(t);++i)
#define each(a,b) for(auto& (a): (b))
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
#define sar(a,n) cout<<#a<<":";rep(pachico,n)cout<<" "<<a[pachico];cout<<endl
#define svec(v) cout<<#v<<":";rep(pachico,v.size())cout<<" "<<v[pachico];cout<<endl
#define svecp(v) cout<<#v<<":";each(pachico,v)cout<<" {"<<pachico.first<<":"<<pachico.second<<"}";cout<<endl
#define sset(s) cout<<#s<<":";each(pachico,s)cout<<" "<<pachico;cout<<endl
#define smap(m) cout<<#m<<":";each(pachico,m)cout<<" {"<<pachico.first<<":"<<pachico.second<<"}";cout<<endl

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

const int MAX_SIZE = 52;

int LCS(const string& a, const string& b){
    int n = (int)a.size(), m = (int)b.size();
    vector<int> x(n), y(m);
    rep(i,n){
        x[i] = a[i]-'a';
        if(x[i] < 0){
            x[i] = a[i]-'A'+26;
        }
    }
    rep(i,m){
        y[i] = b[i]-'a';
        if(y[i] < 0){
            y[i] = b[i]-'A'+26;
        }
    }
    vector<vector<int> > vec(MAX_SIZE);
    for(int j = m-1; j >= 0; --j){
        vec[y[j]].push_back(j);
    }
    vector<int> xs(n+1, INF);
    xs[0] = -INF;
    vector<P> nx(n+1,P(-INF,-INF));
    rep(i,n){
        vector<int>& ys = vec[x[i]];
        rep(j,(int)ys.size()){
            int k = lower_bound(xs.begin(),xs.end(),ys[j]) - xs.begin();
            xs[k] = ys[j];
            nx[k] = P(y[ys[j]], k-1);
        }
    }
    int l = lower_bound(xs.begin(),xs.end(),INF-1) - xs.begin();
    int id = l-1;
    int ans = 0;
    while(true){
        id = nx[id].second;
        if(id == -INF) break;
        ans++;
    }
    return ans;
}


int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int q;
    cin >> q;
    rep(i,q){
        string a,b;
        cin >> a >> b;
        cout << LCS(a,b) << "\n";
    }
    return 0;
}

