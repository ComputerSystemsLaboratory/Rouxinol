#include <bits/stdc++.h>
using namespace std;
struct tree
{
    int key, left, right, parent;
};
int main()
{
    int n;
    cin >> n;
    tree mytree[n + 1];
    for (int i = 1; i <= n; ++i)
        cin >> mytree[i].key;
    for (int i = 1; i <= n; ++i)
    {
        if (i / 2)
            mytree[i].parent = mytree[i / 2].key;
        if (i * 2 <= n)
            mytree[i].left = mytree[i * 2].key;
        if (i * 2 < n)
            mytree[i].right = mytree[i * 2 + 1].key;
    }
    for (int i = 1; i <= n; ++i)
    {
        printf("node %d: key = %d, ", i, mytree[i].key);
        if (i / 2)
            printf("parent key = %d, ", mytree[i].parent);
        if (i * 2 <= n)
            printf("left key = %d, ", mytree[i].left);
        if (i * 2 < n)
            printf("right key = %d, ", mytree[i].right);
        putchar('\n');
    }
}
