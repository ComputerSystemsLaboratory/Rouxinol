#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s1;
    stack<pair<int, int>> s2;

    char c;
    int sum = 0;
    for (int i = 0; cin >> c; i++) {
        switch (c) {
            case '\\':
                s1.push(i);
                break;
            case '/':
                if (s1.size() > 0) {
                    int j = s1.top();
                    s1.pop();
                    sum += i - j;
                    int a = i - j;
                    while (s2.size() > 0 && s2.top().first > j) {
                        a += s2.top().second;
                        s2.pop();
                    }
                    s2.push(make_pair(j, a));
                }
                break;
            default:
                break;
        }
    }

    deque<int> ans;
    while (s2.size() > 0) {
        ans.push_front(s2.top().second);
        s2.pop();
    }
    cout << sum << endl;
    cout << ans.size();
    for (auto a : ans) {
        cout << " " << a;
    }
    cout << endl;

    return 0;
}