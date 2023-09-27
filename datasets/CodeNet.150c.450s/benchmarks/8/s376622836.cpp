#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string astr,bstr;
    int n,a=0,b=0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> astr >> bstr;
        if(astr<bstr) b += 3;
        else if(astr==bstr) {
            a += 1; b += 1;
        }
        else a += 3;
    }
    cout << a << " " << b << endl;
    return 0;
}