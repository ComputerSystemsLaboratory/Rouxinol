#include <stdio.h>
#include <iostream>
using namespace std;

#define MAX 100
#define NIL -1

struct Node {
    int parent;
    int left;
    int right;
};

Node T[MAX];
int preorder[MAX], inorder[MAX], postorder[MAX];

int count_pre = 0;
void preOrder(int n) {
    preorder[count_pre] = n;
    count_pre++;
    if(T[n].left!=NIL) {
        preOrder(T[n].left);
    }
    if(T[n].right!=NIL) {
        preOrder(T[n].right);
    }
}

int count_in = 0;
void inOrder(int n) {
    if(T[n].left!=NIL) {
        inOrder(T[n].left);
    }
    inorder[count_in] = n;
    count_in++;
    if(T[n].right!=NIL) {
        inOrder(T[n].right);
    }
}

int count_post = 0;
void postOrder(int n) {
    if(T[n].left!=NIL) {
        postOrder(T[n].left);
    }
    if(T[n].right!=NIL) {
        postOrder(T[n].right);
    }
    postorder[count_post] = n;
    count_post++;
}

int main() {
    int n;
    int id, l, r, p;
    cin >> n;
    for(int i=0; i<n; i++) {
        T[i].parent = T[i].left = T[i].right = NIL;
    }
    for(int i=0; i<n; i++) {
        cin >> id >> l >> r;
        //idの左右の子供を入力する
        T[id].left = l;
        T[id].right = r;
        //逆に左右の子供の親としてidを登録する
        //左右の子供の兄弟としてお互いを登録する
        if(l!=NIL) {
            T[l].parent = id;
        }
        if(r!=NIL) {
            T[r].parent = id;
        }
    }
    //根の番号を特定する
    for(int i=0; i<n; i++) {
        if(T[i].parent==NIL) {
            p = i;
        }
    }

    preOrder(p);
    cout << "Preorder\n";
    cout << " ";
    for(int i=0; i<n; i++) {
        cout << preorder[i];
        if(i!=n-1) {
            cout << " ";
        }
    }
    cout << endl;

    inOrder(p);
    cout << "Inorder\n";
    cout << " ";
    for(int i=0; i<n; i++) {
        cout << inorder[i];
        if(i!=n-1) {
            cout << " ";
        }
    }
    cout << endl;

    postOrder(p);
    cout << "Postorder\n";
    cout << " ";
    for(int i=0; i<n; i++) {
        cout << postorder[i];
        if(i!=n-1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
