#include<iostream>
#include<cstdio>
#include<algorithm>
#define NIL -1

using namespace std;

typedef struct {int parent,left,right;} Node;

Node T[25];

void prewalk(int id){
    if(id == NIL) return;
    cout << " " << id;
    prewalk(T[id].left);
    prewalk(T[id].right);
}

void inwalk(int id){
    if(id == NIL) return;
    inwalk(T[id].left);
    cout << " " << id;
    inwalk(T[id].right);
}

void postwalk(int id){
    if(id == NIL) return;
    postwalk(T[id].left);
    postwalk(T[id].right);
    cout << " " << id;
}

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        T[i].parent = NIL;
        T[i].left = NIL;
        T[i].right = NIL;
    }
    for (int i = 0; i < N; i++) {
        int p,l,r;
        cin >> p >> l >> r;
        T[p].left = l;
        T[p].right = r;
        
        if (l != NIL) T[l].parent = p;
        if (r != NIL) T[r].parent = p;
    }
    int root=0;
    while (T[root].parent != NIL) {
        root = T[root].parent;
    }
    
    cout << "Preorder\n";
    prewalk(root);
    cout << endl;
    cout << "Inorder\n";
    inwalk(root);
    cout << endl;
    cout << "Postorder\n";
    postwalk(root);
    cout << endl;
    
    return 0;
}