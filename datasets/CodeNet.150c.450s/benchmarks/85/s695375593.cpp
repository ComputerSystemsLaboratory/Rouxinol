#include <iostream>
#include <cstring>

int min_count[100][100];

int count(int *r, int *c, int start, int end) {
    if (min_count[start][end] != 0) {
        return min_count[start][end];
    }
    if (end - start == 0) {
        return 0;
    }
    int min = 1000000;
    for (int i = start; i < end; i++) {
        min = std::min(min, count(r, c, start, i) + r[start] * c[i] * c[end] + count(r, c, i + 1, end));
    }
    min_count[start][end] =min;
    return min_count[start][end];
}

int main() {
    std::memset(min_count, 0, sizeof(min_count));
    int n;
    std::cin >> n;
    int r[n], c[n];
    for (int i = 0; i < n; i++) {
        std::cin >> r[i] >> c[i];
    }

    std::cout << count(r, c, 0, n - 1) << std::endl;
}

