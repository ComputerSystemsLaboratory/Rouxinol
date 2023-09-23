#include <bits/stdc++.h>

using namespace std;

const int ch = -32;
string s;
int main()
{
    getline(cin, s);
    for(int i = 0;i < (int)s.size();i++)
    {
        if(s[i] >= 97 && s[i] <= 122)s[i] = s[i] - 32;
        else if(s[i] <= 90 && s[i] >= 65)s[i] = s[i] + 32;
    }
    cout << s << '\n';
    return 0;
}

