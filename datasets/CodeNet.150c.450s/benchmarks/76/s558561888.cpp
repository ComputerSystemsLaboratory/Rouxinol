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
#define N 500001

//struct Node{
//	int val;
//	Node *p, *l, *r;
//};

struct Node {
	int val;
	Node *p, *l, *r;
	Node(int v) :val(v), p(NULL), l(NULL), r(NULL){}
	Node() :val(0), p(NULL), l(NULL), r(NULL){}
};

Node T[N];
int D[N], H[N];

Node *root;

void insert(int k){
	Node *y = NULL;
	Node *x = root;
	Node *z = new Node(k);

	while (x != NULL && x->val != k){
		y = x;
		if (k > x->val) x = x->r;
		else x = x->l;
	}
	z->p = y;
	if (y == NULL) root = z;
	else{
		if (k < y->val) y->l = z;
		else y->r = z;
	}
}

Node *find(int val){
	Node *p = root;
	while (p != NULL && p->val != val) {
		if (val > p->val) p = p->r;
		else p = p->l;
	}
	return p;
}

void ino(Node *p){
	if (p == NULL) return;
	ino(p->l);
	printf(" %d", p->val);
	ino(p->r);
}

void preo(Node *p){
	if (p == NULL) return;
	printf(" %d", p->val);
	preo(p->l);
	preo(p->r);
}


int main(){
	int n; cin >> n;

	int val;
	string com;
	for (int i = 0; i < n; ++i) {
		cin >> com;
		if (com[0] == 'f'){
			cin >> val;
			Node *p = find(val);
			cout << ((p == NULL) ? "no" : "yes") << endl;
		}
		else if (com[0] == 'i'){
			cin >> val;
			insert(val);
		}
		else if (com[0] == 'p'){
			ino(root); cout << "\n";
			preo(root); cout << "\n";
		}
	}

	return 0;
}

//Yes
//No
//1 12 17 20 25 30 88
//30 12 1 20 17 25 88