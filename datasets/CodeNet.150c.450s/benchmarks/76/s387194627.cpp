#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> l_l;
typedef pair<int , int> i_i;
typedef vector<ll> vel;
typedef vector<int> vei;
typedef vector<char> vec;
typedef vector<bool> veb;
typedef vector<string> ves;
typedef vector<vector<ll>> ve_vel;
typedef vector<vector<int>> ve_vei;
typedef vector<vector<char>> ve_vec;
typedef vector<vector<bool>> ve_veb;
typedef vector<vector<string>> ve_ves;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rep1(i,n) for(int i=1;i<(int)(n);i++)
#define rep2(i,n) for(int i=2;i<(int)(n);i++)
#define repk(i,k,n) for(int i=k;i<(int)(n);i++)
#define fs first
#define sc second
#define pub push_back
#define pob pop_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define maxel(a) *max_element(all(a))
#define minel(a) *min_element(all(a))
#define acc accumulate
#define EPS (1e-7)
//#define INF (1e9)
#define PI (acos(-1))
#define mod (1000000007)
typedef long long int64;
const int64 INF = 1LL << 58;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return 1; } return 0; }

//BST(Binary Search Tree):二分探索木

struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *NIL, *root;

//挿入操作
void insert(int key) {
    Node *x, *y, *z;
    
    // initialize
    z = new Node;  // 新しい要素のメモリ確保
    z->key = key;
    z->left = NIL;
    z->right = NIL;
    y = NIL;
    x = root;

    // rootから適切な位置まで二分木をたどる
    while (x != NIL) {
        y = x;
        if (z->key < x->key) x = x->left;
        else x = x->right;
    }

    // 新しい要素を配置する場所を決定
    z->parent = y;  
    if (y == NIL) root = z;  // もともと木が存在しなかった場合
    else if (z->key < y->key) y->left = z;
    else y->right = z;    
}

//探索
Node* find(int key) {
  Node *x;

  x = root;
  while (x != NIL && x->key != key) {
    if (key < x->key) x = x->left;
    else x = x->right;
  }
  
  return x;        
}

// 先行順巡回
void preorder(Node* node) {
    if (node == NIL) return;
    cout << " " << node->key;
    if (node->left != NIL) preorder(node->left);
    if (node->right != NIL) preorder(node->right); 
}

// 中間順巡回
void inorder(Node* node) {
    if (node == NIL) return;
    if (node->left != NIL) inorder(node->left);
    cout << " " << node->key;
    if (node->right != NIL) inorder(node->right);
}

void print() {
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
}

//AOJ Binary Search Tree I, Binary Search Tree II, 

int main() {
    int i, m, key;
    string command;

    cin >> m;
    for (i = 0; i < m; i++) {
        cin >> command;
        if (command == "insert") {
            cin >> key;
            insert(key);
        }
        else if(command == "find") {
            cin >> key;
            if (find(key) != NIL) cout << "yes" << endl;
            else cout << "no" << endl;
        }
        else print();
    }

    return 0;
}
