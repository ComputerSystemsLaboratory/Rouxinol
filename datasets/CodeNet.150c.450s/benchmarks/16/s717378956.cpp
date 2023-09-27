#include <iostream>
#include <stack>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    stack<int> S1;
    stack<pair<int, int>> S2;
    string S;
    cin >> S;
    int s = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '\\') S1.push(i);
        else if (S[i] == '/' && S1.size() > 0) {
            int j = S1.top(); S1.pop();
            s += i - j;
            int a = i - j;
            while (S2.size() > 0 && S2.top().first > j) {
                a += S2.top().second; S2.pop();
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
    cout << s << endl;
    cout << ans.size();
    for (auto i: ans) {
        cout << " " << i;
    }
    cout << endl;

    return 0;
}