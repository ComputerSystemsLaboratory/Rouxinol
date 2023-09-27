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
const int inf=1e8;
using namespace std;
int main(){
  int a,b,n;
  while(cin>>a>>b,a||b){
    cin>>n;
    vector<vector<int> >out(a+1,vector<int>(b+1));
    rep(i,n){
      int x,y;cin>>x>>y;
      out[x][y]=-inf;
    }
    out[0][1]=1;
    loop(i,1,1+a)loop(j,1,1+b){
      if(out[i][j]<0)continue;
      int sum=0;
      if(out[i-1][j]>=0)sum+=out[i-1][j];
      if(out[i][j-1]>=0)sum+=out[i][j-1];
      out[i][j]=sum;
    }
    /*rep(i,a+1){
      rep(j,b+1)cout<<" "<<out[i][j];
      cout<<endl;
    }*/
    cout<<out[a][b]<<endl;
  }
}