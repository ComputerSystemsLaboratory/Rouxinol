#include <cstdio>
int main(void){
    // Here your code !
    int n;
    scanf("%d", &n);
   for (int i = 1; i <= n; i++){
       if (i % 3 == 0){
           printf(" %d", i);
       }
       else if (i % 10 == 3){
           printf(" %d", i);
       }
       else {
           for (int j = 10; i / j; j *= 10){
               if ((i / j) % 10 == 3){
                   printf(" %d", i);
                   break;
               }
           }
       }
   }
   printf("\n");
    return 0;
}