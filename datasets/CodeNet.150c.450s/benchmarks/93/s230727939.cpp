#include <bits/stdc++.h>
using namespace std;

typedef pair<char, int> Pci;

struct compare {
    bool operator()(const Pci& a, const Pci& b) {
        return a.second < b.second;
    }
};



int partition(vector<Pci>& v, int l, int r) {
    int x = v[r].second;
    int i = l - 1;
    Pci t;
    for (int j = l; j < r; ++j) {
        if (v[j].second <= x) {
            ++i;
            t = v[i];
            v[i] = v[j];
            v[j] = t;
        }
    }
    t = v[i + 1];
    v[i + 1] = v[r];
    v[r] = t;
    return i + 1;
}
void quicksort(vector<Pci>& v, int l, int r) {
    if (l < r) {
        int m = partition(v, l, r);
        quicksort(v, l, m - 1);
        quicksort(v, m + 1, r);
    }
}



int main() {
    int n;
    cin >> n;
    vector<Pci> v(n), w(n);
    for (int i = 0; i < n; ++i) {
        char c;
        int d;
        cin >> c >> d;
        v[i] = make_pair(c, d);
        w[i] = make_pair(c, d);
    }
    quicksort(v, 0, n - 1);
    stable_sort(w.begin(), w.end(), compare());
    int f = 1;
    for (int i = 0; i < n; ++i) {
        if (v[i].first != w[i].first) {
            f = 0;
            break;
        }
    }
    cout << (f ? "Stable" : "Not stable") << "\n";
    for (int i = 0; i < n; ++i) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    // cout << "\n";
    // for (int i = 0; i < n; ++i) {
    //     cout << w[i].first << " " << w[i].second << "\n";
    // }

    return 0;
}