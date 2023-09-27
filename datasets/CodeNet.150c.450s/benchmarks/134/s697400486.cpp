#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

struct Node {
    int parent, left, right;
};

Node T[30];
int D[30], H[30];

void preParse(int u){
    if(u == -1){
        return;
    }
    cout << " " << u;
    preParse(T[u].left);
    preParse(T[u].right);
}

void inParse(int u){
    if(u == -1){
        return;
    }
    inParse(T[u].left);
    cout << " " << u;
    inParse(T[u].right);
}

void postParse(int u){
    if(u == -1){
        return;
    }
    postParse(T[u].left);
    postParse(T[u].right);
    cout << " " << u;
}

int main() {
    int n; cin >> n;
    rep(i, n){
        T[i].parent = -1;
    }
    rep(i, n){
        int id; cin >> id;
        int L; cin >> L;
        int R; cin >> R;
        T[id].left = L;
        T[id].right = R;
        if (L != -1){
            T[L].parent = id;
        }
        if (R != -1){
            T[R].parent = id;
        }
    }

    int r;
    rep(i, n){
        if(T[i].parent == -1){
            r = i;
            break;
        }
    }

    cout << "Preorder" << endl;
    preParse(r);
    cout << endl;

    cout << "Inorder" << endl;
    inParse(r);
    cout << endl;

    cout << "Postorder" << endl;
    postParse(r);
    cout << endl;


}
