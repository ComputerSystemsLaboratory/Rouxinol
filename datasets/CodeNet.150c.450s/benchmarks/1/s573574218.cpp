#include<cstdio>
#include<algorithm>

#define MAX_N 100000

using namespace std;

int numbers[MAX_N + 5], L[MAX_N + 5];

int main()
{
    int n, i, length = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    L[0] = numbers[0];
    for (i = 1; i < n; i++) {
        if (numbers[i] > L[length - 1]) {
            L[length++] = numbers[i];
        }
        else {
            *lower_bound(L, L + length, numbers[i]) = numbers[i];
        }
    }

    printf("%d\n", length);
}