#include <iostream>
#include <string>
#include <locale>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for (auto& c : str)
    {
        if (isalpha(c))
            if (isupper(c))
                c = tolower(c);
            else if (islower(c))
                c = toupper(c);
    }

    cout << str << endl;

    return 0;
}