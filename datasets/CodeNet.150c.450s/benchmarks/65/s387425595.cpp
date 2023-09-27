#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

template <class RandomIt>
size_t bsort(RandomIt first, RandomIt last) {
    /* Bubble sort */
    size_t times=0;
    for (RandomIt it=first; it<last; ++it)
        for (RandomIt it2=last-1; it2>it; --it2)
            if (it2[0] < it2[-1]) {
                swap(it2[0], it2[-1]);
                ++times;
            }

    return times;
}

template <class RandomIt, class Comp>
size_t bsort(RandomIt first, RandomIt last, Comp comp) {
    /* Bubble sort */
    size_t times=0;
    for (RandomIt it=first; it<last; ++it)
        for (RandomIt it2=last-1; it2>it; --it2)
            if (comp(it2[0], it2[-1])) {
                swap(it2[0], it2[-1]);
                ++times;
            }

    return times;
}

template <class RandomIt>
size_t ssort(RandomIt first, RandomIt last) {
    /* Selection sort */
    size_t times=0;
    for (RandomIt it=first; it<last; ++it) {
        RandomIt min_=it;
        for (RandomIt it2=it+1; it2<last; ++it2)
            if (*it2 < *min_)
                min_ = it2;

        if (it != min_) {
            swap(*it, *min_);
            ++times;
        }
    }

    return times;
}

template <class RandomIt, class Comp>
size_t ssort(RandomIt first, RandomIt last, Comp comp) {
    /* Selection sort */
    size_t times=0;
    for (RandomIt it=first; it<last; ++it) {
        RandomIt min_=it;
        for (RandomIt it2=it+1; it2<last; ++it2)
            if (comp(*it2, *min_))
                min_ = it2;

        if (it != min_) {
            swap(*it, *min_);
            ++times;
        }
    }

    return times;
}

template <class Index, class T>
bool is_stable(vector<pair<Index, T>> sorted, const vector<T> table[]) {
    Index rank_=0;
    size_t j=0;
    for (size_t i=0; i<sorted.size(); ++i, ++j) {
        if (rank_ < sorted[i].first) {
            rank_ = sorted[i].first;
            j = 0;
        }

        if (table[rank_][j] != sorted[i].second)
            return false;
    }
    return true;
}

template <class Index, class T>
struct IndexCompare {
    bool operator()(pair<Index, T> x, pair<Index, T> y) {
        return x.first < y.first;
    }
};

int main() {
    size_t N;
    scanf("%zu\n", &N);

    vector<pair<int, char>> A(N), A_bub, A_sel;
    vector<char> rank_[10];
    for (size_t i=0; i<N; ++i) {
        scanf("%c%d ", &A[i].second, &A[i].first);
        rank_[A[i].first].push_back(A[i].second);
    }

    A_bub = A_sel = A;
    IndexCompare<int, char> idxcmp;

    bsort(A_bub.begin(), A_bub.end(), idxcmp);
    for (size_t i=0; i<N; ++i) {
        pair<int, char> p=A_bub[i];
        printf("%c%d%c", p.second, p.first, i<N-1? ' ':'\n');
    }

    printf("%s\n", is_stable(A_bub, rank_)? "Stable":"Not stable");

    ssort(A_sel.begin(), A_sel.end(), idxcmp);
    for (size_t i=0; i<N; ++i) {
        pair<int, char> p=A_sel[i];
        printf("%c%d%c", p.second, p.first, i<N-1? ' ':'\n');
    }

    printf("%s\n", is_stable(A_sel, rank_)? "Stable":"Not stable");
    return 0;
}