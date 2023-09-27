#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
 ll n,k;
 cin>>n>>k;
 vector<ll>a(n+5);
 for(ll i=1;i<=n;i++)cin>>a[i];
 for(ll i=k+1;i<=n;i++)
 	if(a[i-k]<a[i])
      cout<<"Yes"<<endl;
   else 
   cout<<"No"<<endl;
}