#include<iostream>
using namespace std;
int y,x,s;
 
int calc(int p,int x){
  return p*(100+x)/100;
}
 
int main(){
  while(1){
    cin>>x>>y>>s;
    if(y==0&&x==0&&s==0)break;
    int ans=0;
    for(int i=1;i<s;i++){
      for(int j=1;j<s;j++){
    if(calc(i,x)+calc(j,x)!=s)continue;
    ans=max(ans,calc(i,y)+calc(j,y));
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}
