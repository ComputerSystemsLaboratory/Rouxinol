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

  int a[100];
  while(1){
    fill(a,a+100,0);
    //rep(i,100) printf("%d\n",a[i]);
    int n,p;
    scanf("%d%d",&n,&p);
    if(n==0) break;
    int wan=p;
    int now=0;
    int mama=false;
    while(1){
      rep(i,n){
        if(a[i]==p){ printf("%d\n",i); mama=true;}
      }
      if(mama) break;
      if(wan!=0){
        a[now]++;
        wan--;
      }
      else{
        wan=a[now];
        a[now]=0;
      }
      if(now==n-1) now=0;
      else now++;
    }
  }

  return 0;

}