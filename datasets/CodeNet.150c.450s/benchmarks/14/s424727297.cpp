#include<stdio.h>
int main(void){

  int a,b,c,d,e,f,g,h,j,k,l,m,n,o,x,y;
  int i;

  scanf("%d",&n);
  (y=n%3);
  
    for(i=3;i<n;i++){
      
      (x=i%3);
      
      (a=i%10);
      (b=i-a);
      (c=b/10);
      (d=c%10);
      (e=c-d);
      (f=e/10);
      (g=f%10);
      (h=f-g);
      (j=h/10);
      (k=j%10);
      (l=j-k);
      (m=l/10);
      (o=m%10);
      
      if(x==0){
	printf(" %d",i);
      }else if(a==3){
	printf(" %d",i);
      }else if(d==3){
	printf(" %d",i);
      }else if(g==3){
	printf(" %d",i);
      }else if(k==3){
	printf(" %d",i);
      }else if(o==3){
	printf(" %d",i);
      }
    }
    if(y==0){
      printf(" %d",n);
    }
    printf("\n");
    return 0;
}
	
	       