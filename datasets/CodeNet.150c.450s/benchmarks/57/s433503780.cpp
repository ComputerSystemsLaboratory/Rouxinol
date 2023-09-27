#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    while(cin>>a>>c>>b)
    {
        if(c=='+') cout<<a+b<<endl;
        else if(c=='-') cout<<a-b<<endl;
        else if(c=='*') cout<<a*b<<endl;
        else if(c=='/') cout<<a/b<<endl;
        else if(c=='?') continue;
    }
    return 0;
}