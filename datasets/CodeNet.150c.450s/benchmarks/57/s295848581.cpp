#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.setf(ios::fixed);
    int a, b;
    char op;
    while(true) {
        cin>>a>>op>>b;
        if(op=='+') cout<<a+b<<'\n';
        else if(op=='-') cout<<a-b<<'\n';
        else if(op=='*') cout<<a*b<<'\n';
        else if(op=='/') cout<<a/b<<'\n';
        else break;
    }
    return 0;
}