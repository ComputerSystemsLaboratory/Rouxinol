#include <bits/stdc++.h>
#define r(i,n) for(int i;i<n;i++)
using namespace std;
int main(){
long long a,s=1;
cin>>a;
r(i,a+1)if(i)s*=i;
cout<<s<<endl;
}