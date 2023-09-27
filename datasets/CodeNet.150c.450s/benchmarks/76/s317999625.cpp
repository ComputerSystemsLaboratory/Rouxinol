#include<bits/stdc++.h>
#define ll long long
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(i, n) for(int i=0; i<=n; i++)
#define repr(i, n) for(int i=n; i>0; i--)
#define REPR(i, n) for(int i=n; i>=0; i--)
const ll INF = 1LL<<60;
const int INT_INF = 1e9;
const ll MOD = 1e9+7;
template<class T> void puts(T x) { std::cout << x << std::endl; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;

struct Node {
    int key;
    Node* parent;
    Node* left;
    Node* right;
};

// 新しいノードを作成
Node* new_node(int key) {
    Node* node = new Node;
    node->key = key;
    node->parent = NULL;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// ノードが属する木の根を再帰的に求める
Node* root(Node* node) {
    if (!node->parent) return node;
    else return root(node->parent);
}

// 木にノードを挿入する
void insert(Node* tree, int key) {
    Node* now = root(tree);  // 木の根
    Node* par = NULL;        // nowの親
    Node* z = new_node(key); // 挿入するノード

    // 根から下へ辿り挿入する場所を求める
    while (now) {
        par = now;
        if (z->key < now->key) {
            now = now->left;
        } else {
            now = now->right;
        }
    }
    z->parent = par;

    if (!par) {
        tree = z;
    } else if (key < par->key) {
        par->left = z;
    } else {
        par->right = z;
    }
}

bool find(Node* tree, int key) {
    Node* now = root(tree);
    while (now) {
        if (now->key == key) return true;
        else if (key < now->key) {
            now = now->left;
        } else {
            now = now->right;
        }
    }
    return false;
}

void inorder(Node* tree) {
    if (!tree) return;
    inorder(tree->left);
    cout << " " << tree->key;
    inorder(tree->right);
}

void preorder(Node* tree) {
    if (!tree) return;
    cout << " " << tree->key;
    preorder(tree->left);
    preorder(tree->right);
}

int main() {
    int n; cin >> n;
    Node* tree;
    rep(i, n) {
        string query; cin >> query;
        if (query == "insert") {
            int key; cin >> key;
            if (i == 0) tree = new_node(key);
            else insert(tree, key);
        } else if (query == "find") {
            int key; cin >> key;
            bool found = find(tree, key);
            cout << (found ? "yes" :  "no") << endl;
        } else {
            inorder(tree);
            cout << endl;
            preorder(tree);
            cout << endl;
        }
    }
}

