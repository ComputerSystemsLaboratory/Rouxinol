#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
using ll = long long;
using P = pair<int, int>;
#define MAX 2000000

int H, A[MAX+1];

void maxHeapify(int i) {
    int l, r, largest;
    l = 2 * i;
    r = 2 * i + 1;

    // 左の子、自分、右の子で値が最大のノードを選ぶ
    if (l <= H && A[l] > A[i]) largest = l;
    else largest = i;
    if (r <= H && A[r] > A[largest]) largest = r;

    if (largest != i) {
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

int main() {
    cin >> H;

    for (int i = 1; i <= H; ++i) cin >> A[i];

    for (int i = H/2; i >= 1; --i) maxHeapify(i);

    for (int i = 1; i <= H; ++i) {
        cout << " " << A[i];
    }
    cout << endl;

    return 0;
}
