#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>
#include<utility>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
  int n;
  while(1){
    cin>>n;
    if(n==0)break;
    int dt[n];
    rep(i,n){
      cin>>dt[i];
    }
    int sum=0;
    sort(dt,dt+n);
    dt[0]=dt[n-1]=0;
    rep(i,n){
      sum+=dt[i];
    }
    cout<<sum/(n-2)<<endl;
  }
  return 0;
}