#include <cstdio>
using namespace std;
int main()
{
 while(1){
  int a;
  scanf("%d",&a);
 if(a==0) return 0;
  a=1000-a;
  printf("%d\n",a/500+(a/100)%5+(a/50)%2+(a/10)%5+(a/5)%2+a%5);
 }
}