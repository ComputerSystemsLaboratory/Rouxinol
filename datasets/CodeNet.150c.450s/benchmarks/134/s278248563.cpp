
#include <bits/stdc++.h>
#define ll long long
#define eps 1e-7
using namespace std;

#define MAX 100005
#define NIL -1
struct Node { int l, r, p; };
Node T[MAX];
int n, u, r, l;
void Pre(int u) {
	if (u == -1) return;
	printf(" %d", u);
	Pre(T[u].l);
	Pre(T[u].r);
}
void In(int u) {
	if (u == -1) return;
	In(T[u].l);
	printf(" %d", u);
	In(T[u].r);
}
void Post(int u) {
	if (u == -1) return;
	Post(T[u].l);
	Post(T[u].r);
	printf(" %d", u);
}
int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) T[i].p = T[i].l = T[i].r = -1;
	for (int i = 0; i < n; ++i) {
		cin >> u >> l >> r;
		T[u].l = l, T[u].r = r;
		T[l].p = u, T[r].p = u;
	}
	int root;
	for (int i = 0; i < n; ++i) if (T[i].p == -1) root = i;
	cout << "Preorder" << endl;
	Pre(root);
	cout << endl;
	cout << "Inorder" << endl;
	In(root);
	cout << endl;
	cout << "Postorder" << endl;
	Post(root);
	cout << endl;
}
