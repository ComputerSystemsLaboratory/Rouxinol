#include <bits/stdc++.h>
using namespace std;

static const int NIL = -1;

class TreeNode {
public:
    int parent;
    int left;
    int right;
    TreeNode() : parent(NIL), left(NIL), right(NIL) {}
};

void Preorder(vector<TreeNode>& tree, int root)
{
    if (root == NIL) return;
    cout << " " << root;
    Preorder(tree, tree[root].left);
    Preorder(tree, tree[root].right);
}

void Inorder(vector<TreeNode>& tree, int root)
{
    if (root == NIL) return;
    Inorder(tree, tree[root].left);
    cout << " " << root;
    Inorder(tree, tree[root].right);
}

void Postorder(vector<TreeNode>& tree, int root)
{
    if (root == NIL) return;
    Postorder(tree, tree[root].left);
    Postorder(tree, tree[root].right);
    cout << " " << root;
}

int main()
{
    int n;
    cin >> n;
    vector<TreeNode> tree(n);
    for (int i = 0; i < n; i++) {
        int id, left, right;
        cin >> id >> left >> right;
        tree[id].left = left;
        tree[id].right = right;
        tree[left].parent = id;
        tree[right].parent = id;
    }
    int root;
    for (int i = 0; i < n; i++) {
        if (tree[i].parent == NIL) {
            root = i;
            break;
        }
    }

    cout << "Preorder" << endl;
    Preorder(tree, root);
    cout << endl;

    cout << "Inorder" << endl;
    Inorder(tree, root);
    cout << endl;

    cout << "Postorder" << endl;
    Postorder(tree, root);
    cout << endl;
}


