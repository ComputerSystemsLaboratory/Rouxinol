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
int cost[1001][1001];///i->j=cost;
int mincost[1001];///shougoX->minimum-cost
bool used[1001];///inX?
int N;///ten-kazu
int prim(){
    rep(i,0,N){
        mincost[i]=INF;
        used[i]=false;
    }
    mincost[0] = 0;
    int res = 0;

    while(true){
        int v = -1;
        rep(u,0,N){
            if(!used[u]&&(v == -1 || mincost[u] < mincost[v]))v=u;
        }
        if(v == -1)break;
        used[v] = true;
        res += mincost[v];

        rep(i,0,N){
            mincost[i] = min(mincost[i], cost[v][i]);
        }
    }
    return res;
}

signed main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    map<int,int> mx,my;
    int n;
    cin >> n;
    N=n;
    rep(i,0,1001){
        rep(j,0,1001){
            cost[i][j]=INF;
        }
    }
    rep(i,0,n){
        rep(j,0,n){
            int x;cin >> x;
            if(x==-1)continue;
            cost[i][j]=x;
            cost[j][i]=x;
        }
    }
    cout << prim() << endl;
    return 0;
}