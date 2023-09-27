#include <bits/stdc++.h>
#define PI 3.14159265359
#define NIL (-1)
using namespace std;
const int64_t MOD = 1e9 + 7;

const int MAX = 10000;
struct Node { int p, l, r; };
vector<struct Node> T(MAX);
int n;

void preParse(int u) {
	if (u == NIL) return;
	cout << ' ' << u;
	preParse(T.at(u).l);
	preParse(T.at(u).r);
}

void inParse(int u) {
	if (u == NIL) return;
	inParse(T.at(u).l);
	cout << ' ' << u;
	inParse(T.at(u).r);
}

void postParse(int u) {
	if (u == NIL) return;
	postParse(T.at(u).l);
	postParse(T.at(u).r);
	cout << ' ' << u;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) T.at(i).p = NIL;
	
	int v, l, r;
	for (int i = 0; i < n; i++) {
		cin >> v >> l >> r;
		T.at(v).l = l;
		T.at(v).r = r;
		if (l != NIL) T.at(l).p = v;
		if (r != NIL) T.at(r).p = v;
	}

	int root;
	for (int i = 0; i < n; i++) {
		if (T.at(i).p == NIL) root = i;
	}

	cout << "Preorder" << endl;
	preParse(root);
	cout << endl;
	cout << "Inorder" << endl;
	inParse(root);
	cout << endl;
	cout << "Postorder" << endl;
	postParse(root);
	cout << endl;
}
