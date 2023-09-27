#include <cstdio>
#include <queue>
using namespace std;

priority_queue<int> PQ;

int main() {
    char cmd[8];
    while (1) {
        scanf("%s", cmd);
        if (cmd[0] == 'i') {
            int val;
            scanf("%d", &val);
            PQ.push(val);
        } else if (cmd[1] == 'x') {
            printf("%d\n", PQ.top());
            PQ.pop();
        } else if (cmd[0] == 'e') {
            break;
        }
    }
    return 0;
}
