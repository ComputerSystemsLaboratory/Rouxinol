#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define NIL -1
#define MAX 25

struct Node {
    int parent, left, right;
};

vector<Node> t(MAX, {NIL, NIL, NIL});

void preparse(int u) {
    if (u == NIL) return;
    printf(" %d", u);
    preparse(t[u].left);
    preparse(t[u].right);
}

void inparse(int u) {
    if (u == NIL) return;
    inparse(t[u].left);
    printf(" %d", u);
    inparse(t[u].right);
}

void postparse(int u) {
    if (u == NIL) return;
    postparse(t[u].left);
    postparse(t[u].right);
    printf(" %d", u);
}

int main() {
    int n;
    scanf("%d", &n);
    rep(i, n) {
        int id, l, r;
        scanf("%d %d %d", &id, &l, &r);
        if (l != NIL) t[l].parent = id;
        if (r != NIL) t[r].parent = id;
        t[id].left = l;
        t[id].right = r;
    }

    int r;
    rep(i, n) {
        if (t[i].parent == NIL) {
            r = i;
            break;
        }
    }

    printf("Preorder\n");
    preparse(r);
    printf("\n");
    printf("Inorder\n");
    inparse(r);
    printf("\n");
    printf("Postorder\n");
    postparse(r);
    printf("\n");
}
