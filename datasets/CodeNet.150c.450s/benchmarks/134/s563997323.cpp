#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <iomanip>
using namespace std;
typedef long long ll;
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;

#define EPS (1e-7)
#define INF (1e15)
#define PI (acos(-1))
#define MOD 1000000007

#define REP(i,n) for(int i=0;i<n;i++)
#define REPS(i,f,n) for(int i=(f);i<(n);i++)
#define EACH(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)

#define dump(x)  cout << #x << " = " << (x) << endl;
#define debug(x) cout << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
#define arrdump(n,a) for(int i=0;i<n;i++) {cout<<((i>0)? " ":"")<<a[i];}cout<<"\n";


typedef pair<int, int> P;
typedef pair<ll, ll> LP;
typedef pair<int, P> PP;
typedef pair<ll, LP> LPP;

int dy4[]={0, 0, 1, -1};
int dx4[]={1, -1, 0, 0};
int dx8[]={0, 0, 1, -1, 1, 1, -1, -1};
int dy8[]={1, -1, 0, 0, 1, -1, -1, 1};

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_7_C&lang=jp

#define NIL -1

struct Node
{
    int l, r, p;
};

int n;
Node T[100005];

static void preOrder(int i) {
    if (i == NIL) return;
    printf(" %d", i);
    preOrder(T[i].l);
    preOrder(T[i].r);
}

static void inOrder(int i) {
    if (i == NIL) return;
    inOrder(T[i].l);
    printf(" %d", i);
    inOrder(T[i].r);
}

static void postOrder(int i) {
    if (i == NIL) return;
    postOrder(T[i].l);
    postOrder(T[i].r);
    printf(" %d", i);
}

int main() {
    cin >> n;
    REP(i, n) T[i].p = NIL;

    REP(i, n) {
        int id, l, r;
        cin >> id >> l >> r;
        T[id].l = l;
        T[id].r = r;
        if (l != NIL) T[l].p = id;
        if (r != NIL) T[r].p = id;
    }


    int root = 0;
    REP(i, n) if (T[i].p == NIL) root = i;

    cout << "Preorder" << "\n";
    preOrder(root); cout << "\n";
    cout << "Inorder" << "\n";
    inOrder(root); cout << "\n";
    cout << "Postorder" << "\n";
    postOrder(root); cout << "\n";
    return 0;
}

