#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>

int main(){
    std::string s;
    int n;

    std::cin >> s >> n;

    for (int i = 0; i < n; i++) {
        std::string op;
        int a, b;
        std::cin >> op >> a >> b;

        if (op == "print") {
            std::cout << s.substr(a, b - a + 1) << std::endl;
        } else if (op == "reverse") {
            for (int j = a; j < (b - a + 1) / 2 + a; j++) {
                std::swap(s[j], s[b - (j - a)]);
            }
        } else {
            std::string p;
            std::cin >> p;
            for (int j = a; j <= b; j++) {
                s[j] = p[j - a];
            }
        }
    }

    return 0;
}