#include <bits/stdc++.h>

const static int MAX = 25;

class Node {
public:
    int parent, left, right;
    Node(int parent = -1, int left = -1, int right = -1) : parent(parent), left(left), right(right) {}
};

Node T[MAX];
int H[MAX], D[MAX];


void preOrder(int node) {
    if (node == -1) return;
    std::printf(" %d", node);
    preOrder(T[node].left);
    preOrder(T[node].right);
}

void inOrder(int node) {
    if (node == -1) return;
    inOrder(T[node].left);
    std::printf(" %d", node);
    inOrder(T[node].right);
}

void postOrder(int node) {
    if (node == -1) return;
    postOrder(T[node].left);
    postOrder(T[node].right);
    std::printf(" %d", node);
}

int main()
{
    int N, node, left, right, root = 0;
    std::scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        std::scanf("%d %d %d", &node, &left, &right);
        if (left != -1) T[left].parent = node;
        if (right != -1) T[right].parent = node;
        T[node].left = left; T[node].right = right;
    }

    for (int i = 0; i < N; i++) {
        if (T[i].parent == -1) {
            root = i;
            break;
        }
    }
    std::printf("Preorder\n");
    preOrder(root);
    std::printf("\n");
    std::printf("Inorder\n");
    inOrder(root);
    std::printf("\n");
    std::printf("Postorder\n");
    postOrder(root);
    std::printf("\n");


    return 0;
}

