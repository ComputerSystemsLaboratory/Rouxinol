#include <cstdio>
#define NIL -1
typedef struct {
    int parent;
    int left;
    int right;
} Node;

Node Tree[26];

void Preorder(int index) {
    if (index != NIL) {
        printf(" %d", index);
        Preorder(Tree[index].left);
        Preorder(Tree[index].right);
    }
}

void Inorder(int index) {
    if (index != NIL) {
        Inorder(Tree[index].left);
        printf(" %d", index);
        Inorder(Tree[index].right);
    }
}

void Postorder(int index) {
    if (index != NIL) {
        Postorder(Tree[index].left);
        Postorder(Tree[index].right);
        printf(" %d", index);
    }
}


int
main () {
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++) Tree[i].parent = NIL;
    for (int i=0; i<n; i++) {
        int id, left, right;
        scanf("%d %d %d", &id, &left, &right);
        Tree[id].left = left;
        Tree[id].right = right;
        if (left != NIL) Tree[left].parent = id;
        if (right != NIL) Tree[right].parent = id;
    }

    int root=0;
    for (int i=0; i<n; i++) if (Tree[i].parent == NIL) root = i;
    printf("Preorder\n");
    Preorder(root);
    printf("\n");
    printf("Inorder\n");
    Inorder(root);
    printf("\n");
    printf("Postorder\n");
    Postorder(root);
    printf("\n");

    return 0;
}