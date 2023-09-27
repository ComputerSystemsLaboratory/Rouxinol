#include <bits/stdc++.h>
using namespace std;

#define REP(i, s, n) for (int i = s; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false

//Zeller's conguence

int main()
{
    int maxSize = 0;
    int maxNum = 0;
    string maxStr ;
    string maxNumString ;
    string input;
    map<string, int> m;
    while (cin >> input)
    {
        if (maxSize < input.length())
        {
            maxSize = input.length();
            maxStr = input;
        }
        if (m[input] == 0)
            m[input] = 1;
        else
            m[input]++;

        if (maxNum < m[input])
        {
            maxNum = m[input];
            maxNumString = input;
        }
    }
    cout << maxNumString << " " << maxStr << endl;
    return 0;
}