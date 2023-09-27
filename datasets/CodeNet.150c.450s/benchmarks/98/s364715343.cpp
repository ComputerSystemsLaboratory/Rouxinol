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
  int n,m;
  int t[102],h[102];
  while(scanf("%d%d",&n,&m),n | m){
  int tsum=0,hsum=0;
    rep(i,n) {scanf("%d",&t[i]); tsum+=t[i];}
    rep(i,m) {scanf("%d",&h[i]); hsum+=h[i];}
    int mama=1;
    rep(i,n){
      rep(j,m){
        if(tsum - t[i] + h[j] == hsum - h[j] + t[i] && mama){
          mama=0;
          printf("%d %d\n",t[i],h[j]);
        }
      }
    }
    if(mama) printf("-1\n");
  }


  return 0;

}