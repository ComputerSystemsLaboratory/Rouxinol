#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if(c < b)
    {
        int t;
        t = b;
        b = c;
        c = t;
    }
    if(b < a)
    {
        int t;
        t = a;
        a = b;
        b = t;
    }
    if(c < b)
    {
        int t;
        t = b;
        b = c;
        c = t;
    }
    cout << a << " " << b << " " << c << endl;

    return 0;
}