// @author: arch_

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    stack<int> s;
    int n, x; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x; s.push(x);
    }
    while (!s.empty()) {
        cout << s.top(); s.pop();
        cout << (s.empty() ? "\n" : " ");
    }
    return 0;
}