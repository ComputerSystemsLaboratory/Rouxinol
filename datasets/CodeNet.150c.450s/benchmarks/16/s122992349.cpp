#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

typedef pair<int, int> P;

int main() {
    stack<int> stack1;
    stack<P> stack2;

    int step = 0;
    int sum = 0;
    int num = 0;
    char c;
    while (cin >> c) {
        ++step;
        if (c == '\\') {
            stack1.push(step);
        }
        else if (c == '/') {
            if (stack1.empty()) {
                continue;
            }
            int a = stack1.top();
            stack1.pop();

            int s = step - a;
            sum += s;

            if (stack2.empty()) {
                stack2.push(make_pair(a, s));
                continue;
            }

            while (!stack2.empty() && stack2.top().first > a) {
                s += stack2.top().second;
                stack2.pop();
            }
            stack2.push(make_pair(a, s));
        }
    }

    printf("%d\n", sum);

    vector<int> ans;
    while (stack2.size()) {
        ans.push_back(stack2.top().second);
        stack2.pop();
    }
    reverse(ans.begin(), ans.end());

    printf("%d", static_cast<int>(ans.size()));

    vector<int>::const_iterator itr = ans.begin();
    vector<int>::const_iterator end = ans.end();
    for (; itr != end; ++itr) {
        printf(" ");
        printf("%d", *itr);
    }
    printf("\n");

    return 0;
}