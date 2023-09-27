#include <iostream>

using namespace std;

#define N_MAX 25
#define NIL -1

struct Node{int p, l, r;}; //parent, left, right

Node T[N_MAX];

void preorder_treeWalk(int v);
void inorder_treeWalk(int v);
void postorder_treeWalk(int v);

int main()
{
    int n, i,l, r, v;
    cin >> n;

    //??¨????????????
    for (i = 0; i < N_MAX; i++)
        T[i].p = T[i].r = T[i].l = NIL;

    //??¨?????\???
    for (i = 0; i < n; i++) {
         cin >> v >> l >> r; // value, left, right
         T[v].l = l;
         T[v].r = r;
         T[l].p = T[r].p = v;
    }

    //??¨???root?????¢???
    for(i = 0; i < n; i++) {
        if (T[i].p == NIL) {
            v = i;
            break;
        }
    }

    //??¨?????????
    cout << "Preorder" << endl;
    preorder_treeWalk(v);
    cout << endl;

    cout << "Inorder" << endl;
    inorder_treeWalk(v);
    cout << endl;

    cout << "Postorder" << endl;
    postorder_treeWalk(v);
    cout << endl;

    return 0;
}

//root????????????
void preorder_treeWalk(int v) {
    cout << " " << v;

    if (T[v].l == NIL && T[v].r == NIL) return;
    if (T[v].l != NIL)
        preorder_treeWalk(T[v].l);
    if (T[v].r != NIL)
        preorder_treeWalk(T[v].r);
}

void inorder_treeWalk(int v) {
    if (T[v].l != NIL) inorder_treeWalk(T[v].l);
    cout << " " << v;
    if (T[v].r != NIL) inorder_treeWalk(T[v].r);
}

void postorder_treeWalk(int v) {
    if (T[v].l != NIL) postorder_treeWalk(T[v].l);
    if (T[v].r != NIL) postorder_treeWalk(T[v].r);
    cout << " " << v;
}