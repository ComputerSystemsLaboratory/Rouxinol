#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<set>
#include<map>
#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<((int)(n));i++)
#define reg(i,a,b) for(int i=((int)(a));i<=((int)(b));i++)
#define irep(i,n) for(int i=((int)(n))-1;i>=0;i--)
#define ireg(i,a,b) for(int i=((int)(b));i>=((int)(a));i--)
typedef long long int lli;
typedef pair<int,int> mp;

int main(){

  int x[30],y[30];
  char d[40];
  int l[40];
  int n,m;
  int mama[30];
  while(scanf("%d",&n),n){
    fill(mama,mama+30,0);
    int rx=10,ry=10;

    rep(i,n) scanf("%d %d",&x[i],&y[i]);
    scanf("%d",&m);
    rep(i,m){
      //scanf(" %c%d",&d[i],&l[i]);
      cin >> d[i] >> l[i];
      if(d[i]=='N'){
        reg(j,ry,ry+l[i]){
          rep(k,n){
            if(x[k]==rx && y[k]==j) mama[k]=1;
          }
        }
        ry=ry+l[i];
      }
      else if(d[i]=='E'){
        reg(j,rx,rx+l[i]){
          rep(k,n){
            if(x[k]==j && y[k]==ry) mama[k]=1;
          }
        }
        rx=rx+l[i];
      }
      else if(d[i]=='S'){
        reg(j,ry-l[i],ry){
          rep(k,n){
            if(x[k]==rx && y[k]==j) mama[k]=1;
          }
        }
        ry=ry-l[i];
      }
      else if(d[i]=='W'){
        reg(j,rx-l[i],rx){
          rep(k,n){
            if(x[k]==j && y[k]==ry) mama[k]=1;
          }
        }
        rx=rx-l[i];
      }
    }
    bool yu=true;
    rep(i,n){ if(mama[i]==0) yu=false;}
    if(yu) printf("Yes\n");
    else printf("No\n");
  }

  return 0;

}