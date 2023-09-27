#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str;

    getline(cin, str);

    for (int i = 0; i < (int)str.size(); i++) {
        if (islower(str[i])) {
            cout << (char)toupper(str[i]);
        } else if (isupper(str[i])) {
            cout << (char)tolower(str[i]);
        } else {
            cout << str[i];
        }
    }
    cout << endl;

    return 0;
}