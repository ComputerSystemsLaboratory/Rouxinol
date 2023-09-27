#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
   if(b==0) return a;
   return gcd(b,a%b);
}
int main()
{
    int x,y;
    while(scanf("%d %d",&x,&y)!=EOF)
      printf("%d %d\n",gcd(x,y),x/gcd(x,y)*y);
    return 0;
}