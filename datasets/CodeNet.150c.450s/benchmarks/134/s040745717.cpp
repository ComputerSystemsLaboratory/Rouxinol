// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector<vector<int>>
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1000000007;
const int NIL = -1;

struct Node{
    int p, l, r;
};

vector<Node> T(30, {NIL, NIL, NIL});

void preOrder(int u){
    cout << ' ' << u;
    if(T[u].l != NIL) preOrder(T[u].l);
    if(T[u].r != NIL) preOrder(T[u].r);
}

void inOrder(int u){
    if(T[u].l != NIL) inOrder(T[u].l);
    cout << ' ' << u;
    if(T[u].r != NIL) inOrder(T[u].r);
}

void postOrder(int u){
    if(T[u].l != NIL) postOrder(T[u].l);
    if(T[u].r != NIL) postOrder(T[u].r);
    cout << ' ' << u;
}

int main(){
    int N;
    cin >> N;
    rep(i, N){
        int id, left, right;
        cin >> id >> left >> right;
        T[id].l = left;
        T[id].r = right;
        if(left != NIL) T[left].p = id;
        if(right != NIL) T[right].p = id;
    }

    int root;
    rep(i, N){
        if(T[i].p == NIL){
            root = i;
            break;
        }
    }

    cout << "Preorder" << endl;
    preOrder(root);
    cout << endl;

    cout << "Inorder" << endl;
    inOrder(root);
    cout << endl;

    cout << "Postorder" << endl;
    postOrder(root);
    cout << endl;
    
}
