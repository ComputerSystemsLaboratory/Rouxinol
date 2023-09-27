// ALDS1_8_A.cpp
// Binary search trees - Binary Search Tree I

#include <iostream>
#include <vector>
using namespace std;
const int NIL = -1;
struct TreeNode {
    int val;
    TreeNode* lchild;
    TreeNode* rchild;
    //TreeNode* parent;
    TreeNode(int x): val(x), lchild(NULL), rchild(NULL) {}
};

void insert(TreeNode *&tree, TreeNode *node)
{
    if (tree) {
        TreeNode *tmp = tree;
        TreeNode *tmp2 = tmp;
        while (tmp != NULL) {
            tmp2 = tmp;
            if (node->val < tmp->val) {
                tmp = tmp->lchild;
            }
            else {
                tmp = tmp->rchild;
            }
        }
        if (node->val < tmp2->val) {
            tmp2->lchild = node;
        }
        else {
            tmp2->rchild = node;
        }
    }
    else {
        tree = node;
}
}

void inorder(TreeNode *tree) {
    if (!tree) return;
    inorder(tree->lchild);
    cout << " " << tree->val;
    inorder(tree->rchild);
}

void preorder(TreeNode *tree) {
    if (!tree) return;
    cout << " " << tree->val;
    preorder(tree->lchild);
    preorder(tree->rchild);
}

void print(TreeNode *tree) {
    inorder(tree);
    cout << endl;
    preorder(tree);
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    string cmd;
    int num;
    TreeNode *tree = NULL;
    while(n--) {
        cin >> cmd;
        if (cmd == "insert") {
            cin >> num;
            TreeNode *node = new TreeNode(num);
            insert(tree, node);
        }
        if (cmd == "print")
            print(tree);
    }
    return 0;
}