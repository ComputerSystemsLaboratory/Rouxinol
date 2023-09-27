#include <iostream>
#include <utility>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int a, b, c;
        cin>>a>>b>>c;
        if(a>b) swap(a, b);
        if(b>c) swap(b, c);
        cout<<((a*a+b*b==c*c) ? "YES\n" : "NO\n");
    }
    return 0;
}

