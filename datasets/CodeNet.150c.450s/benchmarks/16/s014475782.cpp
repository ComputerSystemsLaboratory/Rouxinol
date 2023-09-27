#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
const long INF = 1e9;
const long MOD = 1e9 + 7;
#define repi(i, n, init) for (int i = init; i < int(n); i++)

int check(stack<char> &Q)
{
    int water = 0, len = Q.size(), depth = 0;
    // cout << "check:";
    repi(i, len, 0)
    {
        // cout << Q.top() << " ";
        if (Q.top() == '\\')
        {
            water += 1 + --depth * 2;
        }
        else if (Q.top() == '/')
        {
            water += 1 + depth++ * 2;
        }
        else
        {
            water += 2 * depth;
        }
        Q.pop();
    }
    // cout << endl;
    return water / 2;
}

int main()
{
    string s;
    vector<int> ponds(0);
    stack<char> pond;
    cin >> s;
    int len = s.length();
    while (s.length())
    {
        //a:=\,b:=/,c:=_
        int a = 0, b = 0, cnt = 1;
        if (s[0] == '\\')
        {
            int j = 1;
            a++;
            while (s.length())
            {
                if (s[j] == '\\')
                {
                    a++;
                }
                else if (s[j] == '/')
                {
                    b++;
                }
                if (a == b)
                {
                    repi(k, j + 1, 0)
                    {
                        pond.push(s[0]);
                        s.erase(0, 1);
                    }
                    ponds.push_back(check(pond));
                    // cout << "s:" << s << endl;

                    break;
                }
                else if (j >= s.length())
                {
                    s.erase(0, 1);
                    // cout << "s(big):" << s << endl;
                    break;
                }
                else
                {
                    j++;
                }
            }
        }
        else
        {
            s.erase(0, 1);
            // cout << "s(else):" << s << endl;
        }
    }
    int sum = 0;
    repi(i, ponds.size(), 0)
    {
        sum += ponds[i];
    }
    cout << sum << endl
         << ponds.size();
    for (auto w : ponds)
    {
        cout << " " << w;
    }
    cout << endl;
    return 0;
}
