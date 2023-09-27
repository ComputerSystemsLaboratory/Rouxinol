#include <iostream>
#include <string>
#include <array>
#include <locale>
#include <cstdlib>
#include <algorithm>

using namespace std;
using lli = long long int;

int main()
{
    array<int, 26> alpha {0};

    string str;
    
    while (cin >> str)
    {
        for (const auto c : str)
        {
            if (isalpha(c))
                alpha[tolower(c) - 'a']++;
        }
    }

    for (int i = 0; i < 26; ++i)
    {
        cout << static_cast<char>('a' + i) << " : " << alpha[i] << endl;
    }

    return 0;
}