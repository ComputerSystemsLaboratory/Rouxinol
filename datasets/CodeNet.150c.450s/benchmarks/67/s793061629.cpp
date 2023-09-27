#include<stdio.h>
int main(){

int n;
while(1){
scanf("%d",&n);if(n==0)break;

int c=0;if(n<=2)c=0;
else{
for(int i=1;i<=(n/2+1);i++)
{int s=0;
for(int j=i;j<=(n/2+1);j++){
	s+=j;if(s==n){c++;break;}}
}}
printf("%d\n",c);
}
return 0;
}