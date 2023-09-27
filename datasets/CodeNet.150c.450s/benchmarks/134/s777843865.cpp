#include<cstdio>
#include<vector>
#include<string>
using namespace std;

const int maxn = 30;

struct Node
{
	int parent;
	int left;
	int right;
	Node() {}
};

Node Tree[maxn];

void init(int n) {
	for (int i = 0; i < n; i ++) {
		Tree[i].parent = -1;
	}
}

void build(int n) {
	for (int i = 0; i < n; i ++) {
		int id, left, right;
		scanf("%d%d%d", &id, &left, &right);
		Tree[id].left = left;
		Tree[id].right = right;
		Tree[left].parent = id;
		Tree[right].parent = id;
	}
}


void pre_order(int now) {
	if (now == -1) return;
	printf(" %d", now);
	pre_order(Tree[now].left);
	pre_order(Tree[now].right);
}

void in_order(int now) {
	if (now == -1) return;
	in_order(Tree[now].left);
	printf(" %d", now);
	in_order(Tree[now].right);
}

void post_order(int now) {
	if (now == -1) return;
	post_order(Tree[now].left);
	post_order(Tree[now].right);
	printf(" %d", now);
}

int main()
{
	int n;
	while (~scanf("%d", &n)) {
		init(n);
		build(n);
		int root;
		for (int i = 0; i < n; i ++) {
			if (Tree[i].parent == -1)
				root = i;
		}
		puts("Preorder");
		pre_order(root);
		puts("");
		puts("Inorder");
		in_order(root);
		puts("");
		puts("Postorder");
		post_order(root);
		puts("");
	}
	return 0;
}
