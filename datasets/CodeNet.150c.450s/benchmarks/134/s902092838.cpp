#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

using namespace std;

#define NIL -1
#define N 100005

//struct Node{
//	int val;
//	Node *p, *l, *r;
//};

struct Node {
	int p, l, r;
	Node():p(NIL), l(NIL), r(NIL){}
};

Node T[N];
int D[N], H[N];

void preo(int u){
	if (u == NIL) return;
	printf(" %d", u);
	preo(T[u].l);
	preo(T[u].r);
}

void ino(int u){
	if (u == NIL) return;
	ino(T[u].l);
	printf(" %d", u);
	ino(T[u].r);
}

void posto(int u){
	if (u == NIL) return;
	posto(T[u].l);
	posto(T[u].r);
	printf(" %d", u);
}

int main(){
	int n; cin >> n;

	for (int i = 0; i < n; ++i){
		int u, l, r; cin >> u >> l >> r;
		T[u].l = l;
		T[u].r = r;
		if (l != NIL) T[l].p = u;
		if (r != NIL) T[r].p = u;
	}

	int root;
	for (int i = 0; i < n; ++i) if (T[i].p == NIL) root = i;

	printf("Preorder\n");
	preo(root);
	printf("\n");
	printf("Inorder\n");
	ino(root);
	printf("\n");
	printf("Postorder\n");
	posto(root);
	printf("\n");

	return 0;
}
//Sample Output 1
//Preorder
//0 1 2 3 4 5 6 7 8
//Inorder
//2 1 3 0 6 5 7 4 8
//Postorder
//2 3 1 6 7 5 8 4 0