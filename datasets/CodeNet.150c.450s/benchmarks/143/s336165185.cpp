#define ll long long
#define ull unsigned long long
#define pb push_back
#define pf push_front
#define mp make_pair
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int isprime(int n){
    int count =0;
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0)count++;
    if(count)return 0;
    return 1;
}
int gcd(int a, int b) 
{ 
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
    if (a == b) 
        return a; 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 
int main(){
    int n;
    cin>>n;
    ll a;
    ll sum =0;
    map<ll,ll>m;
    for(int i=0;i<n;i++){
        cin>>a;
        sum = sum + a;
        m[a]++;
    }
    int q;
    cin>>q;
    ll b,c;
    for(int i=0;i<q;i++){
        cin>>b>>c;
        sum = sum + m[b]*(c-b);
        m[c]=m[b]+m[c];
        m[b]=0;
        cout<<sum<<endl;
    }
    return 0;
}




