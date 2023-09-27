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
  int n,r;
  int p,c;
  int a[100],b[100];

  while(1){
    scanf("%d %d",&n,&r);
    if(n==0 && r==0) break;
    rep(i,n) a[i]=n-i;
    rep(i,r){
      scanf("%d %d",&p,&c);
      rep(j,p+c-1){
        b[j]=a[j];
      }
      rep(j,p-1){
        a[j+c]=b[j];
      }
      rep(j,c) a[j]=b[j+p-1];
    }
    printf("%d\n",a[0]);
  }

  return 0;

}