#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    while(true)
    {
        getline(cin, str);
        if(str == "0"){ break; }


        int sum = 0;
        for(size_t i = 0; i < str.length(); i++)
        {
            sum += str[i] - '0';
        }
        cout << sum << endl;

    }

    return 0;
}