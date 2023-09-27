#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FIR first
#define SEC second
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;

signed main(){
  int n;
  while(cin>>n,n){
    map<char,char> M;
    REP(i,n){
      char a,b;
      cin>>a>>b;
      M[a]=b;
    }
    int m;
    cin>>m;
    
    REP(i,m){
      char c;
      cin>>c;
      if(M.find(c)!=M.end()){
        cout<<M[c];
      }else cout<<c;
    }
    cout<<endl;
  }
  return 0;
}