#include<iostream>
#include<cstdio>
using namespace std;
int memo[17][17];
int road(int f,int d);
int x,y;
int w,h;
int n;
int c=0;

int main(){
  while(1){
    for(int i=0;i<17;i++){
      for(int j=0;j<17;j++){
	memo[i][j]=-1;
      }
    }
    cin >> w >> h;
    if(w==0&&h==0)break;
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> x >> y;
      memo[y][x]=0;
    }
    cout << road(h,w) << endl;
  }

  return 0;
}

int road(int i,int j){
  if(i>h||j>w||i<=0||j<=0)return memo[i][j]=0;
  if(i==1&&j==1)return memo[i][j]=1;
  if(memo[i][j]!=-1)return memo[i][j];
  return memo[i][j]=(road(i-1,j)+road(i,j-1));
}