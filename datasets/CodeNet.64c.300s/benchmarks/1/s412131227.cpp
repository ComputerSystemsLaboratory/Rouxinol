/*
** Partition
*/

# include <cstdio>
# include <iostream>
using namespace std;

const int maxn = 100000 + 10;
int s[maxn];

int partition(int *a, int p, int r) {
    int x = *(a + r);
    int i = p - 1;
    for (int j = p; j <= r - 1; j++) {
        if (*(a+j) <= x) {
            ++i;
            swap(*(a + i), *(a + j));
        }
    }
    swap(*(a + (++i)), *(a + r));
    return i;
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }
    int p = partition(s, 0, n - 1);
    for (int i = 0; i < p; i++) {
        printf("%d ", s[i]);
    }
    printf("[%d]", s[p]);
    for (int i = p + 1; i < n; i++) {
        printf(" %d", s[i]);
    }
    printf("\n");
    return 0;
}
