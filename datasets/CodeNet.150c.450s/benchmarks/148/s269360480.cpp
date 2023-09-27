#include <bits/stdc++.h>
#define ll long long int
#define yorn(f) cout << ((f) ? "Yes" : "No") << endl;
#define YORN(f) cout << ((f) ? "YES" : "NO") << endl;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define println(x) cout << x << endl;
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    
    auto c = vector<int>({0, 0, 0, 0});
    rep(i, n)
    {
        if ("AC" == s[i])
        {
            c[0]++;
        }
        if ("WA" == s[i])
        {
            c[1]++;
        }
        if ("TLE" == s[i])
        {
            c[2]++;
        }
        if ("RE" == s[i])
        {
            c[3]++;
        }
    }

    cout << "AC x " << c[0] << endl;
    cout << "WA x " << c[1] << endl;
    cout << "TLE x " << c[2] << endl;
    cout << "RE x " << c[3] << endl;
    return 0;
}