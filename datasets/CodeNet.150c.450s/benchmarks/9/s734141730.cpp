#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string input;
    int count;
    int index;
    while (cin >> input && input != "-")
    {
        cin >> count;
        for (int i = 0; i < count; i++)
        {
            cin >> index;
            input = input.substr(index) + input.substr(0, index);
        }
        cout << input << endl;
        input = "";
        count = 0;
        index = 0;
    }

    return 0;
}
