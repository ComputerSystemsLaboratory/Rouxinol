#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define vi vector<int>
void solve(){
    int n,k;
    cin>>n>>k;
    vi arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=k;i<n;i++) {
        if(arr[i] > arr[i-k]) 
            cout<<"Yes" <<endl;
        else 
            cout <<"No"<<endl;
    }
}

int main(){
   
    solve();
    
    return 0;
}
