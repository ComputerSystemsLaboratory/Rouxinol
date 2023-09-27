#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
#define MAXN 500000
struct node {
	int key;
	node *ch[2];
};
node tree[MAXN+5];
node *Root, *NIL, *ncnt;
void Init(){
	NIL = &tree[0];
	ncnt = &tree[1];
	Root = NIL;
}
inline node *NewNode(int val) {
	node * p = ++ncnt;
	p->key = val;
	p->ch[0] = p->ch[1] = NIL;
	return p;
}
void Insert(node * &rt, int val) {
	if(rt == NIL) {
		rt = NewNode(val);
		return ;
	}
	int d = (val >= rt->key);
	Insert(rt->ch[d], val);
}
void PreOrder(node *rt) {
	if(rt == NIL) return;
	printf(" %d", rt->key);
	PreOrder(rt->ch[0]);
	PreOrder(rt->ch[1]);
}
void InOrder(node *rt) {
	if(rt == NIL) return;
	InOrder(rt->ch[0]);
	printf(" %d", rt->key);	
	InOrder(rt->ch[1]);
}
int main() {
	int n, x;
	char op[100];
	Init();
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", op);
		if(op[0] == 'i') {
			scanf("%d", &x);
			Insert(Root, x);
		}
		else {
			InOrder(Root);
			puts("");
			PreOrder(Root);
			puts("");			
		}
	}
	return 0;
}