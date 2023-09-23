#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define REPR(i, n) for (int i = n; i >= 0; i--)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define INF 2e9
#define ALL(v) v.begin(), v.end()
using namespace std;
typedef long long ll;

void Main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    std::cout << std::fixed << std::setprecision(15);
    Main();
}

//　if文
// if (num == 0)
// {
//     cout << "0";
// }
// else if (num == 1)
// {
//     cout << "1"; // 1が表示される
// }
// else
// {
//     cout << "01以外";
// }
