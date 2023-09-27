#include <bits/stdc++.h>
using namespace std;

int main()
{
    string chk;
    int ac, wa, tle;
    int N;
    ac = 0;
    wa = 0;
    tle = 0;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> chk;
        if (chk == "AC")
        {
            ac++;
        }
        if (chk == "WA")
        {
            wa++;
        }
        if (chk == "TLE")
        {
            tle++;
        }
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << N - ac - wa - tle << endl;
    return (0);
}
