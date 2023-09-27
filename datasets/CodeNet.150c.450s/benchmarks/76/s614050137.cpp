#include <iostream>
using ll = long long;
using namespace std;

/* initialize */
struct Node{
    int key;
    Node *parent, *left, *right;
};
Node *root, *NIL;
/* main */
void insert(int k){
    Node *y = NIL;
    Node *x = root;
    Node *z;
    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while (x!=NIL){
        y = x;
        if (z->key < x ->key){
            x = x->left;
        }else{
            x = x->right;
        }
    }
    z->parent = y;
    if (y == NIL){
        root = z;
    } else {
        if (z->key < y->key){
            y ->left = z;
        }else{
            y->right = z;
        }
    }
}

void preorder(Node *u){
    if(u == NIL) return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
};

void inorder(Node *u){
    if(u == NIL) return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
};
Node * find(Node *u, int k){
    while ( u!= NIL && k != u->key){
        if ( k < u->key) u = u->left;
        else u = u->right;
    }
    return u;
}
int main() {
    int n;
    int x;
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if ( s == "insert"){
            scanf("%d", &x);
            insert(x);
        } else if  ( s == "print"){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        } else if (s == "find"){
            scanf("%d", &x);
            Node *t = find(root, x);
            if (t != NIL) printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;

}
