#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for (int i = 0; i < n; i++)
typedef long long ll;
// Welcome to my source code!

int H;

void maxHeapify(int A[], int i) {
    int l, r, largest;
    l = i*2;
    r = i*2+1;
    if (l <= H && A[l] > A[i]) largest = l;
    else largest = i;
    if (r <= H && A[r] > A[largest]) largest = r;

    if (largest != i) {
        swap(A[i], A[largest]);
        maxHeapify(A, largest);
    }
}

int main() {
    cin >> H;
    int A[H+1];
    for (int i = 1; i <= H; i++) cin >> A[i];

    for (int i = H/2; i >= 1; i--) maxHeapify(A, i);

    for (int i = 1; i <= H; i++) {
        cout << ' ' << A[i];
    }
    cout << endl;
}
