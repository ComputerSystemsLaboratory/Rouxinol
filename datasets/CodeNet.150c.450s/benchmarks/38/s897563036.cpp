#include <cstdio>
int main(){
 int n,a,b,c,m;
 scanf("%d",&n);
 while(n>0){
  scanf("%d %d %d",&a,&b,&c);
  m=a>b?(a>c?a:c):(b>c?b:c);
  if (a*a+b*b+c*c==2*m*m){  printf("YES\n"); }
  else { printf("NO\n"); }
  --n;
 };
 return 0;
};