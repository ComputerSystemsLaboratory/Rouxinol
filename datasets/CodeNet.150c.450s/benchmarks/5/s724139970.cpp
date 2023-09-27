#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    int a[100];
    
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>a[i];
    
    
    for( int i=0; i< n-1-i; i++) swap(a[i],a[n-1-i]);
    
    
    for( int i=0; i<n; i++){
        if(i) cout<<" ";
        cout<<a[i];
    }
    
    cout<<endl;
    
    return 0;
}

