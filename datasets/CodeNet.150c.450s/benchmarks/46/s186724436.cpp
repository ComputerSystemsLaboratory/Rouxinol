#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
while(true){
int i,j,k,n,m,x;
scanf("%d",&n);
scanf("%d",&m);

if(n == 0 && m == 0){
   break;
}

x = 0;
for(i=1;i<n-1;i++){
    for(j=i+1;j<n;j++){
       for(k=j+1;k<n+1;k++){
           if(i+j+k == m){
              x += 1;
          }
        }
      }
   }
printf("%d\n",x);
}
return 0;
}