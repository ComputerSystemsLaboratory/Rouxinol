#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>

typedef long long ll;
using namespace std;



bool isPrime(int n){
    if(n < 2){
        return 0;
    }
    if(n%2 == 0){
        return n==2;
    }
    for(int i=3;i*i<=n;i++){
        if(n%i == 0) return 0;
    }
    return 1;
}


int main() {
   /*
    ll n,m,k;
   cin>>n>>m>>k;
   vector<ll> a(n);
   vector<ll> b(m);
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<m;i++)cin>>b[i];
   ll t = 0;
   ll no = 0;
   int i = a.size()-1;
   int j = b.size()-1;
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
   while(t <= k){
       if(i >=0 && j >= 0){
           if(a[i] < b[j]){
               if( t+a[i] > k)break;
               t += a[i];
               i--;
               no++;
           }else{
               if( t+b[j] > k)break;
               t += b[j];
               j--;
               no++;
           }
       }else if( i >= 0 ){
           if( t+a[i] > k)break;
           t += a[i];
           i--;
           no++;
       }else if(j >= 0 ){
           if( t+b[j] > k)break;
           t += b[j];
           j--;
           no++;
       }else if(i < 0 && j < 0){
           break;
       }
   }
   cout<<no<<endl;
   */
  vector<int> ans(100000,0);
  int n;
  cin>>n;
  for(int i=1;i<110;i++){
      for(int j=1;j<110;j++){
          for(int k=1;k<110;k++){
                int z = i*i+j*j+k*k+i*j+i*k+j*k;
                if(z < 10e5)ans[z]++;
          }
      }
  }
  for(int i=1;i<=n;i++)cout<<ans[i]<<endl;
    return 0;
}
