#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);

    for (int i = 0; i <= text.size(); i++)
    {
        if (isupper(text[i]))
            text[i] = tolower(text[i]);
        else if (islower(text[i]))
            text[i] = toupper(text[i]);
    }

    cout << text << endl;
}
