#include <stdio.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
#define NIL -1

int n;
struct node
{
    int parent, left, right;
};

node nd[25];

int getRoot()
{
    int k = 0;
    while (nd[k].parent > NIL)
    {
        k = nd[k].parent;
    }
    return k;
}

void Preorder(int r)
{
    printf(" %d", r);
    if (nd[r].left > NIL)
        Preorder(nd[r].left);
    if (nd[r].right > NIL)
        Preorder(nd[r].right);
}

void Inorder(int r)
{
    if (nd[r].left > NIL)
        Inorder(nd[r].left);
    printf(" %d", r);
    if (nd[r].right > NIL)
        Inorder(nd[r].right);
}

void Postorder(int r)
{
    if (nd[r].left > NIL)
        Postorder(nd[r].left);
    if (nd[r].right > NIL)
        Postorder(nd[r].right);
    printf(" %d", r);
}

int main()
{
    int x, l, r;
    cin >> n;
    for (int i = 0; i < n; i++)
        nd[i].parent = NIL;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> l >> r;
        nd[x].left = l;
        nd[x].right = r;
        if (l > NIL)
            nd[l].parent = x;
        if (r > NIL)
            nd[r].parent = x;
    }

    int root = getRoot();

    printf("Preorder\n");
    Preorder(root);
    printf("\n");
    printf("Inorder\n");
    Inorder(root);
    printf("\n");
    printf("Postorder\n");
    Postorder(root);
    printf("\n");

    return 0;
}
