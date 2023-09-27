#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;

const int INF = INT_MAX;
ll cnt = 0;

void merge_sort(vector<int> &a) {
    if(a.size() == 1) return;
    int mid = a.size() / 2;
    vector<int> sorted1(mid), sorted2(a.size() - mid);
    copy(a.begin(), a.begin() + mid, sorted1.begin());
    copy(a.begin() + mid, a.end(), sorted2.begin());
    merge_sort(sorted1);
    merge_sort(sorted2);
    sorted1.emplace_back(INF);
    sorted2.emplace_back(INF);
    auto itr1 = sorted1.begin(), itr2 = sorted2.begin();
    rep(i, a.size()) {
        if(*itr1 <= *itr2) {
            a[i] = *itr1;
            itr1++;
        } else {
            a[i] = *itr2;
            itr2++;
            cnt += distance(itr1, --sorted1.end());
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    merge_sort(a);
    printf("%ld\n", cnt);

    return 0;
}
