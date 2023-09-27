#include<iostream>
using namespace std;
#include<vector>

int main(){
  while(1){
    int n;
    cin>>n;
    if(n==0)break;
    int ans=0;
    int sta=0;
    int l=0;
    int r=0;
    for(int i=0;i<n;i++){
      string s;
      cin>>s;
      if(s=="lu"){
        l=1;
      }else if(s=="ru"){
        r=1;
      }else if(s=="ld"){
        l=0;
      }else if(s=="rd"){
        r=0;
      }
      if(sta==0&&l==1&&r==1){
        ans++;
        sta=1;
      }else if(sta==1&&l==0&&r==0){
        ans++;
        sta=0;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}