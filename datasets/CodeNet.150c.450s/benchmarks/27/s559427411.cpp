/*
** 二叉搜索树的插入
** 中序和前序输出
*/

# include <cstdio>
# include <cstdlib>

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void inorder(Node *u) {
    if (u == NIL)
        return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node *u) {
    if (u == NIL)
        return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

void insert(int k) {
    Node *y = NIL;
    Node *x = root;

    Node *z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL) {
        y = x;
        if (z->key < x->key)
            x = x->left;
        else
            x = x->right;
    }

    z->parent = y;

    if (y == NIL)
        root = z;
    else if (z->key < y->key)
        y->left = z;
    else
        y->right = z;
}

void solve() {
    int n, x;
    char com[10];

    scanf("%d", &n);    
    for (int i = 0; i < n; i++) {
        scanf("%s", com);
        if (com[0] == 'i') {
            scanf("%d", &x);
            insert(x);
        }
        else {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }
}

int main() {
    // freopen("infile", "r", stdin);
    // freopen("outfile", "w", stdout);
    solve();
    return 0;
}
