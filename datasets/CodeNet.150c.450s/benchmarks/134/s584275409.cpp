#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double long
#define rep(i, m, n) for(ll i = (ll)(m); i < (ll)(n); ++i)
#define rrep(i, m, n) for(ll i = (ll)(m); i > (ll)(n); --i)
const ll MOD = 1000000007;
const double pi = 3.14159265358979323846;

struct node{
    int parent, left, right;
};

void preorder(node *T, int id){
    cout << ' ' << id;
    if(T[id].left != -1) preorder(T, T[id].left);
    if(T[id].right != -1) preorder(T, T[id].right);
    return;
}

void inorder(node *T, int id){
    if(T[id].left != -1) inorder(T, T[id].left);
    cout << ' ' << id;
    if(T[id].right != -1) inorder(T, T[id].right);
    return;
}

void postorder(node *T, int id){
    if(T[id].left != -1) postorder(T, T[id].left);
    if(T[id].right != -1) postorder(T, T[id].right);
    cout << ' ' << id;
    return;
}

int main(void){
    int n;
    cin >> n;
    node *T = new node[n];
    rep(i, 0, n) T[i].parent = -1;
    rep(i, 0, n){
        int id;
        cin >> id;
        cin >> T[id].left >> T[id].right;
        if(T[id].left != -1) T[T[id].left].parent = id;
        if(T[id].right != -1) T[T[id].right].parent = id;
    }
    int root;
    rep(i, 0, n) {
        if(T[i].parent == -1) root = i;
    }
    cout << "Preorder" << endl;
    preorder(T, root);
    cout << endl << "Inorder" << endl;
    inorder(T, root);
    cout << endl << "Postorder" << endl;
    postorder(T, root);
    cout << endl;
    return 0;
}
