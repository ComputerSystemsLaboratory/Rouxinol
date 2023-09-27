#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;

struct tree{
    int node;
    tree *left;
    tree *right;
    tree *parent;
};

typedef struct tree T;

void insert(T *t)
{
    T *insert_node, *nownode;
    insert_node = (T *)malloc(sizeof(T));
    cin >> insert_node->node;
    insert_node->parent = NULL;
    insert_node->left = NULL;
    insert_node->right = NULL;
    if(t->left == NULL && t->right == NULL){
        t->left = insert_node;
    }
    else {
        insert_node->parent = t;
        nownode = t->left;
        bool isleft = true;
        while(nownode != NULL){
            insert_node->parent = nownode;
            if(nownode->node > insert_node->node) {
                nownode = nownode->left;
                isleft = true;
            }else {
                nownode = nownode->right;
                isleft = false;
            }
        }
        if(isleft) (insert_node->parent)->left = insert_node;
        else (insert_node->parent)->right = insert_node;}
    return;
}

void inorder(T *t)
{
    if(t == NULL) return;
    inorder(t->left);
    if(t->node != -1) cout << " " << t->node;
    inorder(t->right);
}

void preorder(T *t)
{
    if(t == NULL) return;
    if(t->node != -1) cout << " " << t->node;
    preorder(t->left);
    preorder(t->right);
}

void print(T *t)
{
    inorder(t);
    cout << endl;
    preorder(t);
    cout << endl;
}

int main()
{
    T *root_p;
    root_p = (T *)malloc(sizeof(T));
    root_p->node = -1;
    root_p->left = NULL;
    root_p->right = NULL;
    root_p->parent = NULL;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string meirei;
        cin >> meirei;
        if(meirei == "insert") insert(root_p);
        else if(meirei == "print") print(root_p);
    }
    return 0;
}