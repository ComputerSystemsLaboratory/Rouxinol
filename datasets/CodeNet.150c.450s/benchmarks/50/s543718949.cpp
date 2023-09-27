#include<stdio.h>
int main()
{
    int a;
    int b,c;
    int k;
    scanf("%d",&a);
    while(a!=0){
            if(a==0)
         
                break;
                k=0;
                a=1000-a;
             
        for(b=0;a!=0;b++){
         
 
 
         if(a>=500){
            k+=1;
            a=a-500;
        }
        else if(a>=100&&a<500){
            k+=1;
            a=a-100;
        }
        else if(a>=50&&a<100){
            k+=1;
        a=a-50;
        }
        else if(a>=10&&a<50){
            k+=1;
            a=a-10;
        }
        else if(a>=5&&a<10){
            k+=1;
            a=a-5;
        }
        else if(a>=1&&a<5){
            k+=1;
            a=a-1;
        }
        }
         
         
         
        printf("%d\n",k);
        scanf("%d",&a);
    }
    return 0;
}