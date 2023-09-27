#include <bits/stdc++.h>


int main() {
    int n;
    std::cin >> n;

    int len = 0;
    std::vector<int> a(n), lis(n, -1);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        if (i == 0) {
            lis[len] = a[i];
            len++;
            continue;
        }
        if (lis[len - 1] < a[i]) {
            lis[len] = a[i];
            len++;
        } else {
            for (int j = 0; j < len; j++) {
                if (lis[j] >= a[i]) {
                    lis[j] = a[i];
                    break;
                }
            }
        }
    }
    std::cout << len << std::endl;
}

