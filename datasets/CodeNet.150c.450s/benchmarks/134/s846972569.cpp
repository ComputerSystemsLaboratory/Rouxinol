#include <iostream>
using namespace std;

struct Node { int parent, left, right; };
struct Node T[10000];
int n;

void preParse(int u)
{
	if (u == -1) return;
	cout << " " << u;
	preParse(T[u].left);
	preParse(T[u].right);
}

void inParse(int u)
{
	if (u == -1) return;
	inParse(T[u].left);
	cout << " " << u;
	inParse(T[u].right);
}

void postParse(int u) 
{
	if (u == -1) return;
	postParse(T[u].left);
	postParse(T[u].right);
	cout << " " << u;
}

int main()
{
	int v, l, r, root;

	cin >> n;
	for (int i = 0; i < n; i++) T[i].parent = -1;

	for (int i = 0; i < n; i++) 
	{
		cin >> v >> l >> r;
		T[v].left = l;
		T[v].right = r;
		if (l != -1) T[l].parent = v;
		if (r != -1) T[r].parent = v;
	}

	for (int i = 0; i < n; i++) if (T[i].parent == -1) root = i;

	cout << "Preorder" << endl;
	preParse(root);
	cout << endl;
	cout << "Inorder" << endl;
	inParse(root);
	cout << endl;
	cout << "Postorder" << endl;
	postParse(root);
	cout << endl;

	return 0;
}