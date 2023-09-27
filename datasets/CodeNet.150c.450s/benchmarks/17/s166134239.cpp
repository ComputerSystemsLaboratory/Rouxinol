#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
   int a[5];
   scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
   sort(a,a+5);
   for(int i=4;i>=0;i--)
   {
       printf("%d",a[i]);
       if(i>0) printf(" ");
       else printf("\n");
   }
}