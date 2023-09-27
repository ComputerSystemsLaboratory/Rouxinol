#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>
#include <string>
#include <cmath>
#include <iomanip>
#include <queue>
#include <list>
#include <stack>
#include <cctype>
#include <cmath>

using namespace std;

/* typedef */

typedef long long ll;

/* constant */

const int INF = 1 << 30;
const int MAX = 100000;
const int MOD = 1000000007;
const int NIL = -1;
const double pi = 3.141592653589;
/* global variables */
struct Node {
    int parent,  // parent
        left,    // left child
        right;   // right sibling
};
struct Node T[MAX];

/* function */
void preorder(int u);
void inorder(int u);
void postorder(int u);

/* main */
int main(){

    int n, v, l, r;
    cin >> n;
    for (int i = 0; i < n; i++) {
        T[i].parent = T[i].left = T[i].right = NIL;
    }

    for (int i = 0; i < n; i++) {
        cin >> v >> l >> r;
        if (l != NIL) {
            T[v].left = l;
            T[l].parent = v;
        }
        if (r != NIL) {
            T[v].right = r;
            T[r].parent = v;
        }
    }

    int root;
    for (int i = 0; i < n; i++) {
        if (T[i].parent == NIL) 
            root = i;
    }

    cout << "Preorder" << '\n'; preorder(root); cout << '\n';
    cout << "Inorder" << '\n'; inorder(root); cout << '\n';
    cout << "Postorder" << '\n'; postorder(root); cout << '\n';

    return 0;
}

void preorder(int u) {
    if (u == NIL) return;
    int l = T[u].left, r = T[u].right;
    cout << ' ' << u;
    preorder(l);
    preorder(r);
}

void inorder(int u){
    if (u == NIL) return;
    int l = T[u].left, r = T[u].right;
    inorder(l);
    cout << ' ' << u;
    inorder(r);
}

void postorder(int u) {
    if (u == NIL) return;
    int l = T[u].left, r = T[u].right;
    postorder(l);
    postorder(r);
    cout << ' ' << u;
}

