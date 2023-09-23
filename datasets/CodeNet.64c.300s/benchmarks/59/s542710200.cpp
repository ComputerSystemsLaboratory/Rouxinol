#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x)
{
    if(x==1) return false;
    if(x<=3) return true;
    if(x%2==0) return false;
    if(x%3==0) return false;
    int lim = sqrt(x);
    for(int i=5; i<=lim; i+=4) {
        if(x%i == 0) return false;
        i+=2;
        if(x%i == 0) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x, ans=0;
    cin>>n;
    for(int i=0; i<n; ++i) {
        cin>>x;
        if(isPrime(x)) ++ans;
    }
    cout<<ans<<'\n';
    return 0;
}