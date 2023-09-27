#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define _overload3(_1, _2, _3, name, ...) name
#define _rep(i, n) repi(i, 0, n)
#define repi(i, a, b) for(int i = int(a); i < int(b); ++i)
#define rep(...) _overload3(__VA_ARGS__, repi, _rep, )(__VA_ARGS__)
const long long INFLL = 1LL << 60;
const int INFINT = 1 << 30;
const long long MOD = 1e9 + 7;

template <class T> void vecout(T V) {
    auto t = V.begin();
    while(t != V.end()) {
        cout << *t++;
        if(t != V.end()) cout << " ";
    }
    cout << endl;
};

class node {
  public:
    int key;
    node *p;
    node *l;
    node *r;
};
node *NIL, *root;

void insert(int k) {
    node *y = NIL;
    node *x = root;
    node *z = new node;
    z->key = k;
    z->l = NIL;
    z->r = NIL;
    while(x != NIL) {
        y = x;
        if(z->key < x->key)
            x = x->l;
        else
            x = x->r;
    }

    z->p = y;

    if(y == NIL) {
        root = z;
    } else if(z->key < y->key) {
        y->l = z;
    } else {
        y->r = z;
    }
}

void traverse(node *now, int order) {

    if(order == 0) cout << " " << now->key; // preorder
    if(now->l != NIL) traverse(now->l, order);
    if(order == 1) cout << " " << now->key; // inorder
    if(now->r != NIL) traverse(now->r, order);
    if(order == 2) cout << " " << now->key; // postorder
}

node *find(int k) {
    node *x = root;
    while(x != NIL && x->key != k) {
        x = x->key > k ? x->l : x->r;
    }
    return x;
}

void print() {
    traverse(root, 1);
    cout << endl;
    traverse(root, 0);
    cout << endl;
}

void dele(int k) {}

int main() {
    int n, k;
    string o;
    cin >> n;
    node *a;

    rep(i, n) {
        cin >> o;
        if(o == "insert") {
            cin >> k;
            insert(k);
        } else if(o == "find") {
            cin >> k;
            a = find(k);
            cout << (a != NIL ? "yes\n" : "no\n");
        } else if(o == "print") {
            print();
        }
    }
}

