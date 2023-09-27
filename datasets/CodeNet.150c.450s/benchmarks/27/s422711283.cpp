#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long llong;
#define MAX 200000
// 二分木の子の数(葉以外)
#define BINARY_CHILDREN_NUM 2
// 二分木の子の数(葉)
#define BINARY_LEAF_CHILDREN_NUM 0

struct Node {
    int key;
    Node *left, *right, *parent;
    };

Node *root, *NIL;

//  二分木に新しい値を挿入する
void insert(int key)
{
    Node *x, *y, *z;
    // 初期化
    z = new Node;
    z->key = key;
    z->left = NIL;
    z->right = NIL;
    y = NIL;
    x = root;

    // 根から適切な位置までたどる
    while (x != NIL) {
        y = x; // 親を設定
        if (z->key < x->key) {
            x = x->left;
        }
        else {
            x = x->right;
        }
    }

    z->parent = y;

    if (y == NIL) { // T が空の場合
        root = z;
    }
    else if (z->key < y->key){
        y->left = z; // z を y の左の子にする
    }
    else {
        y->right = z; // z を y の右の子にする
    }
}

// 根から先行順巡回を行う
// 親→左部分木→右部分木の順
void PreOrder(Node* node)
{
    cout << " " << node->key;

    // 左部分木をチェック
    if (node->left != NIL) {
        PreOrder(node->left);
    }
    // 右部分木をチェック
    if (node->right != NIL) {
        PreOrder(node->right);
    }
}

// 根から先行順巡回を行う
// 左部分木→親→右部分木の順
void InOrder(Node* node)
{
    // 左部分木をチェック
    if (node->left != NIL) {
        InOrder(node->left);
    }
    cout << " " << node->key;

    // 右部分木をチェック
    if (node->right != NIL)
    {
        InOrder(node->right);
    }
}

void PrintVec()
{
    // 先行順巡回、 中間順巡回、後行順巡回
    InOrder(root);
    cout << "\n";
    PreOrder(root);
    cout << "\n";
}

int main() {
    // 節点の個数
    int n = 0;
    // 次数
    int iDeg = 0;
    int iNodeIdx = 0;
    int left, node;
    string strCmd;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        //節点番号を取得
        cin >> strCmd;
        if (strCmd == "insert") {
            cin >> iNodeIdx;
            insert(iNodeIdx);
        }
        else if (strCmd == "print") {
            PrintVec();
        }

    }
    return 0;
}
