#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;

int main()
{
    int n,m,a[100000];
for(;;){
cin >> n >> m;
if(n==0&&m==0)return 0;
for(int i=0;i<n;i++)cin >> a[i];
int ans=0;
int x=0;
for(int i=0;i<m;i++)x+=a[i];
ans=max(ans,x);
for(int i=0;i<n-m;i++){
x+=a[i+m];
x-=a[i];
ans=max(ans,x);
}
printf("%d\n",ans);
}
}