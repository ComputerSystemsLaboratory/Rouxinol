/*
** Counting Sort
*/

# include <cstdio>
# include <cstring>
# define MAX 10005

const int maxn = 2000000 + 10;
int a[maxn], b[maxn], c[MAX];

void CountingSort(const int A[], int B[], const int k, const int n) {
    for (int i = 1; i <= n; i++)
        c[A[i]]++;
    
    for (int i = 1; i <= k; i++)
        c[i] = c[i] + c[i - 1];

    for (int i = n; i > 0; i--) {
        B[c[A[i]]] = A[i];
        c[A[i]]--;
    }
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);

    int n;
    scanf("%d", &n);
    // 从Infile中获取输入，并存储至数组a
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    // 初始化c数组
    memset(c, 0, sizeof(c));
    CountingSort(a, b, MAX, n);

    // 输出数组b到outfile
    for (int i = 1; i < n; i++)
        printf("%d ", b[i]);
    printf("%d\n", b[n]);

    return 0;
}
