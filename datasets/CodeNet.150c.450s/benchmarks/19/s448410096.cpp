#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int a, b;
    while(cin>>a>>b) {
        if(a==0 && b==0) break;
        if(a<=b) cout<<a<<' '<<b<<'\n';
        else cout<<b<<' '<<a<<'\n';
    }
    return 0;
}