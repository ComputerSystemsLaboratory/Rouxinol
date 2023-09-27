#include <iostream>
#include <string>
using namespace std;

bool is_upper(char c)
{
    if ('A' <= c && c <= 'Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool is_lower(char c)
{
    if ('a' <= c && c <= 'z')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char c;
    int diff = 'A' - 'a';
    string str;
    getline(cin, str);

    for (auto c : str)
    {
        if (is_lower(c))
        {
            cout << (char)(c + diff);
        }
        else if (is_upper(c))
        {
            cout << (char)(c - diff);
        }
        else
        {
            cout << c;
        }
    }
    cout << endl;
    return 0;
}

