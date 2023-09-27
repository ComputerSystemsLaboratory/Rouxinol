#include <iostream>
using namespace std;
int main()
{
    int a,b,d;
    char c;
    while(cin>>a>>c>>b&&!(c=='?'))
    {
        if(c=='+')
        {
            d=a+b;
        }
        else if(c=='-')
        {
            d=a-b;
        }
        else if(c=='*')
        {
            d=a*b;
        }
        else
            d=a/b;
        cout<<d<<endl;
    }
return 0;
}