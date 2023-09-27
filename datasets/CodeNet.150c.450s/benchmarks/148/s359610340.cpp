#include <iostream>
using namespace std;

int main(void)
{
    int n, i, ac, wa, tle, re;
    string s;
    ac = 0;
    wa = 0;
    tle = 0;
    re = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> s;
        if (s.compare("AC") == 0)
            ac++;
        if (s.compare("WA") == 0)
            wa++;
        if (s.compare("TLE") == 0)
            tle++;
        if (s.compare("RE") == 0)
            re++;
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;

    return 0;
}