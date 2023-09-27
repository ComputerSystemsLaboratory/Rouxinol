#include <string>
#include <queue>
#include <iostream>

using namespace std;

struct Process {
    string name;
    long long time;
};

int main() {
    queue<Process> que;
    int n, q;
    cin >> n >> q;
    Process p[n], pp;
    for (int i = 0; i < n; i++) {
        cin >> p[i].name >> p[i].time;
        que.push(p[i]);
    }

    int timer = 0;
    while (!que.empty()) {
        pp = que.front();
        if (pp.time > q) {
            pp.time -= q;
            timer += q;
            que.pop();
            que.push(pp);
        } else {
            timer += pp.time;

            cout << que.front().name << " " << timer << endl;
            que.pop();
        }
    }

    return 0;
}

