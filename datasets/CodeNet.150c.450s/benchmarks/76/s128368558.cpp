#include<stdio.h>
#include<stdlib.h>

struct Node {
    Node* parent;
    Node* left;
    Node* right;
    int key;
};

Node * NIL = NULL;
Node * ROOT = NIL;

void Inorder (Node* n) {
    if (n == NIL) return;
    Inorder(n->left);
    printf(" %d", n->key);
    Inorder(n->right);
}
void Preorder (Node* n) {
    if (n == NIL) return;
    printf(" %d", n->key);
    Preorder(n->left);
    Preorder(n->right);
}

void insert (Node* n) {
    Node * r = ROOT;
    Node * t;
    while (r != NIL) {
        t = r;
        if (n->key < r->key) {
            r = r->left;
        }
        else {
            r = r->right;
        }
    }
    n->parent = t;

    if (ROOT == NIL) {
        ROOT = n;
    }
    else if(n->key < t->key) {
        t->left = n;
    }
    else {
        t->right = n;
    }
}

bool find(int key) {
    Node* t = ROOT;
    while (t != NIL) {
        if ( t->key == key) {
            return true;
        }
        else if (key < t->key) {
            t = t->left;
        }
        else {
            t = t->right;
        }
    }
    return false;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        char s[100];
        scanf("%s", s);
        if (s[0] == 'i') {
            int key;
            scanf("%d", &key);
            Node* n = (Node *) malloc(sizeof(Node));
            n->key = key;
            n->parent = n->left = n->right = NIL;
            insert(n);
        }
        else if (s[0] == 'p') {
            Inorder(ROOT);
            printf("\n");
            Preorder(ROOT);
            printf("\n");
        }
        else if (s[0] == 'f') {
            int key;
            scanf("%d", &key);
            if (find(key)) {
                printf("yes\n");
            }
            else {
                printf("no\n");
            }
        }
    }
}