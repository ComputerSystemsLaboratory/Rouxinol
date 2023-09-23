#include<stdio.h> 
short f[100];short ans=0;short n;int main(){while(scanf("%d",&n)!=EOF){f[n-1]++;if(f[ans]<f[n-1])ans=n-1;}for(n=0;n<100;n++)if(f[n]==f[ans])printf("%d\n",n+1);}