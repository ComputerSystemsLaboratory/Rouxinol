//time:
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ac = 0, wa = 0, tle = 0, re = 0;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "AC")
        {
            ac++;
        }
        else if (s == "WA")
        {
            wa++;
        }
        else if (s == "TLE")
        {
            tle++;
        }
        else if (s == "RE")
        {
            re++;
        }
    }

    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
    return 0;
}