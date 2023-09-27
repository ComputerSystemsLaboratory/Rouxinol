#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int H;
int heap[250];

int main(void) {

    cin >> H;

    for (int i = 0; i < H; ++i) {
        scanf("%d", heap + i);
    }

    for (int i = 0; i < H; ++i) {
        printf("node %d: key = %d, ", i + 1, heap[i]);
        if (i != 0) {
            printf("parent key = %d, ", heap[(i - 1) / 2]);
        }
        if (i * 2 + 1 < H) {
            printf("left key = %d, ", heap[i * 2 + 1]);
        }
        if (i * 2 + 2 < H) {
            printf("right key = %d, ", heap[i * 2 + 2]);
        }
        printf("\n");
    }

    return 0;
}