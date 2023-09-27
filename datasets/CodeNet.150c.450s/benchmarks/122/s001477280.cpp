#include <cstdio>
#include <string>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> PQ;
    char com[10];
    int key;
    
    while(1) {
        scanf("%s", com);
        if(com[0] == 'e' && com[1] == 'n') break;
        else if(com[0] == 'i') {
            scanf("%d", &key);
            PQ.push(key);
        } else {
            printf("%d\n", PQ.top());
            PQ.pop();
        }
    }
    
    return 0;
}
