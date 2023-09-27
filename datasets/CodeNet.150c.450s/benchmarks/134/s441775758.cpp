/**
*    created: 11.05.2020 13:12:30
**/
#include <bits/stdc++.h>
#define int long long
const int INF = 1e18L + 5;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using namespace std;

struct Node{ int parent, left, right; };

vector<Node> T(25);

vector<int> pre;
vector<int> in;
vector<int> post;

void prePerse(int i){
    if (i == -1) return;
    pre.push_back(i);
    prePerse(T[i].left);
    prePerse(T[i].right);
    return;
}

void inPerse(int i) {
    if (i == -1) return;
    inPerse(T[i].left);
    in.push_back(i);
    inPerse(T[i].right);
    return;
}

void postPerse(int i){
    if (i == -1) return;
    postPerse(T[i].left);
    postPerse(T[i].right);
    post.push_back(i);
    return;
}


signed main() {

    cin.tie(0);
    ios_base::sync_with_stdio(false);
    
    int n; cin >> n;
    rep(i,n) T[i].parent = -1; //初期化

    //入力
    int k, l, r;
    rep(i,n) {
        cin >> k >> l >> r;
        T[k].left = l;
        T[k].right = r;
        if (l != -1) T[l].parent = k;
        if (r != -1) T[r].parent = k;
    }

    int root;

    rep(i,n) {
        if (T[i].parent == -1) root = i;
    }
    
    prePerse(root);
    inPerse(root);
    postPerse(root);
    
    cout << "Preorder" << endl;
    rep(i,n) {
        cout << " " << pre[i];
    }
    cout << endl;
    cout << "Inorder" << endl;
    rep(i,n) {
        cout << " "  << in[i];
    }
    cout << endl;
    cout << "Postorder" << endl;
    rep(i,n) {
        cout << " " << post[i];
    }
    cout << endl;
    return 0;
}
