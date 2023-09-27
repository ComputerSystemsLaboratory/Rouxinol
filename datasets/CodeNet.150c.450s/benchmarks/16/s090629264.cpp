#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int main() {
    stack<int> S1;
    stack<pair<int, int>> S2;
    char ch;
    int sum = 0;
    string line;
    cin >> line;
    for (int i = 0; i < line.size(); ++i) {
        char ch = line[i];
        if (ch == '\\') {
            S1.push(i);
        } else if (ch == '/' && !S1.empty()) {
            int j = S1.top();
            S1.pop();
            sum += i - j;
            int a = i - j;
            while (!S2.empty() && S2.top().first >= j) {
                a += S2.top().second;
                S2.pop();
            }

            S2.push(make_pair(j, a));
        }
    }

    vector<int> ans;
    while (!S2.empty()) {
        ans.push_back(S2.top().second);
        S2.pop();
    }

    reverse(ans.begin(), ans.end());
    cout << sum << endl;
    cout << ans.size();
    for (int i = 0; i < ans.size(); ++i) {
        cout << " ";
        cout << ans[i];
    }

    cout << endl;
    return 0;
}

