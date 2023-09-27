#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using card = pair<char, int>;
using card_list = vector<card>;
using Iterator = card_list::iterator;


Iterator partition(Iterator begin, Iterator end, card x) {
    for (auto it = begin; it != end; ++it) {
        if (it->second <= x.second) {
            swap(*begin++, *it);
        }
    }
    return begin-1;
}

void quick_sort(Iterator begin, Iterator end) {
    auto mid = partition(begin, end, *(end-1));
    if (begin < end-1) {
        auto last = end - 1;
        auto mid = partition(begin, end, *last);
        quick_sort(begin, mid);
        quick_sort(mid+1, end);
    }
}

void merge(card_list& v, card_list& left, card_list& right) {
    auto it = v.begin();
    auto l = left.begin();
    auto r = right.begin();
    while (l != left.end() && r != right.end()) {
        if (l->second <= r->second) {
            *it++ = *l++;
        } else {
            *it++ = *r++;
        }
    }
    if (l != left.end()) {
        copy(l, left.end(), it);
        distance(l, left.end());
    } else {
        copy(r, right.end(), it);
        distance(r, right.end());
    }
}

void merge_sort(card_list& v) {
    if (v.size() <= 1) {
        return;
    }

    auto mid = v.begin() + distance(v.begin(), v.end()) / 2;
    auto left = card_list(v.begin(), mid);
    auto right = card_list(mid, v.end());
    merge_sort(left);
    merge_sort(right);
    merge(v, left, right);
}

int main() {
    int n;
    cin >> n;

    card_list v;
    for (auto i = 0; i < n; ++i) {
        char c;
        int n;
        cin >> c >> n;
        v.push_back(card(c, n));
    }
    card_list v2 = v;

    quick_sort(v.begin(), v.end());
    merge_sort(v2);
    if (equal(v.begin(), v.end(), v2.begin())) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }
    for (auto& card: v) {
        cout << card.first << " " << card.second << endl;
    }

    return 0;
}