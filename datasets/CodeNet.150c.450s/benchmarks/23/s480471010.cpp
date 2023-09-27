#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int fib[45]={1,1};
    int n;
    cin>>n;
    for(int i=2; i<=n; i++) fib[i]=fib[i-1]+fib[i-2];
    cout<<fib[n]<<'\n';
    return 0;
}