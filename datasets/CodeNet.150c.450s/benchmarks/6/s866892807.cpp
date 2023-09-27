#include<stdio.h>

int main(){
   int a,b,c;
    
    do{
     scanf("%d",&a);
    
    }while(a>100||a<0);
    
    do{
    
     scanf("%d",&b);

    }while(b>100||b<0);

    do{
    
     scanf("%d",&c);

    }while(c>100||c<0);


    if(b>a&&c>b){
       printf("Yes\n"); 
    }else {
       printf("No\n"); 
    }
return 0;
}