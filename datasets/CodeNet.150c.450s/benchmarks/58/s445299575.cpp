#include <cstdlib>
#include <iostream>
#include <stack>
#include <string>

int main(int argc, char const *argv[])
{
    std::string s;
    std::stack<int> st;
    int n1, n2;

    while (std::cin >> s) {
        // if (s == "end") break;

        if (s == "+") {
            n1 = st.top();
            st.pop();
            n2 = st.top();
            st.pop();
            st.push(n2 + n1);
        } else if (s == "-") {
            n1 = st.top();
            st.pop();
            n2 = st.top();
            st.pop();
            st.push(n2 - n1);
        } else if (s == "*") {
            n1 = st.top();
            st.pop();
            n2 = st.top();
            st.pop();
            st.push(n2 * n1);
        } else if (s == "/") {
            n1 = st.top();
            st.pop();
            n2 = st.top();
            st.pop();
            st.push(n2 / n1);
        } else {
            st.push(atoi(s.c_str()));
        }
    }

    int res = st.top();
    std::cout << res << std::endl;

    return 0;
}