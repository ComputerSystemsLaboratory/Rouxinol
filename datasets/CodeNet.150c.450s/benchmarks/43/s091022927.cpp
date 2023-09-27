#include <iostream>

#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    int n;
    while (std::cin >> n && n) {
        int sc1 = 0, sc2 = 0;
        rep(i, n) {
            int p1, p2;
            std::cin >> p1 >> p2;
            if (p1 == p2)
                sc1 += p1, sc2 += p2;
            else if (p1 > p2)
                sc1 += p1 + p2;
            else
                sc2 += p1 + p2;
        }
        std::cout << sc1 << ' ' << sc2 << std::endl;
    }
}