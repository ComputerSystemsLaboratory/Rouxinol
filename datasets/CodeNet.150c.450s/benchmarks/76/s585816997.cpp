#include <bits/stdc++.h>
#include <string>
using namespace std;
typedef long long llong;

// 二分木の定義
struct Node {
    int key;
    Node *left, *right, *parent;
    };
// 根・葉を定義
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

    // 要素を配置する場所を決定する
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

// キーが存在するか確認する
bool find(Node* node, int key)
{
    while (node != NIL) {
        if (node->key == key) return true;

        // 二分木の特性を利用して場合分け
        if (node->key == key) {
            return true;
        } else if (node->key < key)
        {
            node = node->right;
        } else {
            node = node->left;
        }
    }
    return false;
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
    // 先行順巡回、 中間順巡回
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
    string strCmd,strRes;
    bool bRet = false;

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
        else if(strCmd == "find") {
            cin >> iNodeIdx;
            bRet = find(root, iNodeIdx);
            strRes = bRet? "yes" : "no";
            cout << strRes << "\n";
        }
    }
    return 0;
}
