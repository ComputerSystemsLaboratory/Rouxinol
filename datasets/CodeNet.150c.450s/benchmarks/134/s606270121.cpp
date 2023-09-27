#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MAX 26
#define NIL -1

struct Node {
	int p, l, r; //??????????????????
};
struct Node T[MAX];

//???????????????
void pre(int id) {
	if (id == NIL)return;
	cout << " " << id;
	pre(T[id].l);
	pre(T[id].r);
}

//???????????????
void in(int id) {
	if (id == NIL)return;
	in(T[id].l);
	cout << " " << id;
	in(T[id].r);
}

//???????????????
void post(int id) {
	if (id == NIL)return;
	post(T[id].l);
	post(T[id].r);
	cout << " " << id;
}


int main() {
	int n; cin >> n;

	//?????????
	for (int i = 0; i < n; i++) {
		T[i].p = T[i].l = T[i].r = -1;
	}

	for (int i = 0; i < n; i++) {
		int id, l, r; cin >> id >> l >> r;
		T[id].l = l;
		T[id].r = r;
		if (l != NIL)T[l].p = id;
		if (r != NIL)T[r].p = id;
	}

	//??????????????????
	int root;
	for (int id = 0; id < n; id++) {
		if (T[id].p == NIL) { root = id; }
	}

	cout << "Preorder" << endl;
	pre(root);
	cout << endl;

	cout << "Inorder" << endl;
	in(root);
	cout << endl;

	cout << "Postorder" << endl;
	post(root);
	cout << endl;

	return 0;
}