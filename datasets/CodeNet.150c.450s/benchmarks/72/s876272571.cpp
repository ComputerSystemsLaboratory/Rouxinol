#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - 'A' + 'a';
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
        else
        {
            str[i] = str[i];
        }
    }
    cout << str << endl;

    return 0;
}