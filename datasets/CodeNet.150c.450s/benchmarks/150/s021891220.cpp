#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

template <class RandomIt, class T=typename RandomIt::value_type>
void csort(RandomIt first, RandomIt last, T ub) {
    /* Counting sort */
    vector<T> counter(ub+1);
    for (RandomIt it=first; it<last; ++it)
        ++counter[*it];

    for (RandomIt it=counter.begin()+1; it<counter.end(); ++it)
        *it += it[-1];

    vector<T> output(last-first);
    for (RandomIt it=last-1; it>=first; --it) {
        output[counter[*it]-1] = *it;
        --counter[*it];
    }

    for (RandomIt in=output.begin(), out=first; out<last; (++in, ++out))
        *out = *in;
}

int main() {
    size_t n;
    scanf("%zu", &n);

    vector<int> a(n);
    int k=0;
    for (size_t i=0; i<n; ++i) {
        scanf("%d", &a[i]);
        if (k < a[i])
            k = a[i];
    }

    csort(a.begin(), a.end(), k);

    for (size_t i=0; i<n; ++i)
        printf("%d%c", a[i], i<n-1? ' ':'\n');

    return 0;
}