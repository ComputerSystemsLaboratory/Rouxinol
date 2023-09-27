#include <iostream>
#include <cmath>
#include <queue>
#include <string>
#include <algorithm>
#include <iomanip>

void extract(std::priority_queue<int>& S) {
    printf("%d\n", S.top());
    S.pop();
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::string s;
    std::priority_queue<int> S;
    while (true) {
        std::cin >> s;
        if (s == std::string("insert")) {
            int operand;
            std::cin >> operand;
            S.push(operand);
        } else if (s == std::string("extract")) {
            extract(S);
        } else {
            break;
        }
    }

    return 0;
}
