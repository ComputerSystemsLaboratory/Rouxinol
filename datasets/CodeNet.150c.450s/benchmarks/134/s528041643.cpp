#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0; i<(n); i++)
#define REP2(i,x,n) for(ll i=x; i<(n); i++)
#define REP3(i,x,n) for(ll i=x; i>(n); i--)
#define ALL(n) begin(n),end(n)
#define MAX 500000
#define SENTINEL 2000000000
#define NIL -1
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

struct Node{ll parent ,left,right;};
struct Node T[MAX];
ll N;
void PreorderWalk(ll u){
    if(u ==NIL)return;
    cout << " "<< u; 
    PreorderWalk(T[u].left);
    PreorderWalk(T[u].right);
}

void InorderWalk(ll u){
    if(u ==NIL)return; 
    InorderWalk(T[u].left);
    cout << " "<< u;
    InorderWalk(T[u].right);
}

void PostorderWalk(ll u){
    if(u ==NIL)return; 
    PostorderWalk(T[u].left);
    PostorderWalk(T[u].right);
    cout << " "<< u;
}
int main(){
    ll i,v,left,right,root;
    cin >> N;
    REP(i,N)T[i].parent =NIL;
    REP(i,N){
        cin >> v >> left >> right;
        T[v].left=left;
        T[v].right=right;
        if(left!=NIL)T[left].parent = v;
        if(right!=NIL)T[right].parent = v;
    }
    REP(i,N){
        if(T[i].parent==NIL)root =i;
    }
    cout << "Preorder" << endl;
    PreorderWalk(root);
    cout << endl;
    cout << "Inorder" << endl;
    InorderWalk(root);
    cout << endl;
    cout << "Postorder" << endl;
    PostorderWalk(root);
    cout << endl;
    return 0;
}
