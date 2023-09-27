#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
    int a, b;
    stack<int> st;
    string s;
    while (cin >> s) {
        if (s == "+") {
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(a + b);
        } else if (s == "-") {
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(b - a);
        } else if (s == "*") {
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            st.push(a * b);
        } else {
            st.push(stoi(s));
        }
    }

    std::cout << st.top() << endl;
}
