#include <bits/stdc++.h>

using namespace std;

int N;
map<int, int> MP;
long long sum = 0;

long long query(int b, int c)
{
    int nb = MP[b];
    sum += (c - b) * nb;
    MP[c] += nb;
    MP[b] = 0;
    return sum;
}

int main()
{
    // 入力
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        MP[a]++;
        sum += a;
    }

    // クエリ
    int Q;
    cin >> Q;
    vector<long long> ans(Q);
    for (int i = 0; i < Q; i++)
    {
        int b, c;
        cin >> b >> c;
        ans[i] = query(b, c);
    }

    for (auto &&a : ans)
    {
        cout << a << endl;
    }

    return 0;
}