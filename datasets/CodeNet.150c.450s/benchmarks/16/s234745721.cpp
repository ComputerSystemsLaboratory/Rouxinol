#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using ll = long long;
using namespace std;


int main() {
    stack<int> c1;
    stack<pair<int, int>> c2;
    char c;
    int j;
    int sum = 0;
    for (int i = 0; cin >> c; i++){
        if (c == '\\') c1.push(i);
        else if (c == '/' && !c1.empty()) {
            j = c1.top(); c1.pop();
            sum += i - j;
            int a = i - j;
            while (!c2.empty() && c2.top().first > j){
                a += c2.top().second; c2.pop();
            }
            c2.push(make_pair(j, a));
        }
    }
    vector<int> ans;
    while (!c2.empty()) { ans.push_back(c2.top().second); c2.pop();}
    reverse(ans.begin(), ans.end());
    cout << sum << "\n";
    cout << ans.size();
    for (int an : ans) {
        cout << " ";
        cout << an;
    }
    cout << "\n";
    return 0;
}
