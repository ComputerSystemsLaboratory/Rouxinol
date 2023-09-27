#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

bool is_valid(const vector<int> w, size_t k, int x) {
    size_t q=1;
    int y=0;
    for (size_t i=0; i<w.size(); ++i) {
        if (w[i] > x) return false;

        if (y+w[i] > x) {
            y = w[i];
            if (++q > k)
                return false;
        } else {
            y += w[i];
        }
    }

    return true;
}

int main() {
    size_t n, k;
    scanf("%zu %zu", &n, &k);

    vector<int> w(n);
    for (size_t i=0; i<n; ++i)
        scanf("%d", &w[i]);

    int lb=0, ub=1<<30;
    while (ub-lb > 1) {
        int mid=(lb+ub)>>1;
        (is_valid(w, k, mid)? ub:lb) = mid;
    }

    printf("%d\n", ub);
    return 0;
}