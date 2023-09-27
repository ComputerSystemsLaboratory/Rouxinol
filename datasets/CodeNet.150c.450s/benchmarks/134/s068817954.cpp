#include <iostream>
#include <algorithm>
using namespace std;


const int MAX = 10000;
const int NIL = -1;

struct Node {
    int p;
    int l;
    int r;
};

Node T[MAX];
int n, D[MAX], H[MAX];

void setDepth(int u, int d){
    if (u == NIL) return;
    D[u] = d;
    setDepth(T[u].l, d+1);
    setDepth(T[u].r, d+1);
}

int setHeight(int u){
    int h1 = 0, h2 = 0;
    if(T[u].l != NIL) h1 = setHeight(T[u].l) + 1;
    if(T[u].r != NIL) h2 = setHeight(T[u].r) + 1;
    return H[u] = max(h1, h2);
}

int getDegree(int u){
    int degree = 0;
    if(u == NIL) return NIL;
    if(T[u].l != NIL) degree++;
    if(T[u].r != NIL) degree++;
    return degree;
}

int getSibling(int u){
    int p = T[u].p;
    if( p == NIL ) return NIL;
    if(T[p].r != NIL && T[p].l != NIL) return T[p].l + T[p].r - u;
    else return NIL;
}

void printPreorder(int u){
  if (u == NIL) return;
  cout << " " << u;
  printPreorder(T[u].l);
  printPreorder(T[u].r);
}

void printInorder(int u){
  if (u == NIL) return;
  printInorder(T[u].l);
  cout << " " << u;
  printInorder(T[u].r);
}

void printPostorder(int u){
  if (u == NIL) return;
  printPostorder(T[u].l);
  printPostorder(T[u].r);
  cout << " " << u;
}



int main(){
    int v, l, r, root = 0;
    cin >> n;

    for(int i=0; i<n; i++) T[i].p = NIL;

    for(int i=0; i<n; i++){
        cin >> v >> l >> r;
        T[v].l = l;
        T[v].r = r;
        if(l != NIL) T[l].p = v;
        if(r != NIL) T[r].p = v;
    }

    for(int i=0; i<n; i++) {
        if(T[i].p == NIL) root = i;
    }

    cout << "Preorder\n";
    printPreorder(root);
    cout << "\n";
    cout << "Inorder\n";
    printInorder(root);
    cout << "\n";
    cout << "Postorder\n";
    printPostorder(root);
    cout << "\n";


    return 0;
}