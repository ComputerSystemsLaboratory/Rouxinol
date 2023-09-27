/* ALDS1_6_A: Counting Sort */

#include <iostream>
#include <cstdio>

const int MAX_VALUE = 10000;

void counting_sort(int n, int in[], int out[], int max) {
    int counts[max + 1];
    std::fill_n(counts, max + 1, 0);

    for (int i = 0; i < n; i++)
        counts[ in[i] ]++;

    for (int i_c = 1; i_c <= max; i_c++)
        counts[i_c] += counts[i_c - 1];

    for (int i = n - 1; 0 <= i; i--) {
        out[ counts[in[i]] - 1 ] = in[i];
        counts[ in[i] ]--;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int *in = new int[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &in[i]);

    int *out = new int[n];
    counting_sort(n, in, out, MAX_VALUE);

    printf("%d", out[0]);
    for (int i = 1; i < n; i++)
        printf(" %d", out[i]);
    puts("");

    return 0;
}