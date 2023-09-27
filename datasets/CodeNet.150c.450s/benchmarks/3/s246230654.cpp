
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

typedef vector<string> StringList;

void exeOrder(string &src, const StringList &order)
{
    int a = stoi(order[1]);
    int b = stoi(order[2]);
    if(order[0] == "print")
    {
        cout << src.substr(a,  b - a + 1) << endl;
    }
    else if(order[0] == "reverse")
    {
        string rev = src.substr(a, b - a + 1);
        reverse(rev.begin(), rev.end());
        src = src.substr(0, a) + rev + src.substr(b+1);

    }
    else if(order[0] == "replace")
    {
        src = src.substr(0, a) + order[3] + src.substr(b+1);
    }
}

int main()
{
    string str;
    getline(cin, str);

    string buf;
    getline(cin, buf);
    int n = stoi(buf);
    for(int i = 0; i < n; i++)
    {
        getline(cin, buf);
        stringstream ss(buf);

        StringList list;
        string tmp;
        while(getline(ss, tmp, ' '))
        {
            list.push_back(tmp);
        }
        exeOrder(str, list);

    }

    return 0;
}