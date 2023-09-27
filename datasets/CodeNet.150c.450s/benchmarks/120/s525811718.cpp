#include<cstdio>
#include<iostream>
using namespace std;
void dfs(int t);
int solve();

int senbei[10][10000];
int keel[10];
int r,c;
int ma;

int main(void){
   while(scanf("%d%d",&r,&c),r+c){
      for(int i = 0;i < r;i++){
         for(int j = 0;j < c;j++){
            scanf("%d",&senbei[i][j]);
         }
      }
      dfs(0);
      printf("%d\n",ma);
   }
   return 0;
}

void dfs(int t){
   if(t == r){
      ma = max(solve(),ma);
      return;
   }
   keel[t] = 1;
   dfs(t+1);
   keel[t] = 0;
   dfs(t+1);
   return;
}

int solve(){
   int ma = 0;
   for(int i = 0;i < r;i++)
      if(keel[i] == 1)
         for(int j = 0;j < c;j++) senbei[i][j] = 1-senbei[i][j];

   for(int i = 0;i < c;i++){
      int a = 0;
      for(int j = 0;j < r;j++){
         a += senbei[j][i];
      }
      ma += max(r-a,a);
   }

   for(int i = 0;i < r;i++)
      if(keel[i] == 1)
         for(int j = 0;j < c;j++) senbei[i][j] = 1-senbei[i][j];

   return ma;
}