#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <functional>

using namespace std;

template <class RandomIt, class Comp>
RandomIt partition_(RandomIt first, RandomIt last, Comp comp) {
    using T=typename RandomIt::value_type;
    T x=last[-1];
    RandomIt it=first-1;
    for (RandomIt it2=first; it2<last-1; ++it2)
        if (!comp(x, *it2)) {
            ++it;
            swap(*it, *it2);
        }

    swap(*++it, last[-1]);
    return it;
}

template <class RandomIt, class Comp>
void qsort(RandomIt first, RandomIt last, Comp comp) {
    if (first >= last) return;

    RandomIt pivot=partition_(first, last, comp);
    qsort(first, pivot, comp);
    qsort(pivot+1, last, comp);
}

struct Card {
    int rank;
    char suit;
    size_t order;
};

bool operator<(const Card x, const Card y) {
    return x.rank < y.rank;
}

int main() {
    size_t n;
    scanf("%zu\n", &n);

    vector<Card> a(n);
    for (size_t i=0; i<n; ++i) {
        scanf("%c %d\n", &a[i].suit, &a[i].rank);
        a[i].order = i;
    }

    qsort(a.begin(), a.end(), less<Card>());

    bool is_stable=true;
    for (size_t i=0; i<n-1; ++i)
        if (a[i].rank == a[i+1].rank)
            if (a[i].order > a[i+1].order) {
                is_stable = false;
                break;
            }

    printf("%s\n", is_stable? "Stable":"Not stable");
    for (Card p: a)
        printf("%c %d\n", p.suit, p.rank);

    return 0;
}