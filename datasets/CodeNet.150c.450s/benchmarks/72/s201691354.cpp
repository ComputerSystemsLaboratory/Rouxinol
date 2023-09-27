#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[])
{
    string input;
    getline(cin, input);
    for (int i = 0; i < input.size(); i++)
    {
        if (islower(input[i]))
        {
            input[i] = toupper(input[i]);
        }
        else
        {
            input[i] = tolower(input[i]);
        }
    }

    cout << input << endl;

    return 0;
}
