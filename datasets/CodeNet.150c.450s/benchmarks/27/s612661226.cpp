#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const int INF = 1<<30; 
const int MOD = 1e9 + 7;
template<class Type> class BinaryTree
{
    struct Node
    {
        Type val;
        Node *left, *right;
    };
    public:
        Node *root = NULL;
        Node *insert(Node *p, Type x)
        {
            if(p == NULL)
            {
                Node *q = new Node;
                q->val = x;
                q->left = q->right = NULL;
                if(root == NULL) root = q;
                return q;
            }
            else
            {
                if(x < p->val) p->left = insert(p->left, x);
                else p->right = insert(p->right, x);
                return p;
            }
        }
        void inorder(Node *p)
        {
            if(p->left != NULL) inorder(p->left);
            cout << " " << p->val;
            if(p->right != NULL) inorder(p->right);
        }
        void preorder(Node *p)
        {
            cout << " " << p->val;
            if(p->left != NULL) preorder(p->left);
            if(p->right != NULL) preorder(p->right);
        }
};
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n; cin >> n;
    BinaryTree<int> T;
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        if(s == "insert") 
        {
            int n; cin >> n;
            T.insert(T.root, n);
        }
        if(s == "print")
        {
            T.inorder(T.root);
            cout << endl;
            T.preorder(T.root);
            cout << endl;
        }
    }
    return 0;
}


