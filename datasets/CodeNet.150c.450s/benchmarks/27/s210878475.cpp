#include <cstdio>
#include <vector>
using namespace std;

typedef struct Node {
	int v;
	Node *l, *r;
	Node() {
		this->v = 0;
		this->l = NULL;
		this->r = NULL;
	}
} Node;

void InsertNode(Node*& root, const int& v)
{
	if(root == NULL) {
		root = new Node;
		root->v = v;
		return;
	}
	if(v <= root->v) {
		InsertNode(root->l, v);
	} else {
		InsertNode(root->r, v);
	}
}

void PreOrder(Node* root)
{
	if(root == NULL) {
		return;
	}
	printf(" %d",root->v);
	PreOrder(root->l);
	PreOrder(root->r);
}

void InOrder(Node* root)
{
	if(root == NULL) {
		return;
	}
	InOrder(root->l);
	printf(" %d",root->v);
	InOrder(root->r);
}

int main()
{
	int T; scanf("%d",&T);
	Node* root = NULL;
	while(T--) {
		char s[7]; scanf("%s",s);
		if(s[0] == 'i') {
			int x; scanf("%d",&x);
			InsertNode(root, x);
		} else {
			InOrder(root);
			putchar('\n');
			PreOrder(root);
			putchar('\n');
		}
	}
	return 0;
}

