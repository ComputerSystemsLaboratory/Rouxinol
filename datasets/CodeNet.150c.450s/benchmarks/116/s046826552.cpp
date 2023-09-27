#include<iostream>
#include<cstdio>

using namespace std;

int main(void)
{
int n,k,s,b;
while(1)
{
cin >> n >>k;
if(n==0 && k==0)
break;
int m[100001]={0};
int a[100001];

for(int i=0;i<n;i++)
cin >> a[i];

m[0]=0;
for(int i=0;i<n;i++)
m[i+1]=m[i]+a[i];

s=0;

for(int i=1;i+k<=n;i++)
{
b=m[i+k]-m[i];
if(s<b)
s=b;
}
cout << s << endl;
}
return 0;
}
