#include <cstdio>
#include <vector>

using namespace std;

int main() {
    size_t n;
    scanf("%zu", &n);

    vector<int> a(n);
    for (size_t i=0; i<n; ++i)
        scanf("%d", &a[i]);

    for (size_t i=n; i--;)
        printf("%d%c", a[i], i? ' ':'\n');

    return 0;
}