#include<iostream>
#include<string>
#include<vector>
using namespace std;
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
int x[4]={1,0,-1,0};
int y[4]={0,1,0,-1};
int func(int i,int j,int n,int m,vector<string>& in,int& co){
  co++;
  //cout<<co<<endl;
  in[i][j]='!';
  rep(k,4){
    int nx=i+x[k];
    int ny=j+y[k];
    if(nx>=0 && nx<=n-1 && ny>=0 && ny<=m-1 && in[nx][ny]!='!' && in[nx][ny]=='.')func(nx,ny,n,m,in,co);
  }
  return co;
}
int main(){
  int n,m;
  while(cin>>m>>n,n||m){
    vector<string>in(n);
    int co=0;
    rep(i,n)cin>>in[i];
    rep(i,n)rep(j,m)if(in[i][j]=='@')co=func(i,j,n,m,in,co);
    cout<<co<<endl;
  }
}