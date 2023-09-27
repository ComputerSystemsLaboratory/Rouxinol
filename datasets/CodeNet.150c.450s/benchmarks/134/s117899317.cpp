#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();
typedef long long ll;

const int NIL = -1;
const int MAX = 100005;
int cnt;

typedef struct{ int parent, left, right;}Node;
Node T[MAX];

void preParse(int u){
    if (u == NIL) return;
    cnt--;
    if (cnt != 0) cout << " " << u;
    else cout << " " << u << endl;
    preParse(T[u].left);
    preParse(T[u].right);
}
void inParse(int u){
    if (u == NIL) return;
    inParse(T[u].left);
    cnt--;
    if (cnt != 0) cout << " " << u;
    else cout << " " << u << endl;
    inParse(T[u].right);
}
void postParse(int u){
    if (u == NIL) return;
    postParse(T[u].left);
    postParse(T[u].right);
    cnt--;
    if (cnt != 0) cout << " " << u;
    else cout << " " << u << endl;
}

int main(void)
{
    int n;
    cin >> n;
    rep(i,n) {T[i].parent = T[i].left = T[i].right = NIL;}
    rep(i,n){
        int id, r, l;
        cin >> id >> l >> r;
        T[id].left = l;
        T[id].right = r;

        if (l != NIL) T[l].parent = id;
        if (r != NIL) T[r].parent = id;
    }

    int root_id;
    rep(i,n){
        if (T[i].parent == NIL) root_id = i;
    }

    /* 表示 */
    cout << "Preorder" << endl; cnt = n;
    preParse(root_id);
    cout << "Inorder" << endl; cnt = n;
    inParse(root_id); 
    cout << "Postorder" << endl; cnt = n;
    postParse(root_id); 

    return 0;
}
