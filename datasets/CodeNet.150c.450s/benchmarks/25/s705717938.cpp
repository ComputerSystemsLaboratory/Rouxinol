#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char to_lower(char c)
{
    if ('A' <= c && c <= 'Z')
    {
        return char(c - ('A' - 'a'));
    }
    else
    {
        return c;
    }
}

bool is_alphabet(char c)
{
    if ('a' <= to_lower(c) && to_lower(c) <= 'z')
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
    unordered_map<char, int> result_hash;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string input_str;
    for (char c : alphabet)
    {
        result_hash[c] = 0;
    }

    while (getline(cin, input_str))
    {
        for (char c : input_str)
        {

            if (is_alphabet(c))
            {
                result_hash[to_lower(c)] += 1;
            }
        }
    }

    for (char c : alphabet)
    {
        cout << c << " : " << result_hash[c] << endl;
    }
}
