#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    if(a>b)
        s=">";
    else if(a==b)
        s="==";
    else
        s="<";
    cout << 'a' << ' ' << s << ' ' << 'b' << endl;
    return 0;
}