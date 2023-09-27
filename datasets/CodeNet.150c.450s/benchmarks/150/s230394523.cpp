#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    size_t n;
    scanf("%zu", &n);

    vector<int> a(n);
    for (size_t i=0; i<n; ++i)
        scanf("%d", &a[i]);

    sort(a.begin(), a.end());

    for (size_t i=0; i<n; ++i)
        printf("%d%c", a[i], i<n-1? ' ':'\n');

    return 0;
}