#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int alp[26];
    char c;
    int x;
    for (int i = 0; i < 26; i++)
        alp[i] = 0;
    while (cin >> str)
    {
        for (unsigned i = 0; i < str.length(); i++) {
            str[i] = tolower(str[i]);
            if (str[i] >= 'a'&&str[i] <= 'z') {
                x = str[i] - 'a';
                alp[x]++;
            }
        }
    }
    for (int i = 0; i < 26; i++) {
        c = 'a' + i;
        cout << c << " : " << alp[i] << endl;
    }
    return 0;
}