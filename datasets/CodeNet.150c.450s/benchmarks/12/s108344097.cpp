#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

int H;
vector<int> A;

void print(int i)
{
    printf("node %d: key = %d, ", i, A[i]);
    if (i / 2 > 0) {
        printf("parent key = %d, ", A[i / 2]);
    }
    if (2 * i <= H) {
        printf("left key = %d, ", A[i * 2]);
    }
    if (2 * i + 1 <= H) {
        printf("right key = %d, ", A[i * 2 + 1]);
    }
    printf("\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> H;
    A.resize(H + 1);
    for (int i = 1; i <= H; ++i) {
        cin >> A[i];
    }
    for (int i = 1; i <= H; ++i) {
        print(i);
    }
    return 0;
}
