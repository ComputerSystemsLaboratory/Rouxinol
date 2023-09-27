#include <cstdio>
#include <stack>
#include <string>
#include <utility>

using namespace std;

int main()
{
    stack<int> s;

    auto popPair = [&s]() {
        auto rhs = s.top();
        s.pop();
        auto lhs = s.top();
        s.pop();
        return make_pair(lhs, rhs);
    };

    string buffer;
    while (true) {
        char c = getchar();
        if (c == '\n') {
            break;
        }
        else if ('0' <= c && c <= '9') {
            buffer += c;
        }
        else if (c == '+') {
            auto p = popPair();
            s.push(p.first + p.second);
        }
        else if (c == '-') {
            auto p = popPair();
            s.push(p.first - p.second);
        }
        else if (c == '*') {
            auto p = popPair();
            s.push(p.first * p.second);
        }
        else if (c == ' ') {
            if (buffer != "") {
                s.push(stoi(buffer));
                buffer = "";
            }
        }
    }
    printf("%d\n", s.top());
}