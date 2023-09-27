#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <iomanip>
using namespace std;
typedef long long ll;
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;

#define EPS (1e-7)
#define INF (1e15)
#define PI (acos(-1))
#define MOD 1000000007

#define REP(i,n) for(int i=0;i<n;i++)
#define REPS(i,f,n) for(int i=(f);i<(n);i++)
#define EACH(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)

#define dump(x)  cout << #x << " = " << (x) << endl;
#define debug(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define arrdump(n,a) for(int i=0;i<n;i++) {cout<<((i>0)? " ":"")<<a[i];}cout<<"\n";


typedef pair<int, int> P;
typedef pair<ll, ll> LP;
typedef pair<int, P> PP;
typedef pair<ll, LP> LPP;

int dy4[]={0, 0, 1, -1};
int dx4[]={1, -1, 0, 0};
int dx8[]={0, 0, 1, -1, 1, 1, -1, -1};
int dy8[]={1, -1, 0, 0, 1, -1, -1, 1};

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_8_B&lang=jp

struct Node {
    int key;
    Node *l, *r, *p;
};

Node *root, *NIL;

static Node* find(Node *u, int key) {
    while(u != NIL && u->key != key) {
        if (key < u->key) {
            u = u->l;
        } else {
            u = u->r;
        }
    }
    return u;
}

static void insert(int k) {
    Node *y = NIL;
    Node *x = root;
    Node *z;
    z = (Node*)malloc(sizeof(Node));
    z->key = k;
    z->l = NIL;
    z->r = NIL;

    while(x!=NIL) {
        y = x;
        if (z->key < x->key) {
            x = x->l;
        } else {
            x = x->r;
        }
    }
    z->p = y;

    if (y==NIL) {
        root = z;
    } else {
        if (z->key < y->key) {
            y->l = z;
        } else {
            y->r = z;
        }
    }

    z->p = y;
    if (y == NIL) {
        root = z;
    } else {
        if (z->key < y->key) {
            y->l = z;
        } else {
            y->r = z;
        }
    }
}

static void inorder(Node* n) {
    if (n == NIL) return;
    inorder(n->l);
    printf(" %d", n->key);
    inorder(n->r);
}

static void preorder(Node* n) {
    if (n == NIL) return;
    printf(" %d", n->key);
    preorder(n->l);
    preorder(n->r);
}


int main() {

    int n; cin >> n;
    REP(i, n) {
        string com; cin >> com;
        if (com == "find") {
            int key; cin >> key;
            Node *t = find(root, key);
            cout << (t== NIL?"no":"yes") << "\n";
        }
        if (com == "insert") {
            int key; cin >> key;
            insert(key);
        }
        if (com == "print") {
            inorder(root);
            cout << "\n";
            preorder(root);
            cout << "\n";
        }
    }

    return 0;
}
