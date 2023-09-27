#include<iostream>
#include<stdio.h>

using namespace std;


int main(){

while(1){
    int n, k;
    cin>> n>> k;
    if(n==0&&k==0) break;
    int a[n];
    for(int i=0; i<n; i++){
        cin>> a[i];
    }
    int s[n+1];
    fill(s, s+n+1, 0);
    for(int i=0; i<n; i++){
        s[i+1]=s[i]+a[i];
    }
    int ans=-100100100;
    for(int i=k; i<=n; i++){
        ans=max(ans, s[i]-s[i-k]);
    }

    cout<< ans<< endl;
}
    return 0;
}