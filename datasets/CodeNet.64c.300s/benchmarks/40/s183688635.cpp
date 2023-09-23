#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;    
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] < 'A') continue;
        if (s[i] > 'Z') s[i] -= ' ';
        else s[i] += ' ';
    }

    cout << s << endl;

    return 0;
}