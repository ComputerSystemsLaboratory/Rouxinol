#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;
const int H_MAX = 500000;

int H, A[H_MAX + 1];

void maxHeapify(int i)
{
    int l = 2 * i;
    int r = 2 * i + 1;
    int largest = i;
    // left, self, right get max node
    if (l <= H && A[l] > A[largest]) {
        largest = l;
    }
    if (r <= H && A[r] > A[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

void buildMaxHeap()
{
    for (int i = H / 2; i >= 1; --i) {
        maxHeapify(i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> H;
    for (int i = 1; i <= H; ++i) {
        cin >> A[i];
    }

    buildMaxHeap();

    for (int i = 1; i <= H; ++i) {
        printf(" %d", A[i]);
    }
    printf("\n");
    return 0;
}
