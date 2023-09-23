#include<iostream>
#include<string>
using namespace std;
int n,m;
int mp[21][21];
int dx[4]={0,1,-1,0};
int dy[4]={1,0,0,-1};
int nx,ny;
void f(char c,int a){
  int ar=0;
  switch(c){
  case 'N':
    ar=0;
    break;
  case 'E':
    ar=1;
    break;
  case 'W':
    ar=2;
    break;
  default:
    ar=3;
  }
  for(int i=0;i<a;i++){
    nx+=dx[ar];ny+=dy[ar];
    mp[nx][ny]=0;
  }
}
int main(){
  while(cin>>n&&n){
    for(int i=0;i<21;i++){
      for(int j=0;j<21;j++){
        mp[i][j]=0;
      }
    }
    nx=10;ny=10;
    for(int i=0;i<n;i++){
      int x,y;
      cin>>x>>y;
      mp[x][y]=1;
      if(x==10&&y==10)mp[x][y]=0;
    }
    cin>>m;
    for(int i=0;i<m;i++){
      char ch;int a;
      cin>>ch>>a;
      f(ch,a);
    }
    int flg=0;
    for(int i=0;i<21;i++){
      for(int j=0;j<21;j++){
        if(mp[i][j]==1){
          flg=1;break;
        }
      }
    }
    if(flg){
      cout<<"No"<<endl;
    }else{
      cout<<"Yes"<<endl;
    }
  }
}