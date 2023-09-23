#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); ++i) {
        char c = str[i];
        if ('A' <= c && c <= 'Z')
            c = (c - 'A') + 'a';
        else if ('a' <= c && c <= 'z')
            c = (c - 'a') + 'A';
        cout << c;
    }
    cout << endl;
    return 0;
}
