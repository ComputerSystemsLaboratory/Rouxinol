#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct node {
    int left = -1;
    int right = -1;
    int parent = -1;
};

void preorder(vector<node> &tree, int idx) {
    cout << ' ' << idx;
    if (tree.at(idx).left != -1) preorder(tree, tree.at(idx).left);
    if (tree.at(idx).right != -1) preorder(tree, tree.at(idx).right);
}

void inorder(vector<node> &tree, int idx) {
    if (tree.at(idx).left != -1) inorder(tree, tree.at(idx).left);
    cout << ' ' << idx;
    if (tree.at(idx).right != -1) inorder(tree, tree.at(idx).right);
}

void postorder(vector<node> &tree, int idx) {
    if (tree.at(idx).left != -1) postorder(tree, tree.at(idx).left);
    if (tree.at(idx).right != -1) postorder(tree, tree.at(idx).right);
    cout << ' ' << idx;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<node> tree(n);
    for (int i = 0; i < n; ++i) {
        int id, l, r;
        cin >> id >> l >> r;
        if (l != -1) {
            tree.at(id).left = l;
            tree.at(l).parent = id;
        }
        if (r != -1) {
            tree.at(id).right = r;
            tree.at(r).parent = id;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (tree.at(i).parent == -1) {
            cout << "Preorder" << endl;
            preorder(tree, i);
            cout << endl;
            cout << "Inorder" << endl;
            inorder(tree, i);
            cout << endl;
            cout << "Postorder" << endl;
            postorder(tree, i);
            cout << endl;
            break;
        }
    }

    return 0;
}
