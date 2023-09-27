#include <cstdio>
#include <queue>
#include <string>
#include <utility>

using namespace std;

int main() {
    size_t n;
    int qtime;
    scanf("%zu %d", &n, &qtime);

    queue<pair<string, int>> q;
    for (size_t i=0; i<n; ++i) {
        char buf[1<<4];
        int time;
        scanf("%s %d", buf, &time);
        string name(buf);
        q.push(make_pair(name, time));
    }

    for (int t=0; !q.empty();) {
        pair<string, int> p=q.front(); q.pop();
        if (p.second > qtime) {
            p.second -= qtime;
            t += qtime;
            q.push(p);
        } else {
            t += p.second;
            printf("%s %d\n", p.first.c_str(), t);
        }
    }
    return 0;
}