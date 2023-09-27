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
  int m,nmin,nmax;
  while(cin>>m>>nmin>>nmax,m){
    vector<int> p(m);
    REP(i,m)cin>>p[i];
    vector<int> gap;
    for(int i=nmin-1;i<nmax;i++){
      gap.PB(p[i]-p[i+1]);
    }
    int M=*max_element(ALL(gap));
    int point=-1;
    REP(i,gap.size()){
      if(gap[i]==M)point=max(point,i+nmin);
    }
    cout<<point<<endl;
  }
  return 0;
}

