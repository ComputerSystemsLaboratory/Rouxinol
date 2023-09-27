#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
int a=0,b=0,x;
for(int i=0;i<8;i++){scanf("%d",&x); if(i<=3) a+=x; else b+=x;}
printf("%d\n",max(a,b));
}