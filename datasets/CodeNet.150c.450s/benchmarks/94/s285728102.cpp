#include <cstdio>

const int MAX_N = 100;

int arr[MAX_N+1];
int swap_count;

void swap(int i, int j) {
    int t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
    swap_count++;
}

int main(int argc, char const *argv[])
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i)
        scanf("%d", &arr[i]);

    for (int i = 0; i < N; ++i)
        for (int j = N-1; j > i; --j)
            if (arr[j] < arr[j-1])
                swap(j, j-1);

    for (int i = 0; i < N; ++i) {
        if (i > 0) putchar(' ');
        printf("%d", arr[i]);
    }
    printf("\n%d\n", swap_count);
    return 0;
}