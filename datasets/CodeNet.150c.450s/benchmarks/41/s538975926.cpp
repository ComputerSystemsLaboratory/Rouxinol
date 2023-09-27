#include<cstdio>
#include<map>
#include<iostream>
#include<algorithm>

using namespace std;

#define INF 100000000000
#define lli long long int

lli res[105][105];

int v,e;
int s[100000],t[100000];
int d[1000000];

void warshal(){

  for(int i=0;i<v;i++)
    res[i][i]=0;

  for(int k=0;k<v;k++)
    for(int i=0;i<v;i++)
      for(int j=0;j<v;j++)
        if(res[i][k]!=INF && res[k][j]!=INF)
          res[i][j]=min(res[i][j],res[i][k]+res[k][j]);

  for(int i=0;i<v;i++){
    if(res[i][i]<0){
      printf("NEGATIVE CYCLE\n");
      return;
    }
  }

  for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
      if(res[i][j]==INF && j==v-1) printf("INF");
      else if(res[i][j]==INF) printf("INF ");
      else if(j==v-1) printf("%d",res[i][j]);
      else printf("%d ",res[i][j]);
    }
    printf("\n");
  }

}
int main(){
  scanf("%d%d",&v,&e);
  for(int i=0;i<e;i++)
    scanf("%d%d%d",&s[i],&t[i],&d[i]);

  for(int i=0;i<v;i++)
    for(int j=0;j<v;j++)
      res[i][j]=INF;

  for(int i=0;i<e;i++)
    res[s[i]][t[i]]=d[i];


  warshal();

  return 0;
}