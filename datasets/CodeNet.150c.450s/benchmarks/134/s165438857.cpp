#include <cstdio>
#include <cstdlib>

#define NIL -1

struct Node{
    int parent, left, right;
};

void treeWalk(Node* nodes, int label, int mode);

int main(int argc, char** argv) {
    int len, root;
    Node* nodes;

    scanf("%d", &len);
    nodes = (Node *) calloc(sizeof(Node), len + 1);

    for (int i = 0; i < len; i++) {
        nodes[i].parent = nodes[i].left = nodes[i].right = NIL;
    }

    for (int i = 0; i < len; i++) {
        int label, child1, child2;
        scanf("%d %d %d", &label, &child1, &child2);

        nodes[label].left = child1;
        nodes[label].right = child2;
        nodes[child1].parent = label;
        nodes[child2].parent = label;
    }

    for (int i = 0; i < len; i++) {
        if (nodes[i].parent == NIL) {
            root = i;
            break;
        }
    }

    printf("Preorder\n");
    treeWalk(nodes, root, 0);
    printf("\nInorder\n");
    treeWalk(nodes, root, 1);
    printf("\nPostorder\n");
    treeWalk(nodes, root, 2);
    printf("\n");

    return 0;
}

void treeWalk(Node* nodes, int label, int mode) {
    if (label == NIL) {
        return;
    }

    if (mode == 0) {
        // preorder
        printf(" %d", label);
    }

    treeWalk(nodes, nodes[label].left, mode);

    if (mode == 1) {
        // pinorder
        printf(" %d", label);
    }

    treeWalk(nodes, nodes[label].right, mode);

    if (mode == 2) {
        // postorder
        printf(" %d", label);
    }
}
