#include <iostream>

#define NIL -1

using namespace std;

struct node{
    int id, parent, left, right;
};

struct node tree[50];

void preParse(int u){
    if(u == NIL) return;
    cout << " " << tree[u].id;
    preParse(tree[u].left);
    preParse(tree[u].right);
}

void inParse(int u){
    if(u == NIL) return;
    inParse(tree[u].left);
    cout << " " << tree[u].id;
    inParse(tree[u].right);
}

void postParse(int u){
    if(u == NIL) return;
    postParse(tree[u].left);
    postParse(tree[u].right);
    cout << " " << tree[u].id;
}

int main(){
    int n, tmpId, rootNode;
    cin >> n;
    for(int i = 0; i < n; i++) tree[i].id = tree[i].parent = tree[i].left = tree[i].right = NIL;
    for(int i = 0; i < n; i++){
        cin >> tmpId;
        tree[tmpId].id = tmpId;
        cin >> tree[tmpId].left >> tree[tmpId].right;
        if(tree[tmpId].left != NIL) tree[tree[tmpId].left].parent = tmpId;
        if(tree[tmpId].right != NIL) tree[tree[tmpId].right].parent = tmpId;
    }
    for(int i = 0; i < n; i++) if(tree[i].parent == NIL) rootNode = i;
    cout << "Preorder" << endl;
    preParse(rootNode);
    cout << endl << "Inorder" << endl;
    inParse(rootNode);
    cout << endl << "Postorder" << endl;
    postParse(rootNode);
    cout << endl;
    return 0;        
}