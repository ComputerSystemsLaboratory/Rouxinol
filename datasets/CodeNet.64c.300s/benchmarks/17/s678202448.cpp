#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;++i)
int main(){
  int x,y,s;
  while(cin>>x>>y>>s, x){
    int ans = 0;
    x += 100; y += 100;
    
    FOR(i,1,s) FOR(j,1,s){
        if((i*x/100 + j*x/100) == s)
          ans = max(ans, i*y/100 + j*y/100);
    }
    cout<<ans<<"\n";
  }
  return 0;
}