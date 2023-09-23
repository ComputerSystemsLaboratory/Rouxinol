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
signed main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n,m;
    while(1){
    cin >> n >> m;
    if(n==0||m==0)break;
    int base[100005]={};
    rep(i,0,n){
        rep(j,0,m){
            int t;cin >> t;
            base[j] |= t<<i;
        }
    }
    int ans=0;
    rep(bit,0,(1<<n)){
        int res=0;
        rep(j,0,m){
            int bits=base[j]^bit;
            int bitss=__builtin_popcount(bits);
            res+=max(bitss,n-bitss);
            //cout << res << endl;
        }
        ans=max(ans,res);
    }
    cout << ans << endl;
    }
    return 0;
}