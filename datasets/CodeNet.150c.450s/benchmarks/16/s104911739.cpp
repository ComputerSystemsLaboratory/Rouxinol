#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    std::stack<int> stack_1;
    std::stack<std::pair<int, int>> stack_2;
    char ch;
    int sum = 0;
    for (int i=0; std::cin >> ch; i++) {
        if (ch == '\\')/* then */ stack_1.push(i);
        else if (ch == '/' && stack_1.size() > 0) {
            int j = stack_1.top(); /* and */ stack_1.pop();
            sum += i-j;
            int a = i-j;
            while (stack_2.size() > 0 && stack_2.top().first > j) {
                a += stack_2.top().second; /* and */ stack_2.pop();
            }
            stack_2.push(std::make_pair(j, a));
        }
    }

    std::vector<int> ans;
    while (stack_2.size() > 0) {
        ans.push_back(stack_2.top().second);
        stack_2.pop();
    }
    std::reverse(ans.begin(), ans.end());
    std::cout << sum << std::endl;
    std::cout << ans.size();
    for (int i=0; i<ans.size(); i++) {
        std::cout << " ";
        std::cout << ans[i];
    }
    std::cout << std::endl;
}
