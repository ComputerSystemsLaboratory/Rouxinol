/*
 * Problem Description: Tree Walk
 * Category: Tree
 * Author: Khan
 * Date: 23th October, 2017
 */

#include <stdio.h>
#define MAX 10000
#define NIL -1

struct Node
{
    int parent, left, right;
};

Node T[MAX];
int n, D[MAX], H[MAX];

void Preorder(int u)
{
    printf(" %d", u);
    if(T[u].left != NIL)
        Preorder(T[u].left);
    if(T[u].right != NIL)
        Preorder(T[u].right);
}

void Inorder(int u)
{
    if(T[u].left != NIL)
        Inorder(T[u].left);
    printf(" %d", u);
    if(T[u].right != NIL)
        Inorder(T[u].right);
}

void Postorder(int u)
{
    if(T[u].left != NIL)
        Postorder(T[u].left);
    if(T[u].right != NIL)
        Postorder(T[u].right);
    printf(" %d", u);
}

int main(int argc, char const *argv[])
{
    //freopen("sample.txt", "r", stdin);
    int v, l, r, root = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        T[i].parent = NIL;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d %d", &v, &l, &r);
        T[v].left = l;
        T[v].right = r;
        if(l != NIL)
            T[l].parent = v;
        if(r != NIL)
            T[r].parent = v;
    }

    for (int i = 0; i < n; ++i)
    {
        if(T[i].parent == NIL)
            root = i;
    }

    printf("Preorder\n");
    Preorder(root);
    printf("\nInorder\n");
    Inorder(root);
    printf("\nPostorder\n");
    Postorder(root);
    printf("\n");
    return 0;
}