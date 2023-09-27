#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    long long int data[200000] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }
    bool fr = false;
    for (int j = k - 1; j < n; j++) {
        if (!fr) {
            fr = true;
            continue;
        }
        if (data[j] > data[j - k]) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
}