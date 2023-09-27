#include <bits/stdc++.h>
using namespace std;
const long long INF = 1LL << 60;
const int mod = 1e9 + 7;

const int m = 2019;

int main()
{

    vector<int> a(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> a.at(i);
    }

    string x = "Yes";
    for (int i = 0; i < 2; i++)
    {
        if (a.at(i) >= a.at(i + 1))
        {
            x = "No";
            break;
        }
    }

    cout << x << endl;

    return 0;
}
