/*
** 二叉搜索树的插入
** 中序和前序输出
*/

# include <cstdio>
# include <cstdlib>
# include <cstddef>

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *root;

void inorder(Node *u) {
    if (u == NULL)
        return;
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node *u) {
    if (u == NULL)
        return;
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

void insert(int k) {
    Node *y = NULL;
    Node *x = root;

    Node *z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->left = NULL;
    z->right = NULL;

    while (x != NULL) {
        y = x;
        if (z->key < x->key)
            x = x->left;
        else
            x = x->right;
    }

    z->parent = y;

    if (y == NULL)
        root = z;
    else if (z->key < y->key)
        y->left = z;
    else
        y->right = z;
}

bool find(int k) {
    Node *x = root;
    while (x != NULL) {
        if (k == x->key)
            return true;
        if (k < x->key)
            x = x->left;
        else
            x = x->right;
    }
    return false;
}

void solve() {
    int n, x;
    char com[10];

    root = NULL;

    scanf("%d", &n);    
    for (int i = 0; i < n; i++) {
        scanf("%s", com);
        if (com[0] == 'i') {
            scanf("%d", &x);
            insert(x);
        }
        else if (com[0] == 'f') {
            scanf("%d", &x);
            if (find(x))
                printf("yes\n");
            else
                printf("no\n");
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
