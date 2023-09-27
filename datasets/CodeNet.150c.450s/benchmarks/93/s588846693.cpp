#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int partition(vector<pair<char, int>> &a, int p, int r) {
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (a[j].second <= a[r].second) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

void quick_sort(vector<pair<char, int>> &a, int p, int r) {
    if (p < r) {
        int q = partition(a, p, r);
        quick_sort(a, p, q-1);
        quick_sort(a, q+1, r);
    }
}

void merge(vector<pair<char, int>> left, vector<pair<char, int>> right, vector<pair<char, int>> &merged_a) {
    int i = 0, j = 0;
    while (i < left.size() || j < right.size()) {
        if ((i < left.size() && left[i].second <= right[j].second) || j == right.size()) {
            merged_a[i+j] = left[i];
            i++;
        } else {
            merged_a[i+j] = right[j];
            j++;
        }
    }
}

void merge_sort(vector<pair<char, int>> &a) {
    if (a.size() > 1) {
        int l_size = a.size() / 2;
        int r_size = a.size() - l_size;
        vector<pair<char, int>> left(l_size);
        vector<pair<char, int>> right(r_size);
        rep(i, l_size) {
            left[i] = a[i];
        }
        rep(i, r_size) {
            right[i] = a[l_size + i];
        }
        merge_sort(left);
        merge_sort(right);
        merge(left, right, a);
    }
}

bool stable(vector<pair<char, int>> a, vector<pair<char, int>> b) {
    rep(i, a.size()) {
        if (a[i].first != b[i].first) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    vector<pair<char, int>> a(n);

    rep(i, n) {
        cin >> a[i].first >> a[i].second;
    }

    vector<pair<char, int>> a_copy = a;

    quick_sort(a, 0, n-1);
    merge_sort(a_copy);

    if (stable(a, a_copy)) printf("Stable\n");
    else printf("Not stable\n");
    
    rep(i, n) {
        printf("%c %d\n", a[i].first, a[i].second);
    }
}
