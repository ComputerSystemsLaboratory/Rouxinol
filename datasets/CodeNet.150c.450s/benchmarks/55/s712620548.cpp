#include <iostream>
using namespace std;

int main()
{
    string line;
    int s;
    while(getline(cin, line))
    {
        if(line.length() == 1 && line[0] == '0')
            break;
        s = 0;
        for(int i = 0; i < line.length(); i++)
        {
            s += line[i] - '0';
        }
        cout << s << endl;
    }

    return 0;
}