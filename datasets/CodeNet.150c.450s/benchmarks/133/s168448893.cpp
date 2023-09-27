#include<stdio.h>
static inline int IN(void)
{
  int x=0,f=0,c=getchar();while(c<48||c>57){f^=c==45,c=getchar();}
  while(c>47&&c<58){x=x*10+c-48,c=getchar();}return f?-x:x;
}
int main()
{
  int c[26],D=IN(),i=0,j=0,s[365][26]={{0}},t,update[26]={0},sum=0;
  while(i<26){c[i++]=IN();}i=0;
  while(i<D){while(j<26){s[i][j++]=IN();}i++,j=0;}i=0;
  while(i<D)
  {
    j=0;t=IN()-1;sum+=s[i][t];update[t]=++i;
    while(j<26){sum-=c[j]*(i-update[j]);j++;}
    printf("%d\n",sum);
  }
}