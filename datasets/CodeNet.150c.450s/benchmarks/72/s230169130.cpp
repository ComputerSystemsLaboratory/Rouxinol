#include <iostream>
using namespace std;

int main()
{
    string str;

    getline(cin, str);

    for(int i = 0; i < str.length(); i++)
    {
        char c = str[i];
        if(islower(c))
            cout << (char)toupper(c);
        else if(isupper(c))
            cout << (char)tolower(c);
        else
            cout << c;
    }
    cout << endl;

    return 0;
}