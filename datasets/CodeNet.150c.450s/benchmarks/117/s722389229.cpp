/*
** MergeSort
*/

# include <cstdio>
# define MAX 2000000000

const int maxn = 500000 + 10;
int s[maxn], cnt, L[maxn / 2 + 2], R[maxn / 2 + 2];

void merge(int a[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++) {
        L[i] = a[left + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = a[mid + i];
    }
    L[n1] = MAX, R[n2] = MAX;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        cnt++;
        if (L[i] <= R[j]) {
            a[k] = L[i++];
        }
        else
        {
            a[k] = R[j++];
        }
    }
}

void mergeSort(int a[], int left, int right) {
    if (left+1 < right) {
        int mid = (left + right) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid, right);
        merge(a, left, mid, right);
    }
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &s[i]);
    cnt = 0;
    mergeSort(s, 0, n);

    for (int i = 0; i < n-1; i++)
        printf("%d ", s[i]);
    printf("%d\n%d\n", s[n - 1], cnt);

    return 0;
}
