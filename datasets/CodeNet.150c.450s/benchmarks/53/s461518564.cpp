#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll n;
    cin>>n;
    cout<<n<<":";
    while(n%2==0)
    {
        n=n/2;
        cout<<" "<<2;
    }
    for(int i=3;i*i<=n;i=i+2)
    {
        while(n%i==0)
        {
            cout<<" "<<i;
            n=n/i;
        }

    }
    if(n>2)
    {
        cout<<" "<<n;
    }
    cout<<endl;
}
