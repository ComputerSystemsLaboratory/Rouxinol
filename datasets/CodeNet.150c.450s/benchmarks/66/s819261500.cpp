#include<algorithm>
#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<cmath>
#include<stack>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
using namespace std;


int main(){
  int n,m;
  cin>>n;
  vector<string> user(n);
  rep(i,n)cin>>user[i];
  cin>>m;
  vector<string> t(m);
  rep(i,m)cin>>t[i];
  int key=1;
  rep(i,m){ 
    rep(j,n){
      if(t[i]==user[j]){
	cout<<(key>0?"Opened by":"Closed by")<<" "<<t[i]<<endl;
	key*=-1;
	break;
      }
      if(j==n-1){
	cout<<"Unknown"<<" "<<t[i]<<endl;
      }
    }
  }
  return 0;
}