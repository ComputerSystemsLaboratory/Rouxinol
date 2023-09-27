#include <stdio.h>
int main(){

      unsigned long long int res;int n ,i ;
      while(scanf("%lld",&n)==1){
        res=1;
        for(i=2;i<=n;i++)res=res*i;
        printf("%llu\n",res);




      }

return 0;
}