#include<iostream>

using namespace std;

static const int MAX = 25;
static const int nil = -1;

struct Node { int l, p, r; };

int n;
Node A[MAX];

void Pre(int tmp) {
	if (tmp == nil) {
		return;
	}
	cout << " " << tmp;
	Pre(A[tmp].l);
	Pre(A[tmp].r);
}

void In(int tmp) {
	if (tmp == nil) {
		return;
	}
	In(A[tmp].l);
	cout << " " << tmp;
	In(A[tmp].r);
}

void Post(int tmp) {
	if (tmp == nil) {
		return;
	}
	Post(A[tmp].l);
	Post(A[tmp].r);
	cout << " " << tmp;
}

int main() {
	int l, r, id;
	cin >> n;
	for (int i = 0; i < n; i++) {			//初期化
		A[i].l = nil;
		A[i].p = nil;
		A[i].r = nil;
	}

	for (int i = 0; i < n; i++) {			//データを繋げる
		cin >> id >> l >> r;
		A[id].l = l;
		A[id].r = r;
		if (A[id].l != nil) {
			A[l].p = id;
		}
		if (A[id].r != nil) {
			A[r].p = id;
		}
	}

	for (int i = 0; i < n; i++) {
		if (A[i].p == nil) {
			cout << "Preorder" << endl;
			Pre(i);
			cout << endl;
			cout << "Inorder" << endl;
			In(i);
			cout << endl;
			cout << "Postorder" << endl;
			Post(i);
			cout << endl;

		}
	}
	return 0;
}
