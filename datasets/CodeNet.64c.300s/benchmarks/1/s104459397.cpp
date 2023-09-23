#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <utility>

using namespace std;

template<typename T>
T partition(T ar[], int p, int r){
    T pivot = ar[r];
    int i = p - 1;
    for (int j = p; j <= r - 1; j++) {
        if(ar[j] <= pivot){
            i++;
            swap(ar[i], ar[j]);
        }
    }
    i++;
    swap(ar[i], ar[r]);
    return i;
}

int main(int argc, char const* argv[])
{
    int n, ar[100000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    int q = partition(ar, 0, n-1);

    for (int i = 0; i < n; i++) {
        if(i == q) putchar('[');
        printf("%d", ar[i]);
        if(i == q) putchar(']');
        if(i != n-1) putchar(' ');
    }
    putchar('\n');

    return 0;
}