#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;

int n;

int main()
{
    while (cin >> n)
    {
        if (n == 0) return 0;
        
        int ans = 0, l = 0, r = 0;
        bool now = true; // aim : false -> yuka, true -> dai
        string t;

        for (int i = 0; i < n; i++)
        {
            cin >> t;
            if (t == "lu")
                l = 1;
            else if (t == "ru")
                r = 1;
            else if (t == "ld")
                l = 0;
            else
                r = 0;

            if (now == true && r == 1 && l == 1)
            {
                ans++;
                now = false;
            }

            if (now == false && r == 0 && l == 0)
            {
                ans++;
                now = true;
            }
        }
        cout << ans << endl;
    }
}
