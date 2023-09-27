#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    long a,b,c;

    while(cin>>a>>ch>>b)
    {
        if(ch=='?')
            break;
        switch(ch)
        {
        case '+':
            c=a+b;
            break;
        case '-':
            c=a-b;
            break;
        case '*':
            c=a*b;
            break;
        case '/':
            c=a/b;
            break;
        }
        cout<<c<<endl;

    }
    return 0;
}