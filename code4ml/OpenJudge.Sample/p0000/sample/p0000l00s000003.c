#include<stdio.h>

int main(void){
  int a,b,c,d,i;  
  a=b=c=d=0;
  for(i=0;i<10;i++){
    scanf("%d",&a);
      if(a>d){
      c=d;b=c;d=a;}
    else if(a>c){
      b=c;
      c=a;   }
    else if(a>b)
      { b=a;}
   

}
    
printf("\n %d\n %d\n %d\n",d,c,b); 
 return 0;
}