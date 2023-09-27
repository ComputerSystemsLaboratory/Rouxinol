#include <stdio.h>

#define N 10000

int check(int);
int i,j,n,q,S[N],T[N],count=0;


int main(){


  scanf("%d",&n);

  for(i=0;i<n;i++){
      scanf("%d",&S[i]);
  }
   
  scanf("%d",&q);

   for(j=0;j<q;j++){
     scanf("%d",&T[j]);
     for(i=0;i<n;i++){
       if(S[i] == T[j]){
	 count++;
	 break;
       }
     }
   }

   printf("%d\n",count);

   return 0;
     
}