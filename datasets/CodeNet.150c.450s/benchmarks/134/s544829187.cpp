#include<stdio.h>

#define MAX 100000
#define NIL -1


struct Node {
    public:
        int id;
        int parent;
        int left;
        int right;
};

Node N[MAX];

void Preorder(int id) {
    if (id == NIL) return;
    printf(" %d", id);
    Preorder(N[id].left);
    Preorder(N[id].right);
}
void Inorder(int id) {
    if (id == NIL) return;
    Inorder(N[id].left);
    printf(" %d", id);
    Inorder(N[id].right);
}

void Postorder(int id) {
    if (id == NIL) return;
    Postorder(N[id].left);
    Postorder(N[id].right);
    printf(" %d", id);
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        N[i].id = i;
        N[i].parent = NIL;
        N[i].left = NIL;
        N[i].right = NIL;
    }

    for (int i = 0; i < n; ++i) {
        int id, lc, rc;
        scanf("%d %d %d", &id, &lc ,&rc);
        N[id].left = lc;
        N[id].right = rc;

        int deg = 0;
        if (lc != NIL) {
            N[lc].parent = id;
        }
        if (rc != NIL) {
            N[rc].parent = id;
        }
    }

    int root = NIL;
    for (int i = 0; i < n; ++i) {
        if (N[i].parent == NIL) {
            root = i;
            break;
        }
    }

    printf("Preorder\n");
    Preorder(root);
    printf("\n");

    printf("Inorder\n");
    Inorder(root);
    printf("\n");

    printf("Postorder\n");
    Postorder(root);
    printf("\n");

}