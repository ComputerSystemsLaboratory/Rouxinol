#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    size_t n;
    scanf("%zu", &n);

    vector<int> A(n);
    for (size_t i=0; i<n; ++i)
        scanf("%d", &A[i]);

    set<int> sum;

    for (size_t i=0; i<(1u<<n); ++i) {
        int s=0;
        for (size_t j=0; j<n; ++j) {
            if (1<<j & i)
                s += A[j];
        }
        sum.insert(s);
    }

    size_t q;
    scanf("%zu", &q);

    for (size_t i=0; i<q; ++i) {
        int m;
        scanf("%d", &m);

        printf("%s\n", sum.count(m)? "yes":"no");
    }

    return 0;
}