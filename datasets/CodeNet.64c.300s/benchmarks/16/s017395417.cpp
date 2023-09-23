#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, rm=numeric_limits<int>::max(), ans=numeric_limits<int>::min(), r;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>r;
        ans=max(ans, r-rm);
        rm=min(rm, r);
    }
    cout<<ans<<'\n';
    return 0;
}