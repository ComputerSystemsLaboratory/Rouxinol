#include <algorithm>
#include <cctype>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;

int solve(int w, int h) {
    vector<string> s(h);
    queue<int> queX;
    queue<int> queY;
    for (int i = 0; i < h; i++) {
        cin >> s[i];
    }
    int x, y;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == '@') {
                queX.push(i);
                queY.push(j);
                s[i][j] = '#';
                break;
            }
        }
    }
    int xmove[4] = {0, 0, -1, 1};
    int ymove[4] = {1, -1, 0, 0};
    int ans      = 0;
    while (!queX.empty() && !queY.empty()) {
        x = queX.front();
        y = queY.front();
        queX.pop();
        queY.pop();
        ans++;

        for (int i = 0; i < 4; i++) {
            if (x + xmove[i] >= 0 && x + xmove[i] < h && y + ymove[i] >= 0 && y + ymove[i] < w) {
                if (s[x + xmove[i]][y + ymove[i]] == '.') {
                    queX.push(x + xmove[i]);
                    queY.push(y + ymove[i]);
                    s[x + xmove[i]][y + ymove[i]] = '#';
                }
            }
        }
    }
    return ans;
}

int main() {
    int w, h;
    vector<int> ans;
    while (1) {
        cin >> w >> h;
        if (!w && !h)
            break;
        ans.push_back(solve(w, h));
    }
    for (int a : ans) cout << a << endl;
}
