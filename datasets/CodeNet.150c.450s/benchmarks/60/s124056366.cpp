#include <cstdio>
#include <vector>

using namespace std;

int main() {
    size_t n;
    scanf("%zu", &n);

    for (size_t i=0; i<n; ++i) {
        size_t k;
        scanf("%*d %zu", &k);

        vector<int> v(n+1);
        for (size_t j=0; j<k; ++j) {
            size_t d;
            scanf("%zu", &d);

            v[d] = 1;
        }

        for (size_t j=1; j<=n; ++j)
            printf("%d%c", v[j], j<n? ' ':'\n');
    }

    return 0;
}