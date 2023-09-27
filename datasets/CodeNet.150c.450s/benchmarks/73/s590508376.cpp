#include <iostream>
#include <algorithm>
#include <vector>


#define MAX 100000

using namespace std;


vector<int> S(MAX * 4, 0);


int N;
void update(int i, int x)
{
    i += (N - 1);
    S[i] += x;

    while (i > 0) {
        i = (i - 1) / 2;
        S[i] += x;
    }
}


int find(int s, int t, int k, int l, int r)
{
    if (r <= s || t <= l)
        return 0;

    if (s <= l && r <= t)
        return S[k];

    int u, v;
    u = find(s, t, k * 2 + 1, l, (l + r) / 2);
    v = find(s, t, k * 2 + 2, (l + r) / 2, r);
    return u + v;
}


int main()
{
    int n, q;
    cin >> n >> q;
    N = 1;
    while (N < n)
        N *= 2;

    for (int i = 0; i < q; i++) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            update(x - 1, y);
        } else {
            int ret = find(x - 1, y, 0, 0, N);
            cout << ret << endl;
        }
    }

    return 0;
}

