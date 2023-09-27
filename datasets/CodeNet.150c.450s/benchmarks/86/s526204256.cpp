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
  int n,m,p;
  while(cin>>n>>m>>p,n||m||p){
    double ans=0;
	vector<int>in(n);
	rep(i,n){cin>>in[i];ans+=in[i];}
	if(!in[m-1])cout<<0<<endl;
	else{
	  ans*=100-p;
	  ans/=in[m-1];
	  cout<<(int)ans<<endl;
    }
  }
}