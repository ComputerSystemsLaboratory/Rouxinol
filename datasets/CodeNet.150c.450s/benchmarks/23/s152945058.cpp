#include<stdio.h>
#include<queue>
#include<algorithm>
using namespace std;
int a[100];
int main(){
int n;
a[1]=1;
a[2]=1;
scanf("%d",&n);
  for (int i=3;i<=n+1;i++)
    a[i]=a[i-1]+a[i-2];
    printf("%d\n",a[n+1]);
return 0;}