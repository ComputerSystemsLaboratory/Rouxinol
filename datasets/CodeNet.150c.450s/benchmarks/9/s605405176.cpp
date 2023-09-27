
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    while(getline(cin, str))
    {
        if(str == "-"){ break; }

        string buf;
        getline(cin, buf);
        int n = stoi(buf);
        for(int i = 0; i < n; i++)
        {
            getline(cin, buf);
            int x = stoi(buf);
            str = str.substr(x) + str.substr(0,x);
        }
        cout << str << endl;

    }

    return 0;
}