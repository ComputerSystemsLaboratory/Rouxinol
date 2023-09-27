#include <cstdio>
using namespace std;

struct Node
{
	int parent, left, right;
public:
	Node() { parent = left = right = -1; }
};

Node T[30];

void Preorder(int u)
{
	printf(" %d", u);
	if (T[u].left != -1) Preorder(T[u].left);
	if (T[u].right != -1) Preorder(T[u].right);
}

void Inorder(int u)
{
	if (T[u].left != -1) Inorder(T[u].left);
	printf(" %d", u);
	if (T[u].right != -1) Inorder(T[u].right);
}

void Postorder(int u)
{
	if (T[u].left != -1) Postorder(T[u].left);
	if (T[u].right != -1) Postorder(T[u].right);
	printf(" %d", u);
}

int main()
{
	int n;
	scanf("%d", &n);

	int v, l, r;
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &v, &l, &r);
		T[v].left = l;
		T[v].right = r;
		if (T[v].left != -1) T[l].parent = v;
		if (T[v].right != -1) T[r].parent = v;
	}

	int x;
	for (int i = 0; i < n; i++) {
		if (T[i].parent == -1) {
			x = i;
			break;
		}
	}
	printf("Preorder\n");
	Preorder(x);
	printf("\n");

	printf("Inorder\n");
	Inorder(x);
	printf("\n");

	printf("Postorder\n");
	Postorder(x);
	printf("\n");

	return 0;
}