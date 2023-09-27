#include <iostream>
#include <stack>
#include <cstring>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

stack <int> st1;
stack <pair<int, int> > st2;
vector <int> ve;
string str;
int ans;

int main(void) {
    cin >> str;
    for (int i = 0; i < str.length(); i ++) {
        if (str[i] == '\\') {
            st1.push(i);
        }
        else if (str[i] == '/') {
            if (!st1.empty()) {
                int a = i - st1.top();
                int j = st1.top();
                st1.pop();
                ans += a;
                while (!st2.empty() && st2.top().first > j) {
                    a += st2.top().second;
                    st2.pop();
                }
                st2.push(make_pair(j, a));
            }
        }
    }
    while (!st2.empty()) {
        ve.push_back(st2.top().second);
        st2.pop();
    }
    cout << ans << endl << ve.size();
    for (int i = ve.size() - 1; i >= 0; i --) {
        cout << ' ' << ve[i];
    }
    cout << endl;
    return 0;
}

