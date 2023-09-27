#include <iostream>
#include <map>

#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);

    int n;
    std::map<char, char> dict;
    while (std::cin >> n && n) {
        rep(i, n) {
            char src, dist;
            std::cin >> src >> dist;
            dict[src] = dist;
        }

        int m;
        std::cin >> m;
        rep(i, m) {
            char ch;
            std::cin >> ch;
            if (dict.count(ch))
                std::cout << dict[ch];
            else
                std::cout << ch;
        }
        std::cout << std::endl;
        dict.clear();
    }
}