#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> P;

#define fi first
#define se second
#define repl(i,a,b) for(ll i=(ll)(a);i<(ll)(b);i++)
#define rep(i,n) repl(i,0,n)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define mmax(x,y) (x>y?x:y)
#define mmin(x,y) (x<y?x:y)
#define maxch(x,y) x=mmax(x,y)
#define minch(x,y) x=mmin(x,y)
#define uni(x) x.erase(unique(all(x)),x.end())
#define exist(x,y) (find(all(x),y)!=x.end())
#define bcnt __builtin_popcountll

#define INF 1e16
#define mod 1000000007

void add(vector<ll>& vs, ll a){
  for(ll v : vs){
    minch(a,(a^v));
  }
  if(a!=0){
    vs.push_back(a);
    sort(all(vs)); reverse(all(vs));
  }
}

bool is_contain(const vector<ll>& vs, ll a){
  for(ll v : vs){
    minch(a,(a^v));
  }
  return (a==0);
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int T;
  cin>>T;
  while(T--){
    int N;
    cin>>N;
    vector<ll> A(N);
    rep(i,N)cin>>A[i];
    string S;
    cin>>S;

    vector<ll> dp;
    dp.push_back(0);

    bool ok=true;
    for(ll i=N-1;i>=0;i--){
      if(S[i]=='0'){
        add(dp,A[i]);
      }else{
        if(!is_contain(dp,A[i]))ok=false;
      }
    }
    if(ok)cout<<"0\n";
    else cout<<"1\n";
  }

  return 0;
}
