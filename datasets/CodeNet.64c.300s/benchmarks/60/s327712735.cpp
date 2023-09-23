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
  int a,b;
  while(cin>>a>>b,a||b){
    int in[16][16]={1,0};
    int n;
    cin>>n;
    rep(i,n){
      int c,d;
      cin>>c>>d;
      in[c-1][d-1]=-1;
    }
    rep(i,a){
      rep(j,b){
	if(in[i][j]<0)continue;
	if(j-1>=0&&in[i][j-1]>0)in[i][j]+=in[i][j-1];
	if(i-1>=0&&in[i-1][j]>0)in[i][j]+=in[i-1][j];
      }
    }
    cout<<in[a-1][b-1]<<endl;
  }
}