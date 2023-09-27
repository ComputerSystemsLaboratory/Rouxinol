#include<iostream>
using namespace std;



int main(){
  int l,r;
  int n;
  while(cin>>n,n!=0){
    l=r=false;
    int ans = 0;
    bool on = false;
    for(int i=0;i<n;i++){
      string s;
      cin>>s;
      if(s=="lu"){
        l = true;
      }else if(s=="ru"){
        r = true;
      }else if(s=="ld"){
        l = false;
      }else if(s=="rd"){
        r = false;
      }
      if(!on){
        if(l==true&&r==true){
          on = true;
          ans++;
        }
      }else{
        if(l==false&&r==false){
          on = false;
          ans++;
        }
      }
    }
    cout<<ans<<endl;
  }
}