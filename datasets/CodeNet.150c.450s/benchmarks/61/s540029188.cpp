#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,a,b,c,x;
  int y,ans;

  while(cin>>n>>a>>b>>c>>x && (n||a||b||c||x)){
    ans=0;
    for(int i=0;i<n;i++){
      if(i>0) {x=(a*x+b)%c;ans++;}
      cin>>y;
      while(ans<=10000 && x!=y){
	x=(a*x+b)%c;
	ans++;
      }
    }
    if(ans>10000) ans=-1;
    cout<<ans<<endl; 
  }
  return 0;
}