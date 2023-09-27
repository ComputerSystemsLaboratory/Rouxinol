#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pi> vpi;
typedef vector<pll> vpll;

#define  ff           first
#define  ss           second
#define  pb           push_back
#define  IOS          ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define  D(x)         cout << #x << " - " << x << endl;
#define  D2(x)        cout << "[" << #x << ": "; for(auto it:x) cout << it << " "; cout << "]" << endl;
#define  all(x)       (x).begin(), (x).end()
#define  D2p(x)       cout << #x << " ~ [ "; for(auto n: x) cout << n.first << "-" << n.second << " / "; cout << "]" << endl;
#define  ps(x,y)      fixed<<setprecision(y)<<x
#define  rep(i,a,b)   for(ll i=a ; i<b ; ++i)
#define  sz(x)		  x.size();

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll MAXN = 1e6 + 4;


void solve(){
  int n,k;
  cin >> n >> k;
  ll prod=1;
  vll v(n);
  for(int i=0;i<n;i++){
  	cin >> v[i];
  }
  int j=0;
  for(int i=k;i<n;i++){
  	 if(v[j++] >= v[i] )cout <<"No\n";
  	 else cout << "Yes\n";
  }

}

int main(){
  IOS
     solve();
     cerr <<endl <<"[ Time : " << (float)clock() / CLOCKS_PER_SEC << " secs ]" << endl;
}

// integer overflow
// remember to clear visited array
// take input as vector<string> while using grid
// don't assign after modifying