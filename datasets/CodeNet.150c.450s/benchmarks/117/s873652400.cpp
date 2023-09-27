#include <vector>
#include <iostream>

using namespace std;
using int_vec = vector<int>;


void print(const int_vec& v) {
    auto it = v.begin();
    for (; it != v.end()-1; ++it) {
        cout << *it << " ";
    }
    cout << *it << endl;
}

int merge(int_vec& v, int_vec& left, int_vec& right) {
    int c = 0;
    auto it = v.begin();
    auto l = left.begin();
    auto r = right.begin();
    while (l != left.end() && r != right.end()) {
        if (*l <= *r) {
            *it++ = *l++;
        } else {
            *it++ = *r++;
        }
        ++c;
    }
    if (l != left.end()) {
        copy(l, left.end(), it);
        c += distance(l, left.end());
    } else {
        copy(r, right.end(), it);
        c += distance(r, right.end());
    }
    return c;
}

int merge_sort(int_vec& v) {
    if (v.size() <= 1) {
        return 0;
    }

    auto mid = v.begin() + distance(v.begin(), v.end()) / 2;
    auto left = int_vec(v.begin(), mid);
    auto right = int_vec(mid, v.end());
    auto x = merge_sort(left);
    auto y = merge_sort(right);
    auto z = merge(v, left, right);
    return x + y + z;
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
    auto c = merge_sort(v);
    print(v);
    cout << c << endl;

    return 0;
}