#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int n;
vector<int> g[100001];
char c[100001];
int visit[100001];
int finish[100001];
int group[100001];
int m;
int main() {

    cin >> n >> m;
    for (int i1 = 1; i1 <=m; ++i1) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

   stack<int> s;
    for (int l = 0; l < n; ++l) {
        c[l] = 'w';

    }
    int time = 0;
    int start = -1;
    int v;
    int nowg = 0;
    while(true) {
        nowg++;
        start++;
        if(start == n) break;
        if(c[start] == 'w') {
            time++;
            s.push(start);
            c[start] = 'g';
            group[start] = nowg;
            visit[start] = time;
            while (s.size() != 0) {
                time++;
                v = s.top();
                int next = -1;
                for (int i = 0; i < g[v].size() ; ++i) {
                    if(c[g[v].at(i)] == 'w') {
                        next = g[v].at(i);
                        break;
                    }
                }
                if(next == -1) {
                    c[v] = 'b';
                    finish[v] = time;
                    s.pop();
                } else {
                    c[next] = 'g';
                    group[next] = nowg;
                    visit[next] = time;
                    s.push(next);
                }
            }
        }
    }

    int q;
    cin >> q;
    for (int m = 0; m < q; ++m) {
        int a, b;
        cin >> a >> b;
        if(group[a] == group[b]) cout << "yes";
        else cout << "no";
        cout << endl; 


    }



    return 0;
}

