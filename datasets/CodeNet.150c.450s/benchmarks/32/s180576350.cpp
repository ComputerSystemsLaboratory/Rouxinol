#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;

#define fi first
#define se second
#define repl(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rep(i,n) repl(i,0,n)
#define each(itr,v) for(auto itr:v)
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define mmax(x,y) (x>y?x:y)
#define mmin(x,y) (x<y?x:y)
#define maxch(x,y) x=mmax(x,y)
#define minch(x,y) x=mmin(x,y)
#define uni(x) x.erase(unique(all(x)),x.end())
#define exist(x,y) (find(all(x),y)!=x.end())
#define bcnt __builtin_popcount

#define INF INT_MAX/3

int m,nmin,nmax;
int a[1111];

int main(){
	cin.sync_with_stdio(false);
  while(cin>>m>>nmin>>nmax){
    if(m==0)break;
    rep(i,m)cin>>a[i];
    sort(a,a+m);
    reverse(a,a+m);
    int gap=0,res=-1;
    repl(i,nmin-1,nmax){
      if(gap<=a[i]-a[i+1]){
        gap=a[i]-a[i+1];
        res=i+1;
      }
    }
    cout<<res<<endl;
  }
	return 0;
}