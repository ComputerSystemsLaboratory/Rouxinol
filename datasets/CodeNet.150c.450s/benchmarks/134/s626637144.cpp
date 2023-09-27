// ????????¨?????????

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define MAX 30
#define NIL -1

struct Node { int parent, leftChild, rightSibling; };

Node tree[MAX];

void preorder(int root){
    printf(" %d", root);
    if (tree[root].leftChild != NIL)
    {
        preorder(tree[root].leftChild);
    }
    if (tree[root].rightSibling != NIL)
    {
        preorder(tree[root].rightSibling);
    }
}

void inorder(int root){
    if (root == NIL)
    {
        return;
    }
    inorder(tree[root].leftChild);
    printf(" %d", root);
    inorder(tree[root].rightSibling);
}

void postorder(int root){
    if (root == NIL)
    {
        return;
    }
    postorder(tree[root].leftChild);
    postorder(tree[root].rightSibling);
    printf(" %d", root);
}

int main(int argc, char const *argv[])
{
    int numNode;
    int id, left, right;
    cin >> numNode;

    // initialization
    for (int i = 0; i < numNode; ++i)
    {
        tree[i].parent = NIL;
    }

    // store the values
    for (int i = 0; i < numNode; ++i)
    {
        scanf("%d %d %d", &id, &left, &right);
        tree[id].leftChild = left;
        tree[id].rightSibling = right;
        if (left != NIL)
        {
            tree[left].parent = id;
        }
        if (right != NIL)
        {
            tree[right].parent = id;
        }
    }
    // find the root
    int root;
    for (int i = 0; i < numNode; ++i)
    {
        if (tree[i].parent == NIL)
        {
            root = i;
        }
    }
    // print
    printf("Preorder\n");
    preorder(root);
    printf("\n");
    printf("Inorder\n");
    inorder(root);
    printf("\n");
    printf("Postorder\n");
    postorder(root);
    printf("\n");

    return 0;
}