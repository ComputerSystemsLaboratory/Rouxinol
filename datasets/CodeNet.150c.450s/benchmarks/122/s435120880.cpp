#include <cstdio>
#include <queue>
using namespace std;

int main(void) {
    char order[16];
    priority_queue<int> S;

    while (1) {
        scanf("%s", order);
        if (order[0] == 'i') {
            int k; scanf("%d", &k);
            S.push(k);
        } else if (order[1] == 'x') {
            printf("%d\n", S.top());
            S.pop();
        } else if (order[0] == 'e') {
            break;
        }
    }

    return 0;
}