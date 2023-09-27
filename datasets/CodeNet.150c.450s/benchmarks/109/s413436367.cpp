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

int n;
int imos[111111];

int main(){
	cin.sync_with_stdio(false);
  while(1){
    cin>>n;
    if(n==0)break;
    memset(imos,0,sizeof(imos));
    rep(i,n){
      string s,t;
      cin>>s>>t;
      int start=stoi(s.substr(0,2))*60*60+stoi(s.substr(3,2))*60+stoi(s.substr(6,2));
      int end=stoi(t.substr(0,2))*60*60+stoi(t.substr(3,2))*60+stoi(t.substr(6,2));
      imos[start]+=1;
      imos[end]-=1;
      //dbg(start); dbg(end);
    }
    rep(i,100000)imos[i+1]+=imos[i];
    cout<<*max_element(imos,imos+100000)<<endl;
  }
	return 0;
}