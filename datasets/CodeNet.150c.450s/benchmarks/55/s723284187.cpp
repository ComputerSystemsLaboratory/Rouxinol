#include <iostream>
#include <string>

using namespace std;

int main()
{
    while (true)
    {
        string input;

        cin >> input;
        if (input.compare("0") == 0) break;

        int sum = 0;
        for (int i = 0; i < input.length(); i++)
        {
            sum += input[i] - '0';
        }
        cout << sum << endl;
    }

    return 0;
}