#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

const int MAX_N = 26 * 12 * 14 * 10;
vector<string> memo[MAX_N];

int Key(string x) {
    int sum = 0;
    for (int i = 0, size = x.size(); i < size; ++i)
        sum = (sum + (i + size) * (int)(x[i] - 'A')) % MAX_N;
    return sum % MAX_N;
}

void Insert(string x)
{
    int idx = Key(x);
    memo[idx].emplace_back(x);
}

bool Find(string x)
{
    int idx = Key(x);
    for (auto y : memo[idx])
        if (y == x)
            return true;
    return false;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    string s, x;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s >> x;
        if (s == "insert")
            Insert(x);
        else if (s == "find")
            cout << (Find(x) ? "yes\n" : "no\n" );
    }

    return 0;
}