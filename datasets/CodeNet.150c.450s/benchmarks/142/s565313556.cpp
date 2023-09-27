#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k; cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)  cin>>a[i];
for(int i=k;i<=n-1;i++){
if(a[i]>a[i-k]) cout<<"Yes\n";
else{
cout<<"No\n";
}
}
}