#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define MAX 100000
#define NIL -1 

using namespace std;

typedef struct{
  int right;
  int left;
  int parent;
}Node;

Node T[MAX];

void inorder(int x){
  if(x == NIL) return;
  inorder(T[x].left);
  cout << " " << x;
  inorder(T[x].right);
}

void preorder(int x){
  if(x == NIL) return;
  cout << " " << x;
  preorder(T[x].left);
  preorder(T[x].right);
}

void postorder(int x){
    if(x == NIL) return;
    postorder(T[x].left);
    postorder(T[x].right);
    cout << " " << x;
}

int main(){
    int n, i, id, left, right, root = 0;
    char com[20];
    cin >> n;
    for(i = 0; i < n; i++) T[i].parent = NIL;
    for(i = 0; i < n; i++){
        cin >> id >> left >> right;
        T[id].left = left;
        T[id].right = right;
        if(left != NIL) T[left].parent = id;
        if(right != NIL) T[right].parent = id;
    }
    for(i = 0; i < n; i++){
        if(T[i].parent == NIL) root = i;
    }
    cout << "Preorder" << endl;
    preorder(root);
    cout << endl;

    cout << "Inorder" << endl;
    inorder(root);
    cout << endl;

    cout << "Postorder" << endl;
    postorder(root);
    cout << endl;

    return 0;
}
