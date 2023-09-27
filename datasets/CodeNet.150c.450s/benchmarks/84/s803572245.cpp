#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#define USE_LLONG_AS_INT
#ifdef USE_LLONG_AS_INT
#define int long long
#define inf (1ll<<60)
#else
#define inf (1<<30)
#endif
#define rep(i,n) for(int i=0;i<(n);i++)
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,a,b) for(int i=(a);i<=(b);i++)
#define rev(i,n) for(int i=(n)-1;i>=0;i--)
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define eb emplace_back
#define pi pair<int,int>
#define vp vector<pair<int,int>>
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define fi first
#define se second
#define MEMSET(a) memset(a,0,sizeof(a))
#define Yes(f) cout<<(f?"Yes":"No")<<endl
#define yes(f) cout<<(f?"yes":"no")<<endl
#define YES(f) cout<<(f?"YES":"NO")<<endl
#define SORT(v) sort(all(v))
#define RSORT(v) sort(all(v), greater<int>())

using namespace std;

const int mod=1e9+7;
const string sp=" ";

void run();

void init() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout<<fixed<<setprecision(12);
}

signed main(){
    init();
    run();
    return 0;
}

int inv(vi &a){
    int n=a.size();
    if(n<=1)return 0;
    vi b(a.begin(),a.begin()+n/2),c(a.begin()+n/2,a.end());
    int cnt=inv(b)+inv(c);
    int i=0,j=0,k=0;
    while(i<n){
        if(j<b.size()&&(k==c.size()||b[j]<c[k]))a[i++]=b[j++];
        else{
            cnt+=n/2-j;
            a[i++]=c[k++];
        }
    }
    return cnt;
}

void run(){
    int n;
    cin>>n;
    vi a(n);
    rep(i,n)cin>>a[i];
    cout<<inv(a)<<endl;
}

