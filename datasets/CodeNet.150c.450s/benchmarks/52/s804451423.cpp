#include <iostream>
#include <stack>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::stack<long long int> s;

    while (std::cin >> n) {
        if (n) {
            s.push(n);
        }
        else {
            std::cout << s.top() << std::endl;
            s.pop();
        }
    }

    return 0;
}