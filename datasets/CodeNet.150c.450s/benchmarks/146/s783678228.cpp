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
int main(void)
{
  int n;
  int i;
  cin>>n;
  rep(i,n){
    double x1,x2,x3,x4;
	double y1,y2,y3,y4;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	if(abs((x2-x1)*(y4-y3)-(x4-x3)*(y2-y1))<1e-10)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}