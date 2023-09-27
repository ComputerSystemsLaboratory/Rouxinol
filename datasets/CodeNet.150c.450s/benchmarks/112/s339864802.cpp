#include <cstdio>
#include <cstring>
char c[128];
int main(void)
{
  while(1){
    int n;
    scanf("%d",&n);
    if(!n) break;
    memset(c,0,sizeof(c));
    for(int i=0;i<n;i++){
      char a,b;
      scanf(" %c %c",&a,&b);
      c[a] = b;
    }
    int m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
      char a;
      scanf(" %c",&a);
      if(c[a]){
	printf("%c",c[a]);
      } else {
	printf("%c",a);
      }
    }
    puts("");
  }
}