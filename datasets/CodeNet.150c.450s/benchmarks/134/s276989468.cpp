#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100005
#define NIL -1

struct Node {
    int p, l, r;
};

Node T[MAX];
int D[MAX];
int H[MAX];
int S[MAX];

/*
void print(int u) {
    cout << "node " << u << ": ";
    cout << "parent = " << T[u].p << ", ";
    cout << "sibling = " << S[u] << ", ";
    int deg = 0;
    if (T[u].l != NIL) deg++;
    if (T[u].r != NIL) deg++;
    cout << "degree = " << deg << ", ";
    cout << "depth = " << D[u] << ", ";
    cout << "height = " << H[u] << ", ";

    if (T[u].p == NIL) cout << "root";
    else if (T[u].l == NIL) cout << "leaf";
    else cout << "internal node";
    cout << endl;
}
*/

void print(int u) {
    printf("node %d: ", u);
    printf("parent = %d, ", T[u].p);
    printf("sibling = %d, ", S[u]);
    int deg = 0;
    if (T[u].l != NIL) deg++;
    if (T[u].r != NIL) deg++;
    printf("degree = %d, ", deg);
    printf("depth = %d, ", D[u]);
    printf("height = %d, ", H[u]);

    if (T[u].p == NIL) {
        printf("root\n");
    } else if (T[u].l == NIL && T[u].r == NIL) {
        printf("leaf\n");
    } else {
        printf("internal node\n");
    }
}

int setHeight(int u) {
    int h1 = 0;
    int h2 = 0;
    if (T[u].r != NIL) {
        h1 = setHeight(T[u].r) + 1;
    }

    if (T[u].l != NIL) {
        h2 = setHeight(T[u].l) + 1;
    }

    H[u] = max(h1, h2);
    return H[u];
}

void setSibling(int u) {
    if (T[u].p == NIL) {
        S[u] = NIL;
    } else {
        Node p = T[T[u].p];
        if (u == p.l) {
            S[u] = p.r;
        } else {
            S[u] = p.l;
        }
    }

}

void setDepth(int u, int d){
    if (u == NIL) return;
    D[u] = d;
    setDepth(T[u].l, d+1);
    setDepth(T[u].r,d+1);
}

void preOrder(int node) {
    if (node == NIL) {
        return;
    }

    printf(" %d", node);
    preOrder(T[node].l);
    preOrder(T[node].r);
}

void inOrder(int node) {
    if (node == NIL) {
        return;
    }

    inOrder(T[node].l);
    printf(" %d", node);
    inOrder(T[node].r);
}

void postOrder(int node) {
    if (node == NIL) {
        return;
    }

    postOrder(T[node].l);
    postOrder(T[node].r);
    printf(" %d", node);
}

int main() {
    int n;
    cin >> n;
    for (int i=0; i < n; i ++) {
        T[i].p = T[i].l = T[i].r = NIL;
    }

    for (int i=0; i < n; i++) {
        int id_;
        cin >> id_;
        int left, right;
        cin >> left >> right;
        if (left != NIL) {
            T[id_].l = left;
            T[left].p = id_;
        }

        if (right != NIL) {
            T[id_].r = right;
            T[right].p = id_;
        }
    }

    int root = 0;
    for (int i=0; i < n; i++) {
        if (T[i].p == NIL) {
            root = i;
        }
    }

    // 高さの設定をする
    setHeight(root);
    setDepth(root, 0);
    // 兄弟ノードの設定をする
    for (int i=0; i < n; i++) {
        setSibling(i);
    }

    printf("Preorder\n");
    preOrder(root);
    printf("\n");
    printf("Inorder\n");
    inOrder(root);
    printf("\n");
    printf("Postorder\n");
    postOrder(root);
    printf("\n");

    return 0;
}
