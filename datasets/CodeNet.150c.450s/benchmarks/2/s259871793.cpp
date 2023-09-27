#include <iostream>
#include <cstdio>
using namespace std;
static const int MAX = 100000;
int arr[MAX], n;


int partition(int p, int r) {
    int x, i, j;
    x = arr[r];
    i = p - 1;
    for (j = p; j < r; j++) {
        if (arr[j] <= x) {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i+1], arr[r]);
    return i+1;
}

int main()
{
    int q;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    q = partition(0, n-1);

    for (int i = 0; i < n; i++) {
        if (i) printf(" ");
        if (i == q) printf("[");
        printf("%d", arr[i]);
        if (i == q) printf("]");
    }
    printf("\n");
    return 0;
}

