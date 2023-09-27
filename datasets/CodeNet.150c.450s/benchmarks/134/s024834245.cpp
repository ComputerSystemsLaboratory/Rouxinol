#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
#define NIL -1

struct Node{int parent,left,right;};

vector<Node> T(MAX);
int n;
vector<int> D(MAX),H(MAX);

void setDepth(int u,int d){
    if(u == NIL) return;
    D.at(u) = d;
    setDepth(T.at(u).left,d+1);
    setDepth(T.at(u).right,d+1);
}

int setHeight(int u){
    int h1 = 0, h2 = 0;
    if(T.at(u).left != NIL){
        h1 = setHeight(T.at(u).left) + 1;
    }
    if(T.at(u).right != NIL){
        h2 = setHeight(T.at(u).right) + 1;
    }
    return H.at(u) = max(h1,h2);
}

int getSibling(int u){
    if(T.at(u).parent == NIL) return NIL;
    if(T.at(T.at(u).parent).left != u && T.at(T.at(u).parent).left != NIL) return T.at(T.at(u).parent).left;
    if(T.at(T.at(u).parent).right != u && T.at(T.at(u).parent).right != NIL) return T.at(T.at(u).parent).right;
    return NIL;
}

void print(int u){
    cout << "node " << u << ": ";
    cout << "parent = " << T.at(u).parent << ", ";
    cout << "sibling = " << getSibling(u) << ", ";
    int deg = 0;
    if(T.at(u).left != NIL) deg++;
    if(T.at(u).right != NIL) deg++;
    cout << "degree = " << deg << ", ";
    cout << "depth = " << D.at(u) << ", ";
    cout << "height = " << H.at(u) << ", ";

    if(T.at(u).parent == NIL){
        cout << "root" << endl;
    }else if(T.at(u).left == NIL && T.at(u).right == NIL){
        cout << "leaf" << endl;
    }else{
        cout << "internal node" << endl;
    }
}

void preorder(int u){
    cout << " "  << u;
    if(T.at(u).left != NIL) preorder(T.at(u).left);
    if(T.at(u).right != NIL) preorder(T.at(u).right);
}

void inorder(int u){
    if(T.at(u).left != NIL) inorder(T.at(u).left);
    cout << " "  << u;
    if(T.at(u).right != NIL) inorder(T.at(u).right);
}

void postorder(int u){
    if(T.at(u).left != NIL) postorder(T.at(u).left);
    if(T.at(u).right != NIL) postorder(T.at(u).right);
    cout << " "  << u;
}
int main(){
    int v,l,r,root = 0;
    cin >> n;

    for(int i = 0; i < n; i++) T.at(i).parent = NIL;

    for(int i = 0; i < n; i++){
        cin >> v >> l >> r;
        T.at(v).left = l;
        T.at(v).right = r;
        if(l != NIL) T.at(l).parent = v;
        if(r != NIL) T.at(r).parent = v;
    }

    for(int i = 0; i < n; i++) if(T.at(i).parent == NIL) root = i;

    // setDepth(root,0);
    // setHeight(root);

    // for(int i = 0; i < n; i++) print(i);
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


