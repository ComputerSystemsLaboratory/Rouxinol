#include<iostream>
#include<vector>

using namespace std;

struct node{
    int left;
    int right;
    int parent;
};

void NLR(vector<node> tree,int id)
{
    if (id != -1)
    {
        cout << " " << id;
        NLR(tree, tree[id].left);
        NLR(tree, tree[id].right);
    }
}

void LNR(vector<node> tree,int id)
{
    if (id != -1)
    {
        LNR(tree, tree[id].left);
        cout << " " << id;
        LNR(tree, tree[id].right);
    }
}

void LRN(vector<node> tree,int id)
{
    if (id != -1)
    {
        LRN(tree, tree[id].left);
        LRN(tree, tree[id].right);
        cout << " " << id;
    }
}


int main()
{
    vector<node> tree;
    int n, id, l, r;
    cin >> n;
    tree.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> id >> l >> r;
        tree[id].left = l;
        tree[id].right = r;
        tree[id].parent = -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (tree[i].left != -1)
            tree[tree[i].left].parent = i;
        if (tree[i].right != -1)
            tree[tree[i].right].parent = i;
    }

    for (int i = 0; i < n; i++)
        if (tree[i].parent == -1)
        {
            id = i;
            break;
        }
    cout << "Preorder" << endl;
    NLR(tree, id);
    cout << endl;
    cout << "Inorder" << endl;
    LNR(tree, id);
    cout << endl;
    cout << "Postorder" << endl;
    LRN(tree, id);
    cout << endl;
    return 0;

}