#include "bits/stdc++.h"

using namespace std;

using ll = long long;
using ld = long double;
using P = pair<double, int>;
constexpr ld EPS = 1e-12;
constexpr int INF = numeric_limits<int>::max() / 2;
constexpr int MOD = 1e9 + 7;

template <typename T>
void printv(const vector<T> &v, int idx)
{
    int sz = v.size();
    for (int i = 0; i < sz; i++)
    {
        if (i == idx)
        {
            cout << "[" << v[i] << "]"
                 << " \n"[i == sz - 1];
            continue;
        }
        cout << v[i] << " \n"[i == sz - 1];
    }
}

struct Node
{
    Node *right;
    Node *left;
    Node *par;
    int key;

    Node(int v) : key(v)
    {
        right = left = par = NULL;
    }
};

struct BinarySearchTree
{
    Node *root;
    BinarySearchTree()
    {
        root = NULL;
    }
    void insert(int z)
    {
        insert(new Node(z));
    }
    void insert(Node *z)
    {
        Node *y = NULL, *x = root;
        while (x != NULL)
        {
            y = x;
            if (z->key < x->key)
            {
                x = x->left;
            }
            else
            {
                x = x->right;
            }
        }
        z->par = y;

        if (y == NULL)
        {
            root = z;
        }
        else if (z->key < y->key)
        {
            y->left = z;
        }
        else
        {
            y->right = z;
        }
    }
    void preorder(Node *cur)
    {
        if (cur == NULL)
            return;
        cout << " " << cur->key;
        preorder(cur->left);
        preorder(cur->right);
    }
    void inorder(Node *cur)
    {
        if (cur == NULL)
            return;
        inorder(cur->left);
        cout << " " << cur->key;
        inorder(cur->right);
    }
    void print()
    {
        inorder(root);
        cout << endl;
        preorder(root);
        cout << endl;
    }
    bool find(int v)
    {
        bool f = false;
        Node *x = root;
        while (x != NULL)
        {
            if (x->key == v)
            {
                f = true;
                break;
            }
            if (v < x->key)
            {
                x = x->left;
            }
            else
            {
                x = x->right;
            }
        }
        return f;
    }
};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int m;
    cin >> m;
    BinarySearchTree bst = BinarySearchTree();
    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        if (s == "insert")
        {
            int key;
            cin >> key;
            bst.insert(key);
        }
        else if (s == "find")
        {
            int key;
            cin >> key;
            cout << (bst.find(key) ? "yes" : "no") << endl;
        }
        else
        {
            bst.print();
        }
    }
}
