#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>

using namespace std;

int main() {
    string s;
    stack<string> st;
    while (cin >> s) {
        if (s == "+") {
            int x = stoi(st.top());
            st.pop();
            int y = stoi(st.top());
            st.pop();
            st.push(to_string(x + y));
        } else if (s == "*") {
            int x = stoi(st.top());
            st.pop();
            int y = stoi(st.top());
            st.pop();
            st.push(to_string(x * y));
        } else if (s == "-") {
            int x = stoi(st.top());
            st.pop();
            int y = stoi(st.top());
            st.pop();
            st.push(to_string(y - x));
        } else {
            st.push(s);
        }
    }
    cout << st.top() << endl;

    return 0;
}

