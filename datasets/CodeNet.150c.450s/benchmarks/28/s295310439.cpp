#include<stdio.h>
#include<algorithm>

int n, k;
int w[100000];

int check(int p) {
    int weight = p;
    int num = 1;
    for (int j = 0; j < n; ++j) {
        if (weight - w[j] < 0) {
            ++num;
            weight = p;
        }
        if (num > k) {
            return j;
        }
        weight -= w[j];
    }

    return n;
}

int binarySearch(int w[], int left, int right) {

    if (left == right) return right;
    int mid = (left + right) / 2;
    int v = check(mid);

    if (v >= n) return binarySearch(w, left, mid);
    if (v < n) return binarySearch(w, mid + 1, right);

    return -1;
}

int main() {

    scanf("%d %d", &n, &k);
    int max = 0;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &w[i]);
        max = std::max(max, w[i]);
        sum += w[i];
    }
    int index = binarySearch(w, max, sum);
    if (index < 0) {
        printf("error: not found!!\n");
    }
    printf("%d\n", index);
}