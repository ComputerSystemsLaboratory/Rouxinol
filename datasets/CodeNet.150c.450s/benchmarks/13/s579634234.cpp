#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, p, doubleS;
    cin >> s >> p;
    doubleS = s + s;
    if (doubleS.find(p) != string::npos)
        puts("Yes");
    else
        puts("No");
}
