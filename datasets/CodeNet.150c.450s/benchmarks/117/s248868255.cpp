#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

const int INF=1<<30;

template <class RandomIt>
size_t msort(RandomIt first, RandomIt last) {
    if (first+1 >= last) return 0;

    using T=typename RandomIt::value_type;
    ptrdiff_t lhalf=(last-first)>>1;
    RandomIt mid=first+lhalf;

    size_t count_=0;
    count_ += msort(first, mid);
    count_ += msort(mid, last);

    ptrdiff_t rhalf=last-mid;
    vector<T> L(lhalf+1), R(rhalf+1);

    for (RandomIt in=first, out=L.begin(); in<mid; (++in, ++out))
        *out = *in;

    for (RandomIt in=mid, out=R.begin(); in<last; (++in, ++out))
        *out = *in;

    L[lhalf] = R[rhalf] = INF;

    size_t i=0, j=0;
    for (RandomIt it=first; it<last; ++it) {
        if (L[i] <= R[j]) {
            *it = L[i];
            ++i;
        } else {
            *it = R[j];
            ++j;
        }
        ++count_;
    }

    return count_;
}

int main() {
    size_t n;
    scanf("%zu", &n);

    vector<int> S(n);
    for (size_t i=0; i<n; ++i)
        scanf("%d", &S[i]);

    size_t t=msort(S.begin(), S.end());
    for (size_t i=0; i<n; ++i)
        printf("%d%c", S[i], i<n-1? ' ':'\n');

    printf("%zu\n", t);
    return 0;
}