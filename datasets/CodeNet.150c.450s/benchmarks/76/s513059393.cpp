#include <cstdio>
#include <vector>
using namespace std;

typedef struct Node {
	int v;
	Node *l, *r;
	Node *p;
	Node() {
		this->v = 0;
		this->l = NULL;
		this->r = NULL;
		this->p = NULL;
	}
} Node, *pNode;

pNode root;

void InsertNode(const int& v);
pNode FindNode(pNode root, const int&v);

void PreOrder(pNode root);
void InOrder(pNode root);

int main()
{
	root = NULL;
	int T; scanf("%d",&T);
	while(T--) {
		char s[7]; scanf("%s",s);
		if(s[0] == 'p') {
			InOrder(root);
			putchar('\n');
			PreOrder(root);
			putchar('\n');
			continue;
		}
		int v; scanf("%d",&v);
		if(s[0] == 'i') {
			InsertNode(v);
		} else if(s[0] == 'f') {
			printf("%s\n",FindNode(root, v) != NULL?"yes":"no");
		} else if(s[0] == 'd') {
			//DeleteNode(FindNode(&root, v));
		}
	}
	return 0;
}

void PreOrder(pNode root)
{
	if(root == NULL) {
		return;
	}
	printf(" %d",root->v);
	PreOrder(root->l);
	PreOrder(root->r);
}

void InOrder(pNode root)
{
	if(root == NULL) {
		return;
	}
	InOrder(root->l);
	printf(" %d",root->v);
	InOrder(root->r);
}

void InsertNode(const int& v)
{
	pNode p = NULL, q = root;
	while(q != NULL) {
		p = q;
		if(v < q->v) {
			q = q->l;
		} else {
			q = q->r;
		}
	}
	pNode t = new Node;
	t->v = v;
	t->p = p;
	if(root == NULL) {
		root = t;
	} else {
		if(v < p->v) {
			p->l = t;
		} else {
			p->r = t;
		}
	}
}

pNode FindNode(pNode root, const int&v)
{
	while(root != NULL && root->v != v) {
		if(v < root->v) {
			root = root->l;
		} else {
			root = root->r;
		}
	}
	return root;
}

