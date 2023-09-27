#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

const int MAX = 13;
int n;
string cmd;
string s;
set<string> S;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cmd >> s;
        if (cmd == "insert") {
            S.insert(s);
        } else {
            if (S.count(s)) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        }
    }
    return 0;
}