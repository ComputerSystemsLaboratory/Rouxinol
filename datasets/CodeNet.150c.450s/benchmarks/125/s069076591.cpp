#include <iostream>
#include <stack>
using namespace std;

int n;
int g[101][101];
char c[101];
int visit[101];
int finish[101];
int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; ++j) {
            int v;
            cin >> v;
            g[u][v] = 1;
        }

    }

   stack<int> s;
    for (int l = 1; l <= n; ++l) {
        c[l] = 'w';

    }
    int time = 0;
    int start = 0;
    int v;
    while(true) {
        start++;
        if(start == n) break;
        if(c[start] == 'w') {
            time++;
            s.push(start);
            c[start] = 'g';
            visit[start] = time;
            while (s.size() != 0) {
                time++;
                v = s.top();
                int next = -1;
                for (int i = 1; i <= n ; ++i) {
                    if(i == v) {
                        continue;
                    }
                    if(g[v][i] && c[i] == 'w') {
                        next = i;
                        break;
                    }
                }
                if(next == -1) {
                    c[v] = 'b';
                    finish[v] = time;
                    s.pop();
                } else {
                    c[next] = 'g';
                    visit[next] = time;
                    s.push(next);
                }
            }
        }
    }

    for (int m = 1; m <= n; ++m) {
        cout << m << " " << visit[m ] << " " << finish[m] << endl;

    }



    return 0;
}

