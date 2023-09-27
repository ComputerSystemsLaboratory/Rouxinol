#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 10000;
// const ll INF = 1LL<<60;
// // typedef struct Node { ll num; char c; } node;
// const ll N_MAX = 2000001;
// const ll V_MAX = 10000;
const int NIL = -1;

struct node { int parant, left, right; };
vector<int> depth, height;
vector<struct node> tree;

void preParse(int u) {
    if(u == NIL) return;
    printf(" %d", u);
    preParse(tree.at(u).left);
    preParse(tree.at(u).right);
}

void inParse(int u) {
    if(u == NIL) return;
    inParse(tree.at(u).left);
    printf(" %d", u);
    inParse(tree.at(u).right);
}

void postParse(int u) {
    if(u == NIL) return;
    postParse(tree.at(u).left);
    postParse(tree.at(u).right);
    printf(" %d", u);
}

signed main() {
    ll n; scanf("%lld", &n); 
    depth.resize(n); tree.resize(n); height.resize(n);
    ll l, c;
    for( ll i = 0; i < n; i++ ) tree.at(i).parant = NIL;
    for( ll i = 0; i < n; i++ ) {
        ll v, l, d; cin >> v >> l >> d;
        tree.at(v).left = l;
        tree.at(v).right = d;
        if( l != NIL ) tree.at(l).parant = v;
        if( d != NIL ) tree.at(d).parant = v;
    }
    int root = 0;
    for(ll i = 0; i < n; i++) if( tree.at(i).parant == NIL ) root = i;
    printf("Preorder\n");
    preParse(root);
    putchar('\n');
    printf("Inorder\n");
    inParse(root);
    putchar('\n');
    printf("Postorder\n");
    postParse(root);
    putchar('\n');

    return 0;
}


