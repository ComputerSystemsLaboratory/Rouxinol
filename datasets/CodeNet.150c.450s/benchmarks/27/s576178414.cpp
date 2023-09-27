#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#define P(x) cout << (x) << endl
#define p(x) cout << (x)
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define vv(type, c, m, n, i) vector<vector<type>> c(m, vector<type>(n, i));
#define rep(i,a,n) for(int i=(a), i##_len=(n); i<i##_len; ++i)
#define rrep(i,a,n) for(int i=(a), i##_len=(n); i>i##_len; --i)
#define len(x) ((int)(x).size())
#define mp make_pair
#define eb emplace_back
typedef long long ll;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
struct Node {
	int key;
	Node *r, *l, *p;
};
Node *root, *NIL;
inline void insert(int k) {
	Node *y = NIL;
	Node *x = root;
	Node *z;
	z = (Node *)malloc(sizeof(Node));
	z->key = k;
	z->l = z->r = NIL;
	while(x != NIL) {
		y = x;
		x = (z->key < x->key ? x->l : x->r);
	}
	z->p = y;
	if(y == NIL) root = z;
	else (z->key < y->key ? y->l : y->r) = z;
}
inline void inorder(Node *u) {
	if(u == NIL) return;
	inorder(u->l);
	cout << " " << u->key;
	inorder(u->r);
}
inline void preorder(Node *u) {
	if(u == NIL) return;
	cout << " " << u->key;
	preorder(u->l);
	preorder(u->r);
}
int main() {
	int n; cin >> n;
	string com;
	int x;
	rep(i, 0, n) {
		cin >> com;
		if(com == "insert") {
			cin >> x;
			insert(x);
		} else if(com == "print") {
			inorder(root);
			P("");
			preorder(root);
			P("");
		}
	}
	return 0;
}