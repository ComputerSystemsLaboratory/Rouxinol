#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

template <class RandomIt>
size_t ssort(RandomIt first, RandomIt last) {
    size_t times=0;
    for (RandomIt it=first; it<last; ++it) {
        RandomIt min_=it;
        for (RandomIt it2=it+1; it2<last; ++it2)
            if (*min_ > *it2)
                min_ = it2;

        if (it != min_) {
            swap(*it, *min_);
            ++times;
        }
    }

    return times;
}

int main() {
    size_t N;
    scanf("%zu", &N);

    vector<int> A(N);
    for (size_t i=0; i<N; ++i)
        scanf("%d", &A[i]);

    size_t t=ssort(A.begin(), A.end());

    for (size_t i=0; i<N; ++i)
        printf("%d%c", A[i], i<N-1? ' ':'\n');

    printf("%zu\n", t);
    return 0;
}