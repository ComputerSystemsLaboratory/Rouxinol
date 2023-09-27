#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);i++)
#define loop(i,x,n) for(int i=(x);i<(n);i++)
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define ub upper_bound
#define lb lower_bound
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;

signed main(){
  vector<int>v(5);
  rep(i,5)cin>>v[i];
  sort(v.begin(),v.end(),greater<int>());
  rep(i,5){
    cout<<v[i];
    if(i<4)cout<<' ';
  }
  cout<<endl;
  return 0;
}