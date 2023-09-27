// ALDS1_7_C.cpp
// Tree - Tree Walk

#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int id;
    int lchild;
    int rchild;
    int parent = -1;
};

void Preorder(vector<Node> &nodes, int id)
{
    cout << " " << nodes[id].id;
    if (nodes[id].lchild != -1)
        Preorder(nodes, nodes[id].lchild);
    if (nodes[id].rchild != -1)
        Preorder(nodes, nodes[id].rchild);
}

void Inorder(vector<Node> &nodes, int id)
{
    if (nodes[id].lchild != -1)
        Inorder(nodes, nodes[id].lchild);
    cout << " " << nodes[id].id;
    if (nodes[id].rchild != -1)
        Inorder(nodes, nodes[id].rchild);
}

void Postorder(vector<Node> &nodes, int id)
{
    if (nodes[id].lchild != -1)
        Postorder(nodes, nodes[id].lchild);
    if (nodes[id].rchild != -1)
        Postorder(nodes, nodes[id].rchild);
    cout << " " << nodes[id].id;
}

int main()
{
    int n;
    cin >> n;
    vector<Node> nodes(n);
    for (int i = 0; i < n; i++) {
        int id, lc, rc;
        cin >> id >> lc >> rc;
        nodes[id].id = id;
        nodes[id].lchild = lc;
        nodes[id].rchild = rc;
        if (lc != -1) {
            nodes[lc].parent = id;
        }
        if (rc != -1) {
            nodes[rc].parent = id;
        }
    }

    int root_id;
    for (int i = 0; i < n; i++) {
        if (nodes[i].parent == -1) {
            root_id = i;
            break;
        }
    }

    cout << "Preorder" << endl;
    Preorder(nodes, root_id);
    cout << endl << "Inorder" << endl;
    Inorder(nodes, root_id);
    cout << endl << "Postorder" << endl;
    Postorder(nodes, root_id);
    cout << endl;
    return 0;
}