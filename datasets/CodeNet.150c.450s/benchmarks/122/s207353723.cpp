#include <cstdio>
#include <queue>
#include <string>

using namespace std;

template <class T>
using gp_queue=priority_queue<T, vector<T>, less<T>>;

int main() {
    gp_queue<int> q;
    for (char buf[1<<3]; scanf("%s", buf)!=EOF;) {
        string instr(buf);
        if (instr == "insert") {
            int key;
            scanf("%d", &key);
            q.push(key);
        } else if (instr == "extract") {
            printf("%d\n", q.top());
            q.pop();
        } else if (instr == "end") {
            return 0;
        }
    }
}