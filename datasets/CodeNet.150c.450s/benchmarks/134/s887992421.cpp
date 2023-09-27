#include <iostream>
using namespace std;
#define NIL -1
const int maxn = 30;
struct Node{int p,l,r;};
Node T[maxn];
int n;
void preParse(int u){
	if(u==NIL) return; 
	printf(" %d",u);
	preParse(T[u].l);
	preParse(T[u].r);
}
void inParse(int u){
	if(u==NIL) return;
	inParse(T[u].l);
	printf(" %d",u);
	inParse(T[u].r);
}
void postParse(int u){
	if(u==NIL) return;
	postParse(T[u].l);
	postParse(T[u].r);
	printf(" %d",u);
}
void init(){
	for(int i=0;i<n;i++)
		T[i].p=T[i].l=T[i].r=NIL;
}
int main() {
	int m,k,c,i,prt,left,right;
	scanf("%d",&n);
	m = n;
	init();
	while(n--){
		scanf("%d %d %d",&prt,&left,&right);
		T[prt].l = left;
		T[prt].r = right;
		if(left!=NIL) T[left].p = prt;
		if(right!=NIL) T[right].p = prt;
	}
	i=0;
	while(T[i].p!=NIL)
		i++;
	printf("Preorder\n");
	preParse(i);
	printf("\nInorder\n");
	inParse(i);
	printf("\nPostorder\n");
	postParse(i);
	printf("\n");
	return 0;
}
