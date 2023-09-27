#include <iostream>
#include <algorithm>
using namespace std;

int calc(int v,int x){
  for(int i=v;i>=0;--i) if(i*(100+x)/100==v) return i;
  return 0;
}

int main(){
  int x,y,s;
  while(cin>>x>>y>>s,x||y||s){
    int ans = 0;
    for(int i=1;i<=s-i;++i){
      int a = calc(i,x);
      int b = calc(s-i,x);
      int c = a*(100+y)/100;
      int d = b*(100+y)/100;
      ans = max(ans,c+d);
    }
    cout<<ans<<endl;
  }
  return 0;
}