#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    size_t n;
    scanf("%zu", &n);

    vector<int> S(n);
    for (size_t i=0; i<n; ++i)
        scanf("%d", &S[i]);

    size_t q;
    scanf("%zu", &q);

    vector<int> T(q);
    for (size_t i=0; i<q; ++i)
        scanf("%d", &T[i]);

    ptrdiff_t C=0;
    for (size_t i=0; i<q; ++i)
        C += !!count(S.begin(), S.end(), T[i]);

    printf("%tu\n", C);
    return 0;
}