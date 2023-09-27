#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

struct Node {
    int id;
    int left;
    int right;
};

int n;
Node nodes[25];
int root;
bool hasparent[25];

inline void walk_preorder(int id) {
    if (id == -1) { return; }
    Node& node = nodes[id];
    printf(" %d", node.id);
    walk_preorder(node.left);
    walk_preorder(node.right);
}

inline void walk_inorder(int id) {
    if (id == -1) { return; }
    Node& node = nodes[id];
    walk_inorder(node.left);
    printf(" %d", node.id);
    walk_inorder(node.right);
}

inline void walk_postorder(int id) {
    if (id == -1) { return; }
    Node& node = nodes[id];
    walk_postorder(node.left);
    walk_postorder(node.right);
    printf(" %d", node.id);
}

int main(void) {

    scanf("%d", &n);

    for (int i = 0, id; i < n; ++i) {
        scanf("%d", &id);
        Node& pnode = nodes[id];
        pnode.id = id;
        scanf("%d %d", &pnode.left, &pnode.right);
        if (pnode.left != -1)  hasparent[pnode.left]  = true;
        if (pnode.right != -1) hasparent[pnode.right] = true;
    }

    for (int i = 0; i < n; ++i) {
        if (!hasparent[i]) {
            root = i;
            break;
        }
    }

    printf("Preorder\n");
    walk_preorder(root);
    printf("\n");

    printf("Inorder\n");
    walk_inorder(root);
    printf("\n");

    printf("Postorder\n");
    walk_postorder(root);
    printf("\n");

    return 0;
}