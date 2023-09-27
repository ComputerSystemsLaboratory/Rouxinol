#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    long long fact=1;
    for(int i=2; i<=n; i++) fact*=i;
    cout<<fact<<'\n';
    return 0;
}