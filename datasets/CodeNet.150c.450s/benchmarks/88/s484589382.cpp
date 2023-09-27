#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>

#define INF 999999999
#define mod 1000000007

#define rep(i,n) for(int i=0;i<int(n);i++)
#define rrep(i,n) for(int i=(n);i>=0;i--)
#define REP(i,a,b) for(int i=(a);i<int(b);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back
#define MOD(x) (x%(mod))
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;

/*---------------------------------------------------*/

void solve(double h,double w){
  int c=h*h+w*w,tmp,mini=INF;
  int hh=INF,ww=INF;
  REP(i,1,151){
    REP(j,i+1,151){
      if(i==h&&j==w)continue;
      tmp=i*i+j*j;
      //cout<<i<<" "<<j<<" = "<<tmp<<endl;
      //cout<<i<<" "<<j<<" ---> "<<c<<" < "<<tmp<<" < "<<mini<<endl;
      if(c<tmp&&tmp<mini){
	//cout<<i<<" "<<j<<" = "<<tmp<<endl;
      	hh=i;ww=j;mini=tmp;
      }else if(mini==c&&tmp==c&&(h<i&&i<hh)){
	hh=i;ww=j;mini=tmp;
      }else if(tmp==c&&mini!=c&&h<i){
	hh=i;ww=j;mini=tmp;
      }else if(tmp==mini&&c<i&&i<h){
	hh=i;ww=j;mini=tmp;
      }
    }
  }
  cout<<hh<<" "<<ww<<endl;
}

int main(){
  int h,w;
  while(cin>>h>>w){
    if(h==0&&w==0)break;
    solve(h,w);
  }
  return 0;
}