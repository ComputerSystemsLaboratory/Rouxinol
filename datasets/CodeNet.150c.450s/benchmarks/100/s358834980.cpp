#include <stdio.h>
int main(void){
   int n,i;
   long long int P;
   P=1;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       P=P*i;
   }
   printf("%lld\n",P);
    return 0;
}
