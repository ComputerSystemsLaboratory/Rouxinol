#include <bits/stdc++.h>
using namespace std;

void solve(string &str, int m, vector<int> h);

int main()
{
    while (1)
    {
        string str;
        cin >> str;
        if (str == "-") break;

        int m = 0;
        cin >> m;

        vector<int> h(m, 0);
        for (int i = 0; i < m; i++)
        {
            cin >> h[i];
        }
        // 参照渡しの場合，呼び出し時に&は要らない（プロトタイプ宣言と実装についていれば良い）
        solve(str, m, h);

        cout << str << endl;
    }

    return 0;
}

void solve(string &str, int m, vector<int> h)
{
    string res;
    for (int i = 0; i < m; i++)
    {
        rotate(str.begin(), str.begin() + h[i], str.end());
    }
    return;
}

