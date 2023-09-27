#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    stack<int> S1;
    stack<pair<int, int>> S2;

    int pos = 0, sum = 0;
    char ch;
    while (cin >> ch) {
        if (ch == '\\') {
            S1.push(pos);
        } else if (ch == '/' && S1.size() > 0) {
            int ppos = S1.top(); S1.pop();
            sum += pos - ppos;
            int div = pos - ppos;
            while (S2.size() > 0 && S2.top().first > ppos) {
                div += S2.top().second; S2.pop();
            }
            S2.push(make_pair(ppos, div));
        }
        pos++;
    }

    vector<int> divs;
    while (!S2.empty()) {
        divs.push_back(S2.top().second);
        S2.pop();
    }
    reverse(divs.begin(), divs.end());
    cout << sum << endl;
    cout << divs.size();
    for (auto i = 0; i < divs.size(); i++) {
        cout << " " << divs[i];
    }
    cout << endl;

    return 0;
}