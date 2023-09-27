#include <cstdio>
#include <cstdlib>
using namespace std;
char s[10];
struct node {
	int key;
	node *p,*left,*right;
};
node *NIL,*root=NIL;
void ins (int key) {
	node *p=NIL,*cur=root,*n=(node *)malloc(sizeof(node));
	n->key=key;
	n->left=NIL;
	n->right=NIL;
	while (cur!=NIL) {
		p=cur;
		if (key<cur->key) cur=cur->left;
		else cur=cur->right;
	}
	n->p=p;
	if (p==NIL) root=n;
	else if (key<p->key) p->left=n;
	else p->right=n;
}
void preOrder (node *u) {
	if (u==NIL) return;
	printf (" %d",u->key);
	preOrder (u->left);
	preOrder (u->right);
}
void inOrder (node *u) {
	if (u==NIL) return;
	inOrder (u->left);
	printf (" %d",u->key);
	inOrder (u->right);
}
int main () {
	int m;
	scanf ("%d",&m);
	for (int i=0;i<m;i++) {
		scanf ("%s",s);
		if (s[0]=='i') {
			int key;
			scanf ("%d",&key);
			ins (key);
		} else {
			inOrder (root);
			printf ("\n");
			preOrder (root);
			printf ("\n");
		}
	}
    return 0;
}
