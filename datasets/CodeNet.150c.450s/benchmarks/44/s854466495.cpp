#include<iostream>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
  int a[4],u[10],h,b,t; while(cin>>a[0]){
    rep(i,10)u[i]=0; h=0,b=0;
    rep(i,3)cin>>a[i+1]; rep(i,4)u[a[i]]=1;
    rep(i,4){
      cin>>t; if(a[i]==t)h++;
      if(u[t])b++;
    }
    cout<<h<<" "<<b-h<<endl;
  }
  return 0;
}