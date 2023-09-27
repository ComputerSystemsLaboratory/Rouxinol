#include<bits/stdc++.h>

#define int long long int
#define rep(a,b,c) for(int a=b;a<c;a++)
#define repm(a,b,c) for(int a=(b-1);a>=c;a--)
#define pb push_back
#define str string
#define sf(a) scanfs("%d",&a)
#define pb push_back
#define mp make_pair
#define Fi first
#define Se second
#define ALL(v) (v).begin(), (v).end()

using namespace std;

const int INF = 1e18 + 9;
const int Mod = 1e9 + 7;
inline int replac(str s){double ans=0;rep(i,0,s.length()){ans+=(s[i]-'0')*pow(10,s.length()-i-1);}return (int)ans;}
inline string numstr(int m){str s="";while(m>0){char c;int a=m/10;if(a>0)a=m%(a*10);else a=m;c=(char)('0'+a);s+=c;m/=10;}str st="";for(int i=s.size()-1;i>=0;i--){st+=s[i];}return st;}
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vii;
const int MAX_N=100005;
struct UFF{
    int par[MAX_N];
    int ran[MAX_N];
    void init(int n){
        rep(i,0,n){
            par[i] = i;
            ran[i] = 0;
        }
    }
    int _find(int x){
        if(par[x] == x){
            return x;
        } else {
            return par[x] = _find(par[x]);
        }
    }
    void unite(int x,int y){
        x = _find(x);
        y = _find(y);
        if(x==y)return;

        if(ran[x] < ran[y]) {
            par[x] = y;
        } else {
            par[y] = x;
            if(ran[x] == ran[y]){
                ran[x]++;
            }
        }
    }
    bool same(int x,int y){
        return _find(x) == _find(y);
    }
};

struct edge{
    int from,to,cost;
    edge(){}
    edge(int a,int b,int c){
        from=a;
        to=b;
        cost=c;
    }
    ///sort?????????cost????????????????????????
    const bool operator<(const edge &r) const {
        return cost < r.cost;
    }
};
UFF uf;
edge E[100005];
signed main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,k;///dot and branch
    cin >> n >> k;
    uf.init(n);
    rep(i,0,k){
        int x,y,z;
        cin >> x >> y >> z;
        E[i] = edge(x,y,z);
    }
    sort(E,E+k);
    int res = 0;
    rep(i,0,k){
        edge e = E[i];
        if(!uf.same(e.from,e.to)){
            uf.unite(e.from,e.to);
            res += e.cost;
        }
    }
    cout << res << endl;
    return 0;
}