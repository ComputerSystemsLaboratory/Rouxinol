#include<cstdio>
#include<algorithm>
#include<cstring>
#define lld long long int
using namespace std;

lld field[201][21];

int main(void){
   int n;scanf("%d",&n);n--;
   int atlas[200];
   for(int i = 0;i < n;i++) scanf("%d",&atlas[i]);
   int a;scanf("%d",&a);
   field[0][atlas[0]] = 1;
   for(int i = 1;i < n;i++){
      for(int j = 0;j <= 20;j++){
         if(j-atlas[i]>=0)field[i][j] += field[i-1][j-atlas[i]];
         if(j+atlas[i]<=20)field[i][j] += field[i-1][j+atlas[i]];
      }
   }

   printf("%lld\n",field[n-1][a]);
   return 0;
}