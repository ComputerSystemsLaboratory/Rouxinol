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
  int p;
  int x[200];
  while(scanf("%d%d%d",&n,&m,&p),n | m){
    fill(x,x+200,0);
    int sum = 0;
    rep(i,n){ scanf("%d",&x[i]); sum+=x[i];}
    sum*=100;
    //printf("%f\n",(float)(p/100.0));
    sum = sum - sum * (float)(p /100.0);
    if(x[m-1]==0) printf("0\n");
    else printf("%d\n",sum/x[m-1]); 
  }

  return 0;

}