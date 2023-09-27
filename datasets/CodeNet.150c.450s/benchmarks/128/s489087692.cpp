#include <stdio.h>
int main(){
int n=0;
char a[1000];
for(int i=0;i<1000;i++)a[i]='\0';
scanf("%s",a);
while(a[n]!='\0')n++;
for(int i=n-1;i>=0;i--)printf("%c",a[i]);
printf("\n");
}