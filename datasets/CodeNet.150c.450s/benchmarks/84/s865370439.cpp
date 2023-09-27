#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>

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
    vector<T> L(lhalf+1), R(rhalf+1); L[lhalf]=R[rhalf]=INF;

    for (RandomIt in=first, out=L.begin(); in<mid; (++in, ++out))
        *out = *in;

    for (RandomIt in=mid, out=R.begin(); in<last; (++in, ++out))
        *out = *in;

    RandomIt l=L.begin(), r=R.begin();
    for (RandomIt it=first; it<last; ++it) {
        if (*l <= *r) {
            *it = *l++;
        } else {
            *it = *r++;
            count_ += (mid-first)-(l-L.begin());
        }
    }

    return count_;
}

int main() {
    size_t n;
    scanf("%zu", &n);

    vector<int> a(n);
    for (size_t i=0; i<n; ++i)
        scanf("%d", &a[i]);

    printf("%lld\n", msort(a.begin(), a.end()));
    return 0;
}