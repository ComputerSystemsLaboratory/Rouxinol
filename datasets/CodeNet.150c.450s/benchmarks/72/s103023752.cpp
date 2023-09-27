#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main(void)
{
    string s;
    getline(cin, s);
    for (char c: s)
    {
        if (islower(c))
        {
            c = toupper(c);
        }
        else if (isupper(c))
        {
            c = tolower(c);
        }
        cout << c;
    }
    cout << endl;


    return 0;
}