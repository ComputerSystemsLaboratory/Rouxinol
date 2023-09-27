#include <iostream>
#include <climits>
int s[500001], l[250001], r[250001];
static int mg(int left, int m, int right) {
    int n1 = m - left, n2 = right - m, i = 0, j = 0, c = 0;
    for (int k = 0; k < n1; ++k) {
        l[k] = s[left + k];
    }
    for (int k = 0; k < n2; ++k) {
        r[k] = s[m + k];
    }
    l[n1] = INT_MAX;
    r[n2] = INT_MAX;
    for (int k = left; k < right; ++k) {
        ++c;
        if (l[i] <= r[j]) {
            s[k] = l[i++];
        } else {
            s[k] = r[j++];
        }
    }
    return c;
}
static int msort(int left, int right) {
    int c = 0;
    if (left + 1 < right) {
        int m = left + (right - left) / 2;
        c += msort(left, m);
        c += msort(m, right);
        c += mg(left, m, right);
    }
    return c;
}
int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> s[i];
    }
    int c = msort(0, n);
    for (int i = 0; i < n; ++i) {
        std::cout << ((i == 0) ? "" : " ") << s[i];
    }
    std::cout << std::endl << c << std::endl;
}

