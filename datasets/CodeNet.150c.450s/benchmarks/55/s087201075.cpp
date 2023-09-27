#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    string str;

    while (getline(cin, str))
    {
        if(str == "0"){
            break;
        }
        int val = 0;
        for (auto c : str)
        {
            val += c - '0';
        }
        cout << val << endl;
    }
}
