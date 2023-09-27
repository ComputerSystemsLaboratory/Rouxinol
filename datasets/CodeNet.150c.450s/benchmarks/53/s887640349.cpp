#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;scanf("%d",&n);
int N=n;printf("%d:",N);
for(int i=2;i<pow(N,0.5)+1;i++)
{
if(n%i==0){printf(" %d",i);n/=i;i--;}
}
if(n!=1)printf(" %d",n);
printf("\n");
}

