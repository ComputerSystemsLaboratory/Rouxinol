/* ALDS1_9_A: Complete Binary Tree */

#include <iostream>
#include <cstdio>

inline bool between(int value, int begin, int end) {
    return begin <= value && value <= end;
}

int main() {
    int n_nodes;
    scanf("%d\n", &n_nodes);

    int tree[n_nodes + 1];
    for (int i = 1; i <= n_nodes; i++)
        scanf("%d", &tree[i]);

    int ip, il, ir;
    for (int i = 1; i <= n_nodes; i++) {
        printf("node %d: key = %d, ", i, tree[i]);

        ip = i / 2;
        if ( between(ip, 1, n_nodes) )
            printf("parent key = %d, ", tree[ip]);

        il = i * 2;
        if ( between(il, 1, n_nodes) )
            printf("left key = %d, ", tree[il]);

        ir = i * 2 + 1;
        if ( between(ir, 1, n_nodes) )
            printf("right key = %d, ", tree[ir]);

        printf("\n");
    }

    return 0;
}