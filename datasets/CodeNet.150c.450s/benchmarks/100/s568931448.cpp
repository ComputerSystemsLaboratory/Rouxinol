#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long k=1;
    cin>>n;
    int i;
    for(i=1;i<=n;i++){
        k*=(long)i;
    }
    cout<<k<<endl;
    return(0);
}