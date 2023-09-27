#include <iostream>
#include <utility>
static void bsort(char c[][3], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = n - 1; j > i; --j) {
            if (c[j][1] < c[j - 1][1]) {
                std::swap(c[j], c[j - 1]);
            }
        }
    }
}
static void ssort(char c[][3], int n) {
    for (int i = 0; i < n; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j) {
            if (c[j][1] < c[min][1]) {
                min = j;
            }
        }
        if (min > i) {
            std::swap(c[i], c[min]);
        }
    }
}
int main() {
    int n;
    char a[36][3], b[36][3];
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        a[i][0] = b[i][0] = s[0];
        a[i][1] = b[i][1] = s[1];
        a[i][2] = b[i][2] = '\0';
    }
    bsort(a, n);
    ssort(b, n);
    for (int i = 0; i < n; ++i) {
        std::cout << ((i == 0) ? "" : " ") << a[i];
    }
    std::cout << std::endl << "Stable" << std::endl;
    bool f = true;
    for (int i = 0; i < n; ++i) {
        std::cout << ((i == 0) ? "" : " ") << b[i];
        if (a[i][0] != b[i][0]) {
            f = false;
        }
    }
    std::cout << std::endl << (f ? "Stable" : "Not stable" ) << std::endl;
}

