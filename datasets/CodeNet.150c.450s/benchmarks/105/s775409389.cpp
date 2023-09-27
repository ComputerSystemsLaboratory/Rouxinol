#include<stdio.h>
long long IN(void)
{
  long long x=0;short f=0,c=getchar();while(c<48||c>57){f^=c==45,c=getchar();}
  while(c>47&&c<58){x=x*10+c-48,c=getchar();}return f?-x:x;
}
void sub(void)
{
  int N=IN(),S[200],sz=0;long long A[200],x,y[200];
  for(int i=0;i<N;i++){A[i]=IN();}
  for(int i=0;i<N;i++){S[i]=getchar()-'0';}
  for(int i=N-1;i>=0;i--)
  {
    x=A[i];
    if(sz){for(int j=0;j<sz;j++){x=(x<(x^y[j]))?x:x^y[j];}}
    if(x){if(S[i]){puts("1");return;}y[sz++]=x;}
  }
  puts("0");
}
signed main(void){int T=IN();while(T--){sub();}}