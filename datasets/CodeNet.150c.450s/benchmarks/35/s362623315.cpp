#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin>>n, n) {
        int now, max;
        cin>>now;
        max=now;
        for(int i=1; i<n; i++) {
            int t;
            cin>>t;
            if(now<=0) now=t;
            else now+=t;
            if(max<now) max=now;
        }
        cout<<max<<'\n';
    }
    return 0;
}