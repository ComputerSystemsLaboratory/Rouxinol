#include<cstdio>
#include<algorithm>

using namespace std;
int main(void){
   int field[3][51],n,r;
   while(scanf("%d%d",&n,&r),n+r){
      for(int i = 0;i < n;i++){field[0][i] = n-i-1;}
      for(int i = 0;i < r;i++){
         int p,c;scanf("%d%d",&p,&c);
         for(int j = 0;j < p-1;j++){
            field[2][j] = field[0][j];
         }
         for(int j = 0;j < c;j++){
            field[1][j] = field[0][p-1+j];
         }
         for(int j = 0;j < c;j++){
            field[0][j] = field[1][j];
         }
         for(int j = 0;j < p-1;j++){
            field[0][c+j] = field[2][j];
         }
      }
      printf("%d\n",field[0][0]+1);
   }
   return 0;
}