#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

const size_t INF=1uLL<<57;

template <class RandomIt, class T=typename RandomIt::value_type>
vector<T> lisubseq(RandomIt first, RandomIt last) {
    size_t n=last-first;
    vector<T> seq(n, INF);
    for (size_t i=0; i<n; ++i)
        *lower_bound(seq.begin(), seq.end(), first[i]) = first[i];

    seq.erase(lower_bound(seq.begin(), seq.end(), INF), seq.end());
    return seq;
}

int main() {
    size_t n;
    scanf("%zu", &n);

    vector<size_t> a(n);
    for (size_t i=0; i<n; ++i)
        scanf("%zu", &a[i]);

    printf("%zu\n", lisubseq(a.begin(), a.end()).size());
    return 0;
}