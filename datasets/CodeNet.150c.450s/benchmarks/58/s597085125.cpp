#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;
#define INF 100000000

typedef long long ll;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};

int main(void) {
    stack<int> s;
    string ss;
    while (cin >> ss) {
        if (ss == "+") {
            int next = s.top();
            s.pop();
            next += s.top();
            s.pop();
            s.push(next);
        } else if (ss == "-") {
            int next = s.top();
            s.pop();
            next -= s.top();
            s.pop();
            s.push(-next);
        } else if (ss == "*") {
            int next = s.top();
            s.pop();
            next *= s.top();
            s.pop();
            s.push(next);
        } else {
            int a = stoi(ss);
            s.push(a);
        }
    }
    cout << s.top() << endl;
    return 0;
}