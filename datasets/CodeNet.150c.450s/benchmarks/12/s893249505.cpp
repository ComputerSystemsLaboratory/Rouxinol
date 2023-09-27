#include <bits/stdc++.h>
#define int long long
#define rng(i, l, r) for (size_t i = (l); i < (r); ++i)
#define rep(i, n) rng(i, 0, n)
#define gnr(i, l, r) for (size_t i = (r)-1; i >= (l); i--)
#define per(i, b) gnr(i, 0, b)
#define ALL(obj) (obj).begin(), (obj).end()    //1,2,3,...
#define rALL(obj) (obj).rbegin(), (obj).rend() //...,3,2,1
using namespace std;
const int INF = 1e18;
const int MOD = 1000000007;

const int MAX = 1e5;

int parent(int i) { return i / 2; }
int left(int i) { return 2 * i; }
int right(int i) { return 2 * i + 1; }

void solve()
{

    // remove the bottom 3 lines when you submit this code.
    std::ifstream in("sample.txt");
    std::cin.rdbuf(in.rdbuf());

    cin.tie(0);
    ios::sync_with_stdio(false);

    int H, A[MAX + 1];

    cin >> H;

    for (int i = 1; i <= H; i++)
        cin >> A[i];

    for (int i = 1; i <= H; i++)
    {
        cout << "node " << i << ": ";
        cout << "key = " << A[i] << ", ";
        if (i != 1)
            cout << "parent key = " << A[parent(i)] << ", ";
        if (left(i) <= H)
            cout << "left key = " << A[left(i)] << ", ";
        if (right(i) <= H)
            cout << "right key = " << A[right(i)] << ", ";
        cout << endl;
    }
}

signed main()
{
    solve();
    return 0;
}

