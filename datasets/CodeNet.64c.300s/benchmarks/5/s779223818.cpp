#include<stdio.h>
int main()
{
int ara[11];
int i,j,t;
for(i=0;i<10;i++){
scanf("%d",&ara[i]);
}
for(i=0;i<10;i++){
for(j=i+1;j<10;j++){
  if(ara[i]>ara[j]){
  t=ara[i];
  ara[i]=ara[j];
  ara[j]=t;
    }
  }
 }

 for(i=9;i>6;i--){
 printf("%d\n",ara[i]);
 }
 return 0;

}