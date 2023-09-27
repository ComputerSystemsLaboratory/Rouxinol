#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long qq(long long x,long long y){
    if(y==0){
        return 1;
    }
    else if(y%2==0){
        return qq(x*x%mod,y/2);
    }
    else{
        return x*qq(x,y-1)%mod;
    }
}
int main(){
    long long m,n;
    cin>>m>>n;
    cout<<qq(m,n)<<endl;
    return 0;
}
