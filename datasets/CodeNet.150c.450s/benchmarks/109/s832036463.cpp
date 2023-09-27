#include<cstdio>
#include<cstring>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
typedef pair<int,int> P;
int n;
int S[10001],E[10001];
int f[216005];
int main(){
  while(scanf("%d",&n),n){
    memset(f,0,sizeof(f));
    for(int i=0;i<n;i++){
      int s1,h1,m1,s2,h2,m2;
      scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
      S[i]=h1*3600+m1*60+s1;
      E[i]=h2*3600+m2*60+s2;
      for(int j=S[i];j<E[i];j++) f[j]++;
    }
    int res=0;
    for(int i=0;i<216000;i++){
      res = max(res,f[i]);
    }
    printf("%d\n",res);
  }
}