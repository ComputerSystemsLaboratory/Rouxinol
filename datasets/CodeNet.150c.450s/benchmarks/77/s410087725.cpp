//Misterious Gems
#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

map<string, int> h;

int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};

int main(){
  h["N"]=0; h["E"]=1; h["S"]=2; h["W"]=3;

  while(true){
    int N;
    cin>>N;
    if(N==0)break;
    int mp[21][21];
    memset(mp, 0, sizeof(mp));
    rep(i,N){
      int x, y;
      cin>>x>>y;
      mp[x][y]=1;
    }

    int M, nx=10, ny=10;
    int cn=0;
    cin>>M;
    rep(i,M){
      string d;
      int l;
      cin>>d>>l;
      int dd=h[d];
      rep(j,l){
        nx+=dir[dd][0]; ny+=dir[dd][1];
        if(mp[nx][ny]==1){cn++; mp[nx][ny]=0;}
      }
    }
    if(N==cn)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}