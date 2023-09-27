#include <iostream>
using namespace std;

const int NIL = -1;

struct Node{
    int left, right, parent;
};

class PrintTree{
public:
    void preorder(Node* tree, int id)
    {
        if(id == NIL) return;
        cout << " " << id;
        preorder(tree, tree[id].left);
        preorder(tree, tree[id].right);
    }

    void inorder(Node* tree, int id)
    {
        if(id == NIL) return;
        inorder(tree, tree[id].left);
        cout << " " << id;
        inorder(tree, tree[id].right);
    }

    void postorder(Node* tree, int id)
    {
        if(id == NIL) return;
        postorder(tree, tree[id].left);
        postorder(tree, tree[id].right);
        cout << " " << id;
    }
};


int main()
{
    Node tree[25];
    PrintTree print;
    int n, id, l, r;
    cin >> n;
    for(int i=0;i<n;++i) tree[i].parent = NIL;
    for(int i=0;i<n;++i)
    {
        cin >> id;
        cin >> l >> r;
        tree[l].parent = tree[r].parent = id;
        tree[id].left = l;
        tree[id].right = r;
    }

    int root;
    for(int i=0;i<n;++i)
    {
        if(tree[i].parent == NIL)
        {
            root = i;
            break;
        }
    }

    cout << "Preorder" << endl;
    print.preorder(tree, root);
    cout << endl;
    cout << "Inorder" << endl;
    print.inorder(tree, root);
    cout << endl;
    cout << "Postorder" << endl;
    print.postorder(tree, root);
    cout << endl;

}

