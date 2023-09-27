#include <iostream>
#include <string>
using namespace std;


int main(void)
{
    while (1)
    {
        string line;
        getline(cin, line);
        if (line == "0") break;

        int sum = 0;
        for (char ch : line)
        {
            sum += ch - '0';
        }
        cout << sum << endl;
    }

    return 0;
}