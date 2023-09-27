#include<stdio.h>

int main(){
int m,f,r,sum;
while(1){
scanf("%d %d %d",&m,&f,&r);
if(m==-1 && f==-1 && r==-1)break;
sum=m+f;

if(m==-1 || f==-1){
printf("F");
}else if(sum>=80){
printf("A");
}else if(sum>=65){
printf("B");
}else if(sum>=50){
printf("C");
}else if(sum>=30){
    if(r>=50){printf("C");
    }else printf("D");
}else printf("F");

printf("\n");

}
return 0;
}