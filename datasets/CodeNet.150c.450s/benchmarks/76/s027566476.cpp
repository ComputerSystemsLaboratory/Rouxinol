#include <cstdio>
#include <cstdlib>

typedef struct node {
    long v;
    node *parent;
    node *left;
    node *right;
} Node;

typedef struct {
    Node *root;
} Tree;

Tree T = {NULL};

void insertTree(Node *node) {
    Node *y = NULL;
    Node *x = T.root;
    while (x != NULL) {
        y = x;
        if (node->v < x->v) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    node->parent = y;
    if (y == NULL) {
        T.root = node;
    } else if (node->v < y->v) {
        y->left = node;
    } else {
        y->right = node;
    }
}

bool find(long v) {
    Node *x = T.root;
    while (x != NULL) {
        if (x->v == v) return true;
        else if (x->v < v) x = x->right;
        else x = x->left;
    }
    return false;
}

void Preorder(Node *n) {
    if (n != NULL) {
        printf(" %ld", n->v);
        Preorder(n->left);
        Preorder(n->right);
    }
}

void Inorder(Node *n) {
    if (n != NULL) {
        Inorder(n->left);
        printf(" %ld", n->v);
        Inorder(n->right);
    }
}

int main () {
    long n;
    scanf("%ld", &n);
    char command[10];
    long value;
    for (long i=0; i<n; i++) {
        scanf(" %s %ld", command, &value);
        if (command[0] == 'i') {
            Node *node = (Node *)malloc(sizeof(Node));
            node->v = value;
            node->parent = NULL;
            node->left = NULL;
            node->right = NULL;
            insertTree(node);
        } else if (command[0] == 'f') {
            bool found = find(value);
            if (found) printf("yes\n");
            else printf("no\n");
        } else {
            Inorder(T.root);
            printf("\n");
            Preorder(T.root);
            printf("\n");
        }
    }

    return 0;
}