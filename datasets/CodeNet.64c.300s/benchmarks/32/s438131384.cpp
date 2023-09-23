#include<stdio.h>
#include<string.h>
int main()
{
int n;
int max;
int min;
long sum=0;
int i;
int ai[10000];
int a,b,c;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&ai[i]);
}
max=ai[0];
for(i=1;i<n;i++){
 if(max<ai[i]) max=ai[i];
}
min=ai[0];
for(i=1;i<n;i++) if(min>ai[i]) min=ai[i];
for(i=0;i<n;i++) sum+=ai[i];
printf("%d %d %ld\n",min,max,sum);
return 0;
}