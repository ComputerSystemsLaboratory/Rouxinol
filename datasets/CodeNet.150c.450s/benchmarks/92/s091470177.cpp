#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    while(cin>>a>>b) {
        a+=b;
        for(b=1; (a/=10)!=0; ++b);
        cout<<b<<'\n';
    }
    return 0;
}

