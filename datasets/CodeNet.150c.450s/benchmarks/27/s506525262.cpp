#include <cstdio>
#include <cstdlib>

struct Node {
    int key;
    Node *parent, *left, *right;
};
Node *nil, *root;

void Insert(int key)
{
    Node *x = root;
    Node *y = nil;
    Node *z = (Node *)malloc(sizeof(Node));
    z->key = key;
    z->left = nil;
    z->right = nil;
    while (x != nil) {
        y = x;
        if (z->key < x->key) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    z->parent = y;

    if (y == nil) {
        root = z;
    } else if (z->key < y->key) {
        y->left = z;
    } else {
        y->right = z;
    }
}

void PrintPreorder(Node *node)
{
    if (node != nil) {
        fprintf(stdout, " %d", node->key);
        PrintPreorder(node->left);
        PrintPreorder(node->right);
    }
}

void PrintInorder(Node *node)
{
    if (node != nil) {
        PrintInorder(node->left);
        fprintf(stdout, " %d", node->key);
        PrintInorder(node->right);
    }
}

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char inst[10];
        scanf("%s", inst);

        if (inst[0] == 'i') {
            int key;
            scanf("%d", &key);
            Insert(key);
        } else if (inst[0] == 'p') {
            PrintInorder(root);
            fprintf(stdout, "\n");
            PrintPreorder(root);
            fprintf(stdout, "\n");
        }
    }

    return 0;
}
