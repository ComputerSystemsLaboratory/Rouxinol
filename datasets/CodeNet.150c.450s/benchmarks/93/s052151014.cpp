/*
** QuickSort
** 使用 quicksort 来排序数组 a，使用 mergesort 来排序数组 b。
** 对两个排序后的数组进行比较，如果不同则证明 quicksort 是不稳定排序。
** 因为 mergesort 本身是稳定排序。
*/

# include <cstdio>
# include <iostream>
# define SENTINEL 2000000000
using namespace std;

const int maxn = 100000 + 10;
int n;

struct Card {
    char s[3];
    int v;
} a[maxn], b[maxn], L[maxn / 2 + 2], R[maxn / 2 + 2];

int partition(Card c[], int p, int r) {
    int x = c[r].v;
    int i = p - 1;
    for (int j = p; j < r; j++) {
        if (c[j].v <= x) {
            swap(c[++i], c[j]); // c++内置的swap是模板，更加好用
        }
    }
    swap(c[++i], c[r]);
    return i;
}

void quickSort(Card c[], int p, int r) {
    if (p < r) {
        int q = partition(c, p, r);
        quickSort(c, p, q - 1);
        quickSort(c, q + 1, r);
    }
}

void merge(Card c[], int left, int mid, int right) {
    int n1 = mid - left;
    int n2 = right - mid;
    for (int i = 0; i < n1; i++) {
        L[i].s[0] = c[left + i].s[0];
        L[i].v = c[left + i].v;
    }
    for (int i = 0; i < n2; i++) {
        R[i].s[0] = c[mid + i].s[0];
        R[i].v = c[mid + i].v;
    }
    L[n1].v = R[n2].v = SENTINEL;
    int i = 0, j = 0;
    for (int k = left; k < right; k++) {
        if (L[i].v <= R[j].v) {
            c[k].s[0] = L[i].s[0];
            c[k].v = L[i].v;
            i++;
        }
        else {
            c[k].s[0] = R[j].s[0];
            c[k].v = R[j].v;
            j++;
        }
    }
}

void mergeSort(Card c[], int left, int right) {
    if (left + 1 < right) {
        int mid = (left + right) / 2;
        mergeSort(c, left, mid);
        mergeSort(c, mid, right);
        merge(c, left, mid, right);
    }
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            scanf("%s %d", a[i].s, &a[i].v);
            b[i].s[0] = a[i].s[0];
            b[i].v = a[i].v;
        }
        quickSort(a, 0, n - 1);
        mergeSort(b, 0, n);

        bool isStable = true;
        for (int i = 0; i < n; i++) {
            if (a[i].s[0] != b[i].s[0]) {
                isStable = false;
                break;
            }
        }

        if (isStable)
            printf("Stable\n");
        else
            printf("Not stable\n");

        for (int i = 0; i < n; i++)
        {
            printf("%c %d\n", a[i].s[0], a[i].v);
        }
    }
    return 0;
}
