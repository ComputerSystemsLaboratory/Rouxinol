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

int H;
vector<int> A(600000);

int left(int idx) { return idx * 2; }
int right(int idx) { return idx * 2 + 1; }

void maxHeapify(int idx)
{
    int largestIdx = idx;
    int leftIdx = left(idx);
    int rightIdx = right(idx);

    if (leftIdx <= H && A[leftIdx] > A[largestIdx])
        largestIdx = leftIdx;
    if (rightIdx <= H && A[rightIdx] > A[largestIdx])
        largestIdx = rightIdx;

    if (idx != largestIdx)
    {
        swap(A[idx], A[largestIdx]);
        maxHeapify(largestIdx);
    }
    return;
}

void buildMaxHeap()
{
    for (int idx = H / 2; 1 <= idx; idx--)
        maxHeapify(idx);
}

void solve()
{

    // remove the bottom 3 lines when you submit this code.
    std::ifstream in("sample.txt");
    std::cin.rdbuf(in.rdbuf());

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    H = n;
    rep(i, n) cin >> A[i + 1];
    buildMaxHeap();
    rep(i, n)
            cout
        << " "
        << A[i + 1];
    cout << endl;
}

signed main()
{
    solve();
    return 0;
}
