#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
using namespace std;

struct Node
{
    int key;
    Node *right, *left, *parent;
};

Node *NIL, *root;

void insert(int key){
    Node *y = NIL;
    Node *x = root;
    Node *z;
    z = (Node *)malloc(sizeof(Node));
    z->key = key;
    z->left = NIL;
    z->right = NIL;
    while (x != NIL)
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
    z->parent = y;

    if (y == NIL)
    {
        root = z;
    }
    else {
        if (z->key < y->key)
        {
            y->left = z;
        }
        else
        {
            y->right = z;
        }
        
    }
}

void find(int x){
    Node *y = root;
    while (y != NIL)
    {
        if (x == y->key )
        {
            cout << "yes" << endl;
            return;
        }
        else if (y->key < x)
        {
            y = y->right;
        }
        else
        {
            y = y->left;
        }
    }
    cout << "no" << endl;
    
}
void preorder(Node *root){
    if(root == NIL) return;
    cout << " " << root -> key;
    preorder(root->left);
    preorder(root->right);
}

void Inorder(Node *root){
    if(root == NIL) return;
    Inorder(root->left);
    cout << " " << root -> key;
    Inorder(root->right);
}

int main(){
    int n, key;
    string com;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> com;
        if (com[0] == 'i')
        {
            cin >> key;
            insert(key);
        }
        else if (com[0] == 'f')
        {
            cin >> key;
            find(key);
        }
        
        else
        {
            Inorder(root);
            cout << endl;
            preorder(root);
            cout << endl;
        }
        
    }
    

}
