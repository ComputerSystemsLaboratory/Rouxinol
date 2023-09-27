/*

ALDS_1_7_C:Tree Walk

树的遍历：
	前序遍历
	中序遍历
	后序遍历



*/
#include <iostream>
using namespace std;
#define Max 10000
#define Nil -1

struct Node {
	int p, r, l;
};
Node T[Max];
int n;


void preorder(int u) {
	if (u == Nil) {
		return;
	}
	cout << " " << u;
	preorder(T[u].l);
	preorder(T[u].r);
}

void inorder(int u) {
	if (u == Nil)return;
	inorder(T[u].l);
	cout << " " << u;
	inorder(T[u].r);
}
void postorder(int u) {
	if (u == Nil)
		return;
	postorder(T[u].l);
	postorder(T[u].r);
	cout << " " << u;
}


int main()
{
	int v, r, l,i;
	cin >> n;
	for (i = 0; i < n; i++)T[i].p = Nil;
	for (i = 0; i < n; i++) {
		cin >> v >> l >> r;
		T[v].l = l;
		T[v].r = r;
		if (l != Nil)T[l].p = v;
		if (r != Nil)T[r].p = v;
	}
	int root = 0;
	for (i = 0; i < n; i++) {
		if (T[i].p == Nil)
			root = i;

	}

	cout << "Preorder" << endl;
	preorder(root);
	cout << endl;
	cout << "Inorder" << endl;
	inorder(root);
	cout << endl;
	cout << "Postorder" << endl;
	postorder(root);
	cout << endl;





	return 0;
}
