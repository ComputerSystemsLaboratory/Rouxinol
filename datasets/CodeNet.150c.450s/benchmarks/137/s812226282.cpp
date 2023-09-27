#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    set<string> dict;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s,t;
        cin >> s >> t;
        if (s == "insert")
        {
            dict.insert(t);
        }
        else
        {
            if (dict.count(t) == 0)
            {
                cout << "no" << endl;
            }
            else
            {
                cout << "yes" << endl;
            }
        }
    }
    return 0;
}

