#include<stdio.h>
int main()
{
int n[6]={},x;
for(int i=0;i<5;i++)
{scanf("%d",&n[i]);}
 
for(int i=0;i<5;i++){
for(int j=4;j>i;j--){
if(n[j]>n[j-1]){int t=n[j-1];n[j-1]=n[j];n[j]=t;}
}}
for(int i=0;i<5;i++)
{if(i>0)printf(" ");
printf("%d",n[i]);}
printf("\n");
return 0;
}