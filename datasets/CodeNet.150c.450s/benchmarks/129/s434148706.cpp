#include <cstdio>
#include <vector>

using namespace std;

int main() {
    size_t r, c;
    scanf("%zu %zu", &r, &c);

    vector<vector<int>> a(r+1, vector<int>(c+1));
    for (size_t i=0; i<r; ++i) {
        for (size_t j=0; j<c; ++j) {
            scanf("%d", &a[i][j]);
            printf("%d ", a[i][j]);

            a[r][j] += a[i][j];
            a[i][c] += a[i][j];
        }
        printf("%d\n", a[i][c]);
    }

    for (size_t j=0; j<c; ++j) {
        printf("%d ", a[r][j]);
        a[r][c] += a[r][j];
    }

    printf("%d\n", a[r][c]);
    return 0;
}