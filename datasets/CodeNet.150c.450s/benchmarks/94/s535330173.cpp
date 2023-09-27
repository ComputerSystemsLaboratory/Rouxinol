#include <cstdio>
#include <vector>

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

int main() {
    size_t N;
    scanf("%zu", &N);

    vector<int> A(N);
    for (size_t i=0; i<N; ++i)
        scanf("%d", &A[i]);

    size_t t=bsort(A.begin(), A.end());

    for (size_t i=0; i<N; ++i)
        printf("%d%c", A[i], i<N-1? ' ':'\n');

    printf("%zu\n", t);
    return 0;
}