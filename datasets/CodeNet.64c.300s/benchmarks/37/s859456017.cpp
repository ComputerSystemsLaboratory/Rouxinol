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

  int n;
  while(scanf("%d",&n),n){
    int res=0;
    reg(i,1,n){
      reg(j,1,n-1){
        int tmp=i;
        reg(k,1,j){
          tmp = tmp + i + k;
        }
        if(tmp == n) res++;
      }
    }
    printf("%d\n",res);

  }

  return 0;

}