#include <iostream>
#include <cstring>
#include <stack>

using namespace std;
 
struct set { int next, sum, depth; };
 
int n, s, cnt;

void dfs(int next, int sum, int depth) {
    stack<set> S;
    set tmp;
    tmp.next = next; tmp.sum = sum; tmp.depth = depth;
    S.push(tmp);
    while (!S.empty()) {
        set u = S.top();
        // cout << u.next << " " << u.sum << " " << u.depth  << endl;
        if (u.depth == n && u.sum == s) {
            cnt++;
        }
        if (u.next == 10 && u.depth == 0 && u.sum == 0) break;

        if (u.next < 10 && u.depth < n) {
            tmp.next = u.next + 1;
            tmp.sum = u.sum;
            tmp.depth = u.depth;
            S.push(tmp);
 
            tmp.next = u.next + 1;
            tmp.sum = u.sum + u.next;
            tmp.depth = u.depth + 1;
            S.push(tmp);
        }
        else if (u.next == 10) {
            int tmp = u.depth;
            while (S.top().depth == tmp) {
                S.pop();
            }
        }
        else {
            S.pop();
        }
    }
}
 
int main() {
    while (cin >> n >> s) {
        if (n == 0 && s == 0) break;
        cnt = 0;
        dfs(0, 0, 0);
        cout << cnt << endl;
    }
    return 0;
}