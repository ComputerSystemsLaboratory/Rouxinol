#include <iostream>
using namespace std;

#define N 26

struct Node {
    int parent;
    int left;
    int right;
};

Node tree[N];

void postorder(int id) {
    if (id == -1) {
        return;
    }
    postorder(tree[id].left);
    postorder(tree[id].right);
    cout << " " << id;
}

void inorder(int id) {
    if (id == -1) {
        return;
    }
    inorder(tree[id].left);
    cout << " " << id;
    inorder(tree[id].right);
}

void preorder(int id) {
    if (id == -1) {
        return;
    }
    cout << " " << id;
    preorder(tree[id].left);
    preorder(tree[id].right);
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        tree[i].parent = -1;
        tree[i].left = -1;
        tree[i].right = -1;
    }

    int id, left, right;
    for (int i = 0; i < n; i++) {
        cin >> id >> left >> right;
        if (left != -1) {
            tree[id].left = left;
            tree[left].parent = id;
        }
        if (right != -1) {
            tree[id].right = right;
            tree[right].parent = id;
        }
    }

    int root;
    for (int i = 0; i < n; i++) {
        if (tree[i].parent == -1) {
            root = i;
            break;
        }
    }

    cout << "Preorder" << endl;
    preorder(root);
    cout << endl;
    cout << "Inorder" << endl;
    inorder(root);
    cout << endl;
    cout << "Postorder" << endl;
    postorder(root);
    cout << endl;
}
