/*
** 优先队列
** 为简化代码，本题去除了关于数组溢出的检查
*/

# include <cstdio>
# include <algorithm>
using namespace std;

const int MAX = 2000000 + 10;

int idx, key, a[MAX];

void heapInsert(int k) {
    idx++;
    a[idx] = k;
    int p = idx / 2, i = idx;
    while (i > 1 && a[p] < a[i]) {
        swap(a[p], a[i]);
        i = p;
        p = i / 2;
    }
}

void maxHeapify(int i) {
    int l = 2 * i;
    int r = 2 * i + 1;
    int largest;
    if (l <= idx && a[l] > a[i]) {
        largest = l;
    }
    else {
        largest = i;
    }
    if (r <= idx && a[r] > a[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(a[i], a[largest]);
        maxHeapify(largest);
    }
}

int heapExtract() {
    int max = a[1];
    a[1] = a[idx];
    idx--;
    maxHeapify(1);
    return max;
}

void solve() {
    idx = 0;
    char com[10];
    while (1) {
        scanf("%s", com);
        if (com[2] == 'd') {
            break;
        }
        if (com[2] == 's') {
            scanf("%d", &key);
            heapInsert(key);
        }
        else {
           printf("%d\n", heapExtract());
        }
    }
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    solve();
    return 0;
}
