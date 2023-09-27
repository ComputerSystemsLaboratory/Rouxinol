#pragma GCC optimize ("O3")
#include <iostream>
#include <iomanip>
#include <istream>
#include <ostream>
#include <sstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <queue>
#include <deque>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <bitset>
#include <utility>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <ctime>
#include <cctype>
#include <cstdlib>
#define IINF 10e8
#define INF 1<<30
#define MOD 1000000007
#define mod 1000000007
#define REP(i, a, n) for (ll i = a; i < (ll)(n); i++)
#define REPE(i, a, n) for (ll i = a; i <= (ll)(n); i++)
#define Endl endl
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define mmax(x,y)(x>y?x:y)
#define mmin(x,y)(x<y?x:y)
#define chmax(x,y) x=mmax(x,y)
#define chmin(x,y) x=mmin(x,y)
#define all(x) (x).begin(),(x).end()
#define siz(x) (ll)(x).size()
#define PI acos(-1.0)
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<int,int>Pin;
typedef pair<ll,ll>Pll;
template<class T> using V=vector<T>;
long long GCD(long long a, long long b) {return b?GCD(b,a%b):a;}
long long LCM(long long a, long long b) {return a/GCD(a,b)*b;}
int dx[4]={-1,0,1,0};
int dy[4]={0,-1,0,1};
int ddx[8]={-1,0,1,0,1,1,-1,-1};
int ddy[8]={0,-1,0,1,1,-1,1,-1};
ll cmp(pair<ll,ll>a,pair<ll,ll> b){
        if(a.se!=b.se)
        return a.se<b.se;
        else
        return a.fi<b.fi;
}
//----------------------------------------------------------------------

//----------------------------------------------------------------------
struct Node {
    int key;
    Node *parent, *left, *right;
};

Node *root, *NIL;

void insert(int key) {
    Node *y = NIL;
    Node *x = root;
    Node *z = (Node *)malloc(sizeof(Node));

    z->key = key;
    z->left = NIL;
    z->right = NIL;

    while (x != NIL) {
        y = x;
        if (key < x->key) {
            x = x->left;
        } else {
            x = x->right;
        }
    };

    z->parent = y;

    if (y == NIL) {
        root = z;
        return;
    }

    if (key <= y->key) {
        y->left = z;
    } else {
        y->right = z;
    }
};

void preorder(Node *node) {
    if (node == NIL) return;
    cout << " " << node->key;
    preorder(node->left);
    preorder(node->right);
}

void inorder(Node *node) {
    if (node == NIL) return;
    inorder(node->left);
    cout << " " << node->key;
    inorder(node->right);
}

int main() {
    int n, x;
    string op;
    cin >> n;
    for (int i=0; i<n; i++) {
        cin >> op;
        if (op == "insert") {
            cin >> x;
            insert(x);
            continue;
        } else {
            inorder(root); cout << endl;
            preorder(root); cout << endl;
            continue;
        }
    }


    return 0;
}










































