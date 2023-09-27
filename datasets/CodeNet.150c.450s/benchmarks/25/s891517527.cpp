#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<char, int> count;

    string str;
    while( getline(cin, str) )
    {
        for(size_t i = 0; i < str.length(); i++)
        {
            if(isupper(str[i])){ str[i] = tolower(str[i]); }
            count[str[i]]++;
        }
        
    }

    for(char c = 'a'; c <= 'z'; c++)
    {
        cout << c << " : " << count[c] << endl;
    }

    return 0;
}