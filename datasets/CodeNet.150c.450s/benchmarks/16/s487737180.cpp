#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> S1;
    stack<pair<int, int> > S2;
    stack<pair<int, int> > ans;
    char c;
    int i = 0, popped_i;
    int area;

    while ( cin >> c ) {
        if (c == '\\') {
            S1.push(i);
        } else if (c == '/') {
            if (S1.empty()) continue;
            popped_i = S1.top(); S1.pop();
            area = i - popped_i;
            while (!S2.empty() && S2.top().first > popped_i) {
                area += S2.top().second;
                S2.pop();
            }
            S2.push(make_pair(popped_i, area));
        }
        i++;
    }

    int count = 0;
    count = S2.size();
    int total_area = 0;
    while (!S2.empty()) {
        ans.push(S2.top());
        total_area += S2.top().second;
        S2.pop();
    }
    cout << total_area << endl << count;
    i = 0;
    while(!ans.empty()) {
        cout << " " << ans.top().second;
        ans.pop();
    }
    cout << endl;
}
