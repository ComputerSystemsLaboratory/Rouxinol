#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

void max_heapify(vector<int> &a, int i) {
    int h = a.size() - 1;
    int l = 2 * i;
    int r = l + 1;
    int largest = i;
    if (r <= h) {
        if (a[i] < max(a[l], a[r])) {
            if (a[l] < a[r]) largest = r;
            else largest = l;
        }
    } else if (l <= h) {
        if (a[i] < a[l]) largest = l;
    }
    if (largest != i) {
        swap(a[i], a[largest]);
        max_heapify(a, largest);
    }
}

void biuld_max_heap(vector<int> &a) {
    int h = a.size() - 1;
    for (int i = h / 2; i >= 1; i--) {
        max_heapify(a, i);
    }
}

int main() {
    int h;
    scanf("%d", &h);
    vector<int> a(h+1, 0);
    for (int i = 1; i <= h; i++) {
        scanf("%d", &a[i]);
    }
    biuld_max_heap(a);
    for (int i = 1; i <= h; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");
}
