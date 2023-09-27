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
  stack<int> s;
  int n;
  while(cin>>n){
    if(n!=0)s.push(n);
    else{
      cout<<s.top()<<endl;
      s.pop();
    }
  }
  return 0;
}