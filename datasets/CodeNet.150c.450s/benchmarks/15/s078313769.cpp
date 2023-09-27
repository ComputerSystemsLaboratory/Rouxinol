#include <iostream>
#include <vector>

void linear(int n, std::vector<int> s, int q, std::vector<int> t) {
    int count = 0;
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < n; j++) {
            if (t[i] == s[j]) {
                count++;
                break;
            }
        }
    }
    std::cout << count << std::endl;
    return;
}

int main(void) {
    int n;
    std::cin >> n;
    std::vector<int> s(n, 0);
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }

    int q;
    std::cin >> q;
    std::vector<int> t(q, 0);
    for (int i = 0; i < q; i++) {
        std::cin >> t[i];
    }

    linear(n, s, q, t);
    return 0;
}