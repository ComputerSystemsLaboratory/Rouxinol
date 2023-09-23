#include <iostream>

using namespace std;

int a[100];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=n-1; i>=0; i--) cin>>a[i];
    cout<<a[0];
    for(int i=1; i<n; i++) cout<<' '<<a[i];
    cout<<'\n';
    return 0;
}