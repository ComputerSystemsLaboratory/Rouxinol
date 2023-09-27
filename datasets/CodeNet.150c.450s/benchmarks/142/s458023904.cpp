#include<bits/stdc++.h>
using namespace std;
int main(){int n,k,i;
cin>>n>>k;
int a[n+1];
for(i=1;i<=n;i++)cin>>a[i];
for(i=k+1;i<=n;i++){
    if(a[i]>a[i-k]){cout<<"Yes\n";}
    else{cout<<"No\n";}
}
    return 0;}