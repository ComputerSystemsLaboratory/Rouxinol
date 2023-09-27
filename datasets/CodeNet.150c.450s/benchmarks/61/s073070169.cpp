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

signed main(){
  int n,a,b,c,x;
  while(cin>>n>>a>>b>>c>>x,n){
    vector<int> y(n);
    REP(i,n)cin>>y[i];
    int ans=0;
    for(int p=0;;){
      if(ans>10001){
        cout<<-1<<endl;
        break;
      }
      if(p==n){
        cout<<ans-1<<endl;
        break;
      }
      if(x==y[p]){
        ans++;p++;
      }else{
        ans++;
      }
      x=(a*x+b)%c;

    }
  }

  return 0;
}

