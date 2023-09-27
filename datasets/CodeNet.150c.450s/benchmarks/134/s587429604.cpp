#include <algorithm>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <climits>

#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const int INF=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
using namespace std;
typedef pair<int ,int > P;
typedef long long ll;

const int NIL=-1;
struct Node {int p,l,r;};
Node T[10004];
int n;

void preParse(int u) {
    if(u==NIL) return;
    printf(" %d",u);
    preParse(T[u].l);
    preParse(T[u].r);
}

void inParse(int u) {
    if(u==NIL) return;
    inParse(T[u].l);
    printf(" %d",u);
    inParse(T[u].r);
}
void postParse(int u) {
    if(u==NIL) return;
    postParse(T[u].l);
    postParse(T[u].r);
    printf(" %d",u);

}

int main() {
    int v,l,r,root;
    cin>>n;
    rep(i,n) T[i].p=NIL;
    rep(i,n) {
        cin>>v>>l>>r;
        T[v].l=l;
        T[v].r=r;
        if(l!=NIL) T[l].p=v;
        if(r!=NIL) T[r].p=v;
    }
    rep(i,n) if(T[i].p==NIL) root=i;
    printf("Preorder\n");
    preParse(root);
    printf("\n");

    printf("Inorder\n");
    inParse(root);
    printf("\n");

    printf("Postorder\n");
    postParse(root);
    printf("\n");


    return 0;
}