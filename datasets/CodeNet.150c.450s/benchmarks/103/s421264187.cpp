#include <iostream>
#include <stack>

using namespace std;

struct set { int i, sum, depth; };

int n, s, cnt;
int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

void dfs(int i, int sum, int depth) {
    stack<set> S;
    S.push(set{i, sum, depth});

    while (!S.empty()) {
        set u = S.top();
        if (u.depth == n && u.sum == s) { cnt++; }

        if (u.i == 10 && u.depth == 0 && u.sum == 0) { break; }

        if (u.i < 10 && u.depth < n) {
            S.push(set{u.i + 1, u.sum, u.depth});
            S.push(set{u.i + 1, u.sum + a[u.i], u.depth + 1});
        }
        else if (u.i == 10) {
            int tmp = u.depth;
            while (S.top().depth == tmp) { S.pop(); }
        }
        else { S.pop(); }
    }
}

int main() {
    while (cin >> n >> s) {
        if (!n && !s) { break; }
        cnt = 0;
        dfs(0, 0, 0);
        cout << cnt << endl;
    }
    return 0;
}