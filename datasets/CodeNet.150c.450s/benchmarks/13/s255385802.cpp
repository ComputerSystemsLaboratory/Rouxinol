#include <iostream>
#include <string>
using namespace std;


int main(void)
{
    string line;

    getline(cin, line);
    line.append(line);
    string search;
    getline(cin, search);
    if (line.find(search) != string::npos)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}