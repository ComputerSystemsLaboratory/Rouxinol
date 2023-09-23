#include<cstdio>
using namespace std;
int main(void)
{
   int f[31] = {1};
   for(int i = 0;i < 28;i++)
   {
      int a;
      scanf("%d",&a);
      f[a] = 1;
   }
   for(int i = 0;i < 31;i++)
   {
      if(f[i] == 0) printf("%d\n",i);
   }
   return 0;
}