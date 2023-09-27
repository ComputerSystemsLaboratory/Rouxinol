#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<complex>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<utility>
#include<tuple>
using namespace std;
typedef long long ll;
typedef unsigned int ui;
const ll mod = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
typedef pair<int, int> P;
#define stop char nyaa;cin>>nyaa;
#define rep(i,n) for(int i=0;i<n;i++)
#define per(i,n) for(int i=n-1;i>=0;i--)
#define Rep(i,sta,n) for(int i=sta;i<n;i++)
#define Per(i,sta,n) for(int i=n-1;i>=sta;i--)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define per1(i,n) for(int i=n;i>=1;i--)
#define Rep1(i,sta,n) for(int i=sta;i<=n;i++)
typedef long double ld;
const ld eps = 1e-8;
const ld pi = acos(-1.0);
typedef pair<ll, ll> LP;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

bool add(vector<ll> &mat,vector<int> &ls,ll s,bool flag){
  int n=mat.size();
  rep(i,n){
    if(ls[i]==-1) continue;
    if(s&(1ll << ls[i])) s^=mat[i];
  }
  if(flag) return s==0;
  ls.push_back(-1);
  per(i,64){
    if(s&(1ll << i)) {
      ls.back()=i;
      break;
    }
  }
  if(ls.back()!=-1){
    rep(i,n){
      if(mat[i]&(1ll << ls.back())) mat[i]^=s;
    }
  }
  mat.push_back(s);
  sort(mat.begin(),mat.end(),[](ll a,ll b){return a>b;});
  sort(ls.begin(),ls.end(),[](ll a,ll b){return a>b;});
  return true;
}


void solve(int n,vector<ll> &a,string &s){
  vector<ll> mat={};vector<int> ls={};
  per(i,n){
    if(s[i]=='0') {
      add(mat,ls,a[i],0);
    }
    else{
      bool flag=add(mat,ls,a[i],1);
      if(!flag) {
        cout << 1 << endl;
        return;
      }
    }
  }
  cout << 0 << endl;
}

int main(){
  int t;
  cin >> t;
  rep(i,t){
    int n;cin >> n;vector<ll> a(n);string s;
    rep(i,n){
      cin >> a[i];
    }
    cin >> s;
    solve(n,a,s);
  }
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout << fixed << setprecision(50);
}