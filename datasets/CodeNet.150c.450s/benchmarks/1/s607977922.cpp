#include<algorithm>
#include<iostream>
#include<vector>
#define rep(i,a) for(int i=0;i<a;i++)
using namespace std;
int main(){
  int n;
  cin>>n;
  const int inf=2e9;
  int r=1;
  vector<int>out(n+1,inf);
  out[0]=-1;
  rep(i,n){
    int a;cin>>a;
    for(int j=r;i>=0;j--){
      if(out[j]<a){
	out[j+1]=a;
	r=max(r,j+1);
	break;
      }
    }
    //rep(i,n)cout<<" "<<out[i];
    //cout<<" "<<out[n]<<endl;
  }
  cout<<r<<endl;
}