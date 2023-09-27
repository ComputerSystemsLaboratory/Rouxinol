#include<iostream>
using namespace std;
int main(){
  while(1){
    int x,y,s,ans=0,a,b;
  cin>>x>>y>>s;
  if(x==0)break;
  for(a=1;a<s;a++)
    for(b=a;b<s;b++){
      int m=a*(100+y)/100+b*(100+y)/100;
      if(a*(100+x)/100+b*(100+x)/100==s&&ans<m)ans=m;
    }
  cout<<ans<<endl;
  }
  return 0;
}