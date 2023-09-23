#include <cstdio>
#include <cstring>
int main()
{
 int a,b,c;
 char v[3];
 while(true){
  scanf("%d %s %d\n",&a,v,&b);
  if (strcmp(v,"?")==0) break;
  if (strcmp(v,"+")==0) c=a+b;
  if (strcmp(v,"-")==0) c=a-b;
  if (strcmp(v,"*")==0) c=a*b;
  if (strcmp(v,"/")==0) c=a/b;
  printf("%d\n",c);
 }
 return 0;
}