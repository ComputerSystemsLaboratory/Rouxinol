#include <bits/stdc++.h>
using namespace std;

#define NIL -1

struct Node{
  int parent;
  int left;
  int right;
};


void preorder(Node T[], int id){
    
    if (id == NIL) return; // id : parent
    
    cout << " " << id;
    
    if (T[id].left != NIL) preorder(T, T[id].left);
    if (T[id].right != NIL) preorder(T, T[id].right);
}


void inorder(Node T[], int id){
    if (id == NIL) return;
    if (T[id].left != NIL) inorder(T, T[id].left);
    cout << " " << id;
    if (T[id].right != NIL) inorder(T, T[id].right);
}

void postorder(Node T[], int id){
    if (id == NIL) return;
    if (T[id].left != NIL) postorder(T, T[id].left);
    if (T[id].right != NIL) postorder(T, T[id].right);
    cout << " " << id;
}


int main(){
    int i, n, id, left, right;
    Node T[25];
    
    cin >> n;
    
    // initialization
    for (int i = 0; i < n; i++){
        T[i].parent = NIL;
        T[i].left = NIL;
        T[i].right = NIL;
    }
    
    for (int i = 0 ; i < n; i++){
        cin >> id >> left >> right;
        T[id].left = left;
        T[id].right = right;
        T[left].parent = id;
        T[right].parent = id;
    }
    
    
    // rootを探す
    
    int root = 0;
    for (int i = 0; i < n; i++){
        if (T[i].parent == NIL){
            root = i;
            break;
        }
    }
    
    cout << "Preorder" << endl;
    preorder(T, root);
    cout << endl;
    
    cout << "Inorder" << endl;
    inorder(T, root);
    cout << endl;
    
    cout << "Postorder" << endl;
    postorder(T, root);
    cout << endl;
    
    return 0;
}
