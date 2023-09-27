#include <cstdio>
#include <vector>
#include <algorithm>
#include <numeric>


using namespace std;

int main() {
    size_t w;
    scanf("%zu", &w);
    vector<size_t> dlots(w);
    iota(dlots.begin(), dlots.end(), 1);

    int n;
    scanf("%d", &n);
    for (int i=0; i<n; ++i) {
        size_t a, b;
        scanf("%zu, %zu", &a, &b);
        --a, --b;
        swap(dlots[a], dlots[b]);
    }

    for (size_t i=0; i<w; ++i)
        printf("%zu\n", dlots[i]);

    return 0;
}