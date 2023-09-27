//tree walk
//https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/7/ALDS1_7_C

#include <iostream>
#define NIL -1
using namespace std;

int ipre = 0;
int iin = 0;
int ipost = 0;

struct Node{
    int parent;
    int left;
    int right;
};

void preParse(Node T[], int pre[], int i);
void inParse(Node T[], int in[], int i);
void postParse(Node T[], int post[], int i);
void print(int v[], int n);

int main(){
    int n;
    cin >> n;
    int id, l, r;
    Node T[n];
    for (int i = 0; i < n; i++){
        T[i].parent = NIL;
        T[i].left = NIL;
        T[i].right = NIL;
    }
    for (int i = 0; i < n; i++){
        cin >> id >> l >> r;
        T[id].left = l;
        T[id].right = r;
        T[l].parent = id;
        T[r].parent = id;
    }
    int pre[n];
    int in[n];
    int post[n];
    int root;
    for (int i = 0; i < n; i++){
        if (T[i].parent == NIL)
            root = i;
    }
    preParse(T, pre, root);
    inParse(T, in, root);
    postParse(T, post, root);
    cout << "Preorder" << endl;
    print(pre, n);
    cout << "Inorder" << endl;
    print(in, n);
    cout << "Postorder" << endl;
    print(post, n);
    return 0;
}

void preParse(Node T[], int pre[], int i){
    if (i == NIL)
        return;
    pre[ipre] = i;
    ipre++;
    preParse(T, pre, T[i].left);
    preParse(T, pre, T[i].right);
}

void inParse(Node T[], int in[], int i){
    if (i == NIL)
        return;
    inParse(T, in, T[i].left);
    in[iin] = i;
    iin++;
    inParse(T, in, T[i].right);
}

void postParse(Node T[], int post[], int i){
    if (i == NIL)
        return;
    postParse(T, post, T[i].left);
    postParse(T, post, T[i].right);
    post[ipost] = i;
    ipost++;
}

void print(int v[], int n){
    cout << ' ';
    for (int i = 0; i < n; i++){
        if (i == n - 1)
            cout << v[i] << endl;
        else
            cout << v[i] << ' ';
    }
}
