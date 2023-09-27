#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <algorithm>

using namespace std;

int main(int argc, char const* argv[])
{
    int w,n,x,y;
    scanf("%d ", &w);
    int *ar = new int[w];
    for (int i = 0; i < w; i++) {
        ar[i] = i + 1;
    }

    scanf("%d ", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d,%d ", &x, &y);
        swap(ar[x - 1], ar[y - 1]);
    }
    for (int i = 0; i < w; i++) {
        printf("%d\n", ar[i]);
    }
    return 0;
}