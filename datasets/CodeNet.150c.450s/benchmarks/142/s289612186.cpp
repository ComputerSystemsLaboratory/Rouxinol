#include<bits/stdc++.h>
#include<iostream>
#define ll long long
using namespace std;
int main(){
    ll n,k;
    ll a[200003];
    ll i,j;
    cin>>n>>k;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=k;i<n;i++){
        if(a[i]>a[i-k])cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
