#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (ll i = 0; i < n; ++i)
ll dx[4] = { 0, 1, 0, -1 };
ll dy[4] = { 1, 0, -1, 0 };
const ll INF = LLONG_MAX;
const ll MOD = 1e9 + 7;

struct Node{
    int key;
    Node *right, *left, *parent;
};

Node *root, *NIL;

void insert(int k)
{
    Node* y = NIL;
    Node* x = root;
    Node* z;

    z = (Node*)malloc(sizeof(Node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;

    // 根から葉まで見る
    while (x != NIL) {
        y = x;
        if (z->key < x->key) {
            x = x->left;
        } else {
            x = x->right;
        }
    }
    // 葉まで行ったら葉の子にzを指定する
    z->parent = y;
    // 葉がNILなら根なしなので根にする
    // 葉がNIL根でないなら葉の右か左かを判断する
    if (y == NIL) {
        root = z;
    } else {
        if (z->key < y->key) {
            y->left = z;
        } else {
            y->right = z;
        }
    }
}

void inorder(Node* u)
{
    if (u == NIL) {
        return;
    }
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
}

void preorder(Node* u)
{
    if (u == NIL) {
        return;
    }
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    string com;
    cin >> n;
    rep(i, n)
    {
        cin >> com;
        if (com == "insert") {
            cin >> x;
            insert(x);
        } else if (com == "print") {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
    }

    return 0;
}
