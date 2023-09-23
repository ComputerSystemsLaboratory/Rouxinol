#include<cstdio>
using namespace std;
int main(void){
   while(1){
      int n;
      scanf("%d",&n);
      if(n == 0) break;
      n = 1000 - n;
      int cnt = 0;
      while(1){
         if(n >= 500){
            n -= 500;
            cnt++;
         }
         else if(n >= 100){
            n -= 100;
            cnt++;
         }
         else if(n >= 50){
            n -= 50;
            cnt++;
         }
         else if(n >= 10){
            n -= 10;
            cnt++;
         }
         else if(n >= 5){
            n -= 5;
            cnt++;
         }
         else if(n >= 1){
            n -= 1;
            cnt++;
         }
         else break;
      }
      printf("%d\n",cnt);
   }
   return 0;
}