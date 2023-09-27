#include <cstdio>

int n;
int a,b;
int A,B;

int main()
{
  scanf("%d", &n);

  if(!n)return 0;
  
  A=B=0;

  for(int i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    if (a>b) {
      A+=a+b;
    } else if (a<b) {
      B+=a+b;
    } else {
      A+=a;
      B+=b;
    }
  }

  printf("%d %d\n", A,B);

  main();
}