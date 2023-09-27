#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

struct node { int p, l, r; };
node t[25];

void pre(int u) {
	if (!~u)return;
	printf(" %d", u);
	pre(t[u].l); pre(t[u].r);
}
void in(int u) {
	if (!~u)return;
	in(t[u].l);
	printf(" %d", u);
	in(t[u].r);
}
void post(int u) {
	if (!~u)return;
	post(t[u].l);
	post(t[u].r);
	printf(" %d", u);
}
int main() {
	int n; scanf("%d", &n);
	rep(i, n)t[i].p = -1;
	rep(i, n) {
		int id, l, r; scanf("%d%d%d", &id, &l, &r);
		t[id].l = l; t[id].r = r;
		t[l].p = t[r].p = id;
	}
	int r = 0;
	rep(i, n) {
		if (!~t[i].p) { r = i; break; }
	}
	puts("Preorder"); pre(r); puts("");
	puts("Inorder"); in(r); puts("");
	puts("Postorder"); post(r); puts("");
}