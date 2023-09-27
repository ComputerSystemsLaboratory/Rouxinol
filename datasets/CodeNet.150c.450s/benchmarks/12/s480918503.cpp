#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int h[256];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>h[i];
    for(int i=1; i<=n; i++) {
        cout<<"node "<<i<<": key = "<<h[i];
        if(i>1) cout<<", parent key = "<<h[i/2];
        if(2*i<=n)cout<<", left key = "<<h[2*i];
        if(2*i<n)cout<<", right key = "<<h[2*i+1];
        cout<<", \n";
    }
    
    return 0;
}