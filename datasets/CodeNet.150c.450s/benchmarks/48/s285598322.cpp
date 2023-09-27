#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FR first
#define SC second
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=1000000009;


signed main(){
  int e;
  while(cin>>e,e){
    int m=INF;
    REP(y,1001){
      REP(z,101){
        if(e-y*y-z*z*z>=0){
          int x=e-y*y-z*z*z;
          m=min(m,x+y+z);
        }
      }
    }
    cout<<m<<endl;
  }
  return 0;
}

