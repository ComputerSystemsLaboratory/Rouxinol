#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)
#define REP(i, init, n) for(int i = init; i < (n); i++)

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using edge = struct
{
    int to, cost;
};

const int MOD = 1e9 + 7;
const int iINF = 1e9;
const long long int llINF = 1e18;
const double PI = acos(-1.0);

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int main()
{
    vector<int> day = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    REP(i, 1, 12) day[i] += day[i - 1];

    int month, da;

    while(cin >> month >> da, month)
    {
        string ans;
        switch((day[month - 1] + da) % 7)
        {
            case 0:
                ans = "Wednesday";
                break;
            case 1:
                ans = "Thursday";
                break;
            case 2:
                ans = "Friday";
                break;
            case 3:
                ans = "Saturday";
                break;
            case 4:
                ans = "Sunday";
                break;
            case 5:
                ans = "Monday";
                break;
            case 6:
                ans = "Tuesday";
                break;
        }

        cout << ans << endl;
    }

    return 0;
}
