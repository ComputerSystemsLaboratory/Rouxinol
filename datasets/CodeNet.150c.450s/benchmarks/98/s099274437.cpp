#include <stdio.h>
int main(){

  int n,m,suma=0,sumb=0,x,sa[100],sb[100],i,j,blank,a,sumx;

  while(1){
    
  scanf("%d %d",&n,&m);
  if(n == 0 && m == 0) break;

  suma=0;
  sumb=0;
  for(i = 0; i < n; i++){

    scanf("%d",&sa[i]);
    suma += sa[i];

  }
  
  for(j = 0; j < m; j++){

    scanf("%d",&sb[j]);
    sumb += sb[j];

  }

  x=suma-sumb;
  if(x%2 == 1 || x*-1%2 == 1){

    printf("-1\n");
    continue;

  }
  
  x /= 2;

  for(i = 0; i < n-1; i++){

    for(j = 0; j < n-1; j++){

      if(sa[j] > sa[j+1]){

        blank=sa[j];
        sa[j]=sa[j+1];
        sa[j+1]=blank;

      }

    }

  }
  
 for(i = 0; i < m-1; i++){

    for(j = 0; j < m-1; j++){

      if(sb[j] > sb[j+1]){

        blank=sb[j];
        sb[j]=sb[j+1];
        sb[j+1]=blank;

      }

    }

  }

 // for(i = 0; i < n; i++) printf("%d\n",sa[i]);
 //for(i = 0; i < m; i++) printf("%d\n",sb[i]);
 //printf("\n");
 // printf("%d %d %d\n",x,suma,sumb);
 
 a=0;
 if(x <= 0){
 
   for(i = 0; i < n; i++){

     for(j = 0; j < m; j++){

       if(sa[i]-sb[j] == x){

         printf("%d %d\n",sa[i],sb[j]);
         a=1;
         break;

       }

     }

     if(a == 1) break;

   }

 } else {

   for(i = 0; i < n; i++){

     for(j = 0; j < m; j++){

       if(sa[i]-sb[j] == x){

         printf("%d %d\n",sa[i],sb[j]);
         a=1;
         break;

       }

     }

     if(a == 1) break;

   }

 }

 

 if(a == 0) printf("-1\n");

  }

 return 0;

}

 