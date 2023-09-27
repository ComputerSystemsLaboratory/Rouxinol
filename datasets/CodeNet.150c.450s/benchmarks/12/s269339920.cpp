#include <stdio.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

int heap[250];
int H;
int main()
{
    cin >> H;
    for (int i = 0; i < H; i++)
        cin >> heap[i];

    for (int i = 0; i < H; i++)
    {
        printf("node %d: key = %d, ", i + 1, heap[i]);
        if ((i + 1) / 2 > 0)
            printf("parent key = %d, ", heap[(i + 1) / 2 - 1]);
        if (2 * (i + 1) <= H)
            printf("left key = %d, ", heap[2 * (i + 1)-1]);
        if (2 * (i + 1) + 1 <= H)
            printf("right key = %d, ", heap[2 * (i + 1)]);
        printf("\n");
    }
    return 0;
}
