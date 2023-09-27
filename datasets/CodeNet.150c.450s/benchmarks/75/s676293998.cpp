/*
** 最大堆
*/

# include <cstdio>
# include <algorithm>
using namespace std;

const int MAX = 500000 + 10;

int n, a[MAX];

void maxHeapify(int i) {
    int l = 2 * i;
    int r = 2 * i + 1;
    int largest;
    if (l <= n && a[l] > a[i]) {
        largest = l;
    }
    else {
        largest = i;
    }
    if (r <= n && a[r] > a[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(a[largest], a[i]);
        maxHeapify(largest);
    }
}

void solve() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = n / 2; i >= 1; i--) {
        maxHeapify(i);
    }

    for (int i = 1; i <= n; i++) {
        printf(" %d", a[i]);
    }

    printf("\n");
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    solve();
    return 0;
}
