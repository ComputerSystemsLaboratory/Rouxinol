#include <cstdio>

using namespace std;
#define MAX_N 25
#define NIL -1

struct Node {
	int parent;
	int left;
	int right;
	Node() :parent(NIL), left(NIL), right(NIL) {}
	~Node(){}
};

Node tree[MAX_N];

// ???????????????
void preParse(int id) {
	if (id == NIL) return;
	printf(" %d", id);
	preParse(tree[id].left);
	preParse(tree[id].right);
	return;
}

// ???????????????
void inParse(int id) {
	if (id == NIL) return;
	inParse(tree[id].left);
	printf(" %d", id);
	inParse(tree[id].right);
	return;
}


// ???????????????
void postParse(int id) {
	if (id == NIL) return;
	postParse(tree[id].left);
	postParse(tree[id].right);
	printf(" %d", id);
	return;
}

int main() {
	int n = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int id, l, r;
		scanf("%d%d%d", &id, &l, &r);
		tree[id].left = l;
		tree[id].right = r;
		if (tree[l].parent == NIL) {
			tree[l].parent = id;
		}
		if (tree[r].parent == NIL) {
			tree[r].parent = id;
		}
	}
	int root = 0;
	for (int i = 0; i < n; i++) {
		if (tree[i].parent == NIL) {
			root = i;
			break;
		}
	}
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