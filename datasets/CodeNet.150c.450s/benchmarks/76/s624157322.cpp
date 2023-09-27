/*
 * Problem Description: Binary Search Tree Il
 * Category: Binary Search Trees
 * Author: Khan
 * Date: 23th October, 2017
 */

#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

struct Node
{
    int key;
    Node *r, *l, *p;
};

Node *root, *NIL;

void Insert(int k)
{
    Node *y = NIL;
    Node *x = root;
    Node *z;

    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->l = NIL;
    z->r = NIL;

    while(x != NIL)
    {
        y = x;
        if(z->key < x->key)
            x = x->l;
        else
            x = x->r;
    }

    z->p = y;
    if(y == NIL)
        root = z;
    else
    {
        if(z->key < y->key)
            y->l = z;
        else
            y->r = z;
    }
}

void Inorder(Node *u)
{
    if(u == NIL)
        return;
    Inorder(u->l);
    printf(" %d", u->key);
    Inorder(u->r);
}

void Preorder(Node *u)
{
    if(u == NIL)
        return;
    printf(" %d", u->key);
    Preorder(u->l);
    Preorder(u->r);
}

Node *find(Node *u, int k)
{
    while(u != NIL && k != u->key)
    {
        if(k < u->key)
            u = u->l;
        else
            u = u->r;
    }
    return u;
}

int main(int argc, char const *argv[])
{
    //freopen("sample.txt", "r", stdin);
    int n, i, x;
    string cmd;

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        cin >> cmd;
        if(cmd[0] == 'f')
        {
            scanf("%d", &x);
            Node *t = find(root, x);
            if(t != NIL)
                printf("yes\n");
            else
                printf("no\n");
        }
        else if(cmd[0] == 'i')
        {
            scanf("%d", &x);
            Insert(x);
        }
        else if(cmd[0] == 'p')
        {
            Inorder(root);
            printf("\n");
            Preorder(root);
            printf("\n");
        }
    }
    return 0;
}