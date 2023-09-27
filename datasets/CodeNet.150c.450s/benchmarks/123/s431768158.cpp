#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int isprime(int x){
    if(x==2)return true;
    if(x<2||x%2==0)return false;
    for (int i=3; i<=sqrt(x); i+=2) {
        if(x%i==0)return false;
    }
    return true;
}

int main(){
    int n;
    int a[10000];
    int ans=0;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>a[i];
        ans+=isprime(a[i]);
    }
    cout<<ans<<endl;
    return 0;
}