#include<iostream>
using namespace std;

int main()
{
    int a,b,d,i;
    char c;

    while(i <= 1000)
    {
        cin >> a >> c >> b ;
        if (c == '+') d = a+b;
        else if (c == '-') d = a-b;
        else if (c == '*') d = a*b;
        else if (c == '/') d = a/b;
        else if (c == '?') break;
        cout << d << endl;
        i++;
    }
    return 0;
}