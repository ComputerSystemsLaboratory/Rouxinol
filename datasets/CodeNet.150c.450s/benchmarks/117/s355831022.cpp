#include <bits/stdc++.h>
using namespace std;

int cnt=0;
void merge_sort(vector<int> &a) {
    int n = a.size();
    if (n==1) return;

    vector<int> b(begin(a), begin(a) + n/2);
    vector<int> c(begin(a) + n/2, end(a));
    merge_sort(b);
    merge_sort(c);

    for (int i = 0, j = 0, k = 0; i < n; ++i) {
        if (k == c.size())      a[i] = b[j++];
        else if (j == b.size()) a[i] = c[k++];
        else if (b[j] < c[k])   a[i] = b[j++];
        else                    a[i] = c[k++];
        cnt++;
    }
}
signed main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    merge_sort(a);
    for (int i = 0; i < n; ++i) {
        cout << a[i];
        cout << (i != n -1 ? " " : "\n");
    }
    cout << cnt << endl;
    return 0;
}