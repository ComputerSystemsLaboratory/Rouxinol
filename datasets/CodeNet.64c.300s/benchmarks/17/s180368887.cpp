#include<iostream>
using namespace std;

int main(){
  while(1){
    int x,y,s;
    cin>>x>>y>>s;
    if(x==0&&y==0&&s==0)break;
    int ans=0;
    int ans2;
    for(int i=1;i<s;i++){
      for(int j=1;j<s;j++){
        ans2=i+((i*x)/100)+j+((j*x)/100);
        if(ans2==s){
          ans2=i+((i*y)/100)+j+((j*y)/100);
          ans=max(ans,ans2);
          //cout<<ans2<<" "<<i<<" "<<j<<endl;
        }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}