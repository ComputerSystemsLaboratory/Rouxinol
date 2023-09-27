#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
using namespace std;
int main(){
  int n,a,b,c,x;
  while(cin>>n>>a>>b>>c>>x,n||a||b||c||x){
    int co=0;
    while(n--){
      int m;cin>>m;
      while(x!=m){
	x=(a*x+b)%c;
	co++;
	if(co>10001)break;
      }
      if(co>10001)break;
      x=(a*x+b)%c;
      co++;
    }
    if(co<=10001)co--;
    while(n-->0)cin>>a;
    if(co>10000)cout<<-1<<endl;
    else cout<<co<<endl;
  }
}