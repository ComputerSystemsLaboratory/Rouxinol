#include<iostream>
#define NIL -1
#define MAX 30
 
using namespace std;
 
struct Node { int parent, left, right; };
 
Node T[MAX];int n;
 
void preParse(int u) {
    if (u == NIL)return;
    cout<<" "<<u;
    preParse(T[u].left);
    preParse(T[u].right);
}
 
void inParse(int u) {
    if (u == NIL)return;
    inParse(T[u].left);
    cout <<" "<<u;
    inParse(T[u].right);
}
 
void postParse(int u) {
    if (u == NIL)return;
    postParse(T[u].left);
    postParse(T[u].right);
    cout <<" "<< u;
}
 
int main() {
    int id, left, right,root;
    cin >> n;
    for (int i = 0;i < n;++i)T[i].parent=T[i].left=T[i].right=NIL;
    for (int i = 0;i < n;++i) {
        cin >> id >> left >> right;
        T[id].left = left;
        T[id].right = right;
        if (left != NIL)T[left].parent = id;
        if (right != NIL)T[right].parent = id;
    }
 
    for (int i = 0;i < n;++i)if (T[i].parent == NIL)root = i;
    cout << "Preorder" << endl;
    preParse(root);
    cout << endl;
    cout << "Inorder" << endl;
    inParse(root);
    cout << endl;
    cout << "Postorder" << endl;
    postParse(root);
    cout << endl;
     
    return 0;
}
