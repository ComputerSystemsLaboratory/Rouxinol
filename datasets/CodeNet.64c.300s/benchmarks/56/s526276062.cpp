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

int so(int y,int m,int d){
  int res=d-1;
  if(y%3==0){ rep(i,m-1) res+=20;}
  else{ rep(i,m-1){ if((i+1)%2==0){ res+=19;} else res+=20;}}
  rep(i,y-1){
    if((i+1)%3==0){
      res = res + 20*10;
    }else{
      res = res + 19*5 + 20*5;
    }
  }
  return res;
}

int main(){

  int n,y,m,d;
  scanf("%d",&n);
  rep(i,n){
    scanf("%d%d%d",&y,&m,&d);
    printf("%d\n",so(1000,1,1)-so(y,m,d));

  }

  return 0;

}