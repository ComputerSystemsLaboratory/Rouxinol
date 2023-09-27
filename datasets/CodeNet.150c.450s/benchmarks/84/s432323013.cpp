#include <vector>
#include <iostream>

using namespace std;
using long64 = long long int;
using int_vec = vector<long64>;
long64 inversion = 0;


void merge(int_vec& v, int_vec& left, int_vec& right) {
    auto it = v.begin();
    auto l = left.begin();
    auto r = right.begin();
    auto n = left.size();
    while (l != left.end() && r != right.end()) {
        if (*l <= *r) {
            *it++ = *l++;
            --n;
        } else {
            *it++ = *r++;
            inversion += n;
        }
    }
    if (l != left.end()) {
        copy(l, left.end(), it);
    } else {
        copy(r, right.end(), it);
    }
    return;
}

void merge_sort(int_vec& v) {
    if (v.size() < 2) {
        return;
    }

    auto mid = v.begin() + distance(v.begin(), v.end()) / 2;
    auto left = int_vec(v.begin(), mid);
    auto right = int_vec(mid, v.end());
    merge_sort(left);
    merge_sort(right);
    merge(v, left, right);
    return;
}

int main() {
    int n;
    cin >> n;

    int_vec v;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    merge_sort(v);
    cout << inversion << endl;

    return 0;
}