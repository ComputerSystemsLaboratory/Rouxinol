#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
long n,a[10001],sum=0;
cin>>n;
for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
sort(a,a+n);
printf("%ld %ld %ld\n",a[0],a[n-1],sum);
return 0;
}