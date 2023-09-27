#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;

const int INF = INT_MAX;

struct Card {
    char suit;
    int value;
    Card();
    Card(char, int);
    inline void print();
    const bool operator==(const Card) const;
};
Card::Card() {};
Card::Card(char suit, int value) : suit(suit), value(value) {};
inline void Card::print() {printf("%c %d\n", suit, value);}
const bool Card::operator==(const Card a) const {
    return (*this).suit == a.suit && (*this).value == a.value ? true : false;
}

int partition(vector<Card> &a, int p, int r) {
    int bdry = p;
    for(int i = p; i <= r; ++i) {
        if(a[i].value <= a[r].value) {
            swap(a[i], a[bdry]);
            bdry++;
        }
    }
    return bdry - 1;
}

void quick_sort(vector<Card> &a, int p, int r) {
    if(p >= r) return;
    int idx = partition(a, p, r);
    quick_sort(a, p, idx - 1);
    quick_sort(a, idx + 1, r);
}

void merge_sort(vector<Card> &a) {
    if(a.size() == 1) return;
    int mid = a.size() / 2;
    vector<Card> sorted1(mid), sorted2(a.size() - mid);
    copy(a.begin(), a.begin() + mid, sorted1.begin());
    copy(a.begin() + mid, a.end(), sorted2.begin());
    merge_sort(sorted1);
    merge_sort(sorted2);
    sorted1.emplace_back(Card('X', INF));
    sorted2.emplace_back(Card('X', INF));
    auto itr1 = sorted1.begin(), itr2 = sorted2.begin();
    rep(i, a.size()) {
        if((*itr1).value <= (*itr2).value) {
            a[i] = *itr1;
            itr1++;
        } else {
            a[i] = *itr2;
            itr2++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<Card> a(n);
    rep(i, n) cin >> a[i].suit >> a[i].value;
    vector<Card> a_ = a;

    merge_sort(a_);
    quick_sort(a, 0, a.size() - 1);

    printf(a == a_ ? "Stable\n" : "Not stable\n");
    rep(i, n) a[i].print();

    return 0;
}
