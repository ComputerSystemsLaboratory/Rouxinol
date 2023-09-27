#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<vector>
#include<cstdio>
#include<cmath>
#define pb(in,tmp) in.push_back(tmp)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,b) loop(i,0,b)
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
using namespace std;
int main(){
double x[4],y[4];
while(cin>>x[0]>>y[0]){
  rep(i,3)cin>>x[i+1]>>y[i+1];
  double s123,s12p,s13p,a;
  s123=(x[1]-x[0])*(y[2]-y[0])-(y[1]-y[0])*(x[2]-x[0]);
  s12p=(x[1]-x[0])*(y[3]-y[0])-(y[1]-y[0])*(x[3]-x[0]);
  s13p=(x[3]-x[0])*(y[2]-y[0])-(y[3]-y[0])*(x[2]-x[0]);
  
  a=(s12p+s13p)/s123;
  
  if(s123*s12p>0&&s123*s13p>0&a>0&&a<1)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  }
}