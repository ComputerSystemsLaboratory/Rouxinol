#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    stack<int> s;

    cin >> n;
    while (n--) {
        cin >> t;
        s.push(t);
    }

    cout << s.top();
    s.pop();

    while (!s.empty()) {
        cout << " " << s.top();
        s.pop();
    }

    cout << endl;

    return 0;
}