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
    Node *parent;
    Node *left;
    Node *right;
};

Node* newNode(int key) {
    Node *tmp = new Node;
    tmp->key = key;
    tmp->parent = NULL;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}

Node* root(Node *node) {
    if (!node->parent) return node;
    else return root(node->parent);
}

void insert(Node *node, int key) {
    Node* now = root(node);
    Node* par = NULL;
    Node* z = newNode(key);

    // nodeの根から順に辿る
    while (now) {
        par = now;
        if (z->key < now->key) {
            now = now->left;  // 左の子へ移動
        } else {
            now = now->right; // 右の子へ移動
        }
    }
    z->parent = par;

    if (!par) {
        node = z;
    } else if (z->key < par->key) {
        par->left = z;
    } else {
        par->right = z;
    }
}

void preorder(Node* node) {
    if (!node) return;
    cout << ' ' << node->key;
    preorder(node->left);
    preorder(node->right);
}

void inorder(Node* node) {
    if (!node) return;
    inorder(node->left);
    cout << ' ' << node->key;
    inorder(node->right);
}


int main() {
    int n; cin >> n;
    Node* tree;
    rep(i, n) {
        string query;
        cin >> query;
        if (query == "insert") {
            int key; cin >> key;
            if (i == 0) tree = newNode(key);
            else {
                insert(tree, key);
            }
        }
        if (query == "print") {
            inorder(tree);
            cout << endl;
            preorder(tree);
            cout << endl;
        }
    }
}

