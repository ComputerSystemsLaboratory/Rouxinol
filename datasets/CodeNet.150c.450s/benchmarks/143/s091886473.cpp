#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <queue>
#include <math.h>
#define ll long long
#define INF 100000000000
#define N 10000000
using namespace std;


int main(void){
    map <long,long> data;
    long n;
    cin>>n;
    for (long i=0; i<n; i++){
        long p;
        cin>>p;
        data[p]++;
    }
    
    long q;
    cin>>q;
    
    ll ans=0;
    for (auto it=data.begin(); it!=data.end(); it++){
        ans+=(it->first)*(it->second);
    }
    
    for (long i=0; i<q; i++){
        long x,y;
        cin>>x>>y;
        ans=ans-x*data[x]+y*data[x];
        data[y]+=data[x];
        data[x]=0;
        
        cout<<ans<<endl;
    }
}