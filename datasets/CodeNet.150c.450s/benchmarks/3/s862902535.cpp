#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, replaced_string, command, sub_string;
    int input_length, a, b;
    cin >> str;
    cin >> input_length;
    for (int i = 0; i < input_length; ++i)
    {
        cin >> command >> a >> b;
        if (command == "replace")
        {
            cin >> replaced_string;
            str.replace(a, replaced_string.length(), replaced_string);
        }
        else if (command == "print")
        {
            sub_string = str.substr(a, (b - a + 1));
            cout << sub_string << endl;
        }
        else if (command == "reverse")
        {
            replaced_string = "";
            sub_string = str.substr(a, (b - a + 1));
            for (int i = sub_string.length() - 1; 0 <= i; --i)
            {
                replaced_string += sub_string[i];
            }
            str.replace(a, replaced_string.length(), replaced_string);
        }
    }

    return 0;
}
