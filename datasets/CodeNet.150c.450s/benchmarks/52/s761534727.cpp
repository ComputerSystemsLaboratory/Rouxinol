#include <iostream>
#include <stack>

int main()
{
    std::stack<int> s;
    while (true) {
        int n;
        std::cin >> n;
        if (std::cin.eof()) break;

        if (n == 0) {
            std::cout << s.top() << std::endl;
            s.pop();
        }
        else s.push(n);
    }
}