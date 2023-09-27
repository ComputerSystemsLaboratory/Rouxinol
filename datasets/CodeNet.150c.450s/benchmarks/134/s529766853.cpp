#include <cstdio>
#define NIL -1
#define MAX 10000

struct Node {
    int parent, left, right;
};

Node T[MAX];
int n, D[MAX], H[MAX];

void setDepth(int u, int d) {
    if(u==NIL) return;
    D[u] = d;
    setDepth(T[u].left, d+1);
    setDepth(T[u].right, d+1);
}

int setHeight(int u) {
    int h1=0, h2=0;
    if(T[u].left != NIL)  h1 = setHeight(T[u].left) + 1;
    if(T[u].right != NIL) h2 = setHeight(T[u].right) + 1;
    
    return H[u] = (h1 > h2 ? h1 : h2);
}

int getSibling(int u) {
    if(T[u].parent == NIL) return NIL;
    if(T[T[u].parent].left != u && T[T[u].parent].left != NIL)
        return T[T[u].parent].left;
    if(T[T[u].parent].right != u && T[T[u].parent].right != NIL)
        return T[T[u].parent].right;
    return NIL;
}

void preorder(int u) {
    if(u == NIL) return;
    printf(" %d", u);
    preorder(T[u].left);
    preorder(T[u].right);
}

void inorder(int u) {
    if(u == NIL) return;
    inorder(T[u].left);
    printf(" %d", u);
    inorder(T[u].right);
}

void postorder(int u) {
    if(u == NIL) return;
    postorder(T[u].left);
    postorder(T[u].right);
    printf(" %d", u);
}

int main() {
    int v, l, r, root=0;
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) T[i].parent = NIL;
    
    for (int i=0; i<n; i++) {
        scanf("%d %d %d", &v, &l, &r);
        T[v].left = l;
        T[v].right = r;
        if (l != NIL) T[l].parent = v;
        if (r != NIL) T[r].parent = v;
    }
    
    for (int i=0; i<n; i++) if(T[i].parent == NIL) root = i;
    
    setDepth(root, 0);
    setHeight(root);
    
    printf("Preorder\n");
    preorder(root);
    printf("\nInorder\n");
    inorder(root);
    printf("\nPostorder\n");
    postorder(root);
    printf("\n");
    
    return 0;
}
