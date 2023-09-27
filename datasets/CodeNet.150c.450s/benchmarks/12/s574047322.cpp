#include<iostream>
#include<cmath>
using namespace std;
#define NIL -2
#define MAX 100000

struct Node {
	int key;
	int p, l, r;
};


int main() {
	int n;
	cin >> n;

	Node A[MAX];

	//初期化
	for (int m =1;m<= n;m++) {
		A[m].p = NIL;
		A[m].r = NIL;
		A[m].l = NIL;
		A[m].key = NIL;
	}
	//keyをいれる
	int a;
	for (int i = 1; i<=n;i++) {
		cin >> a;
		A[i].key = a;
	}
	//親
	for (int i = 1;i<=n;i++) {
		int b = floor(i / 2);
		if (i == 1) A[i].p = NIL;
		else A[i].p = A[b].key;
	}
	//右の子,左の子
	for (int j = 1; j <= (n / 2);) {
		int c = 2 * j;
		A[j].l = A[c].key;
			int d = 2 * j+1;
			if(d <= n) A[j].r = A[d].key;
		j++;
	}


	for (int k = 1; k<= n;k++) {
		cout << "node " << k << ": " << "key = " << A[k].key << ", ";
		if (int(A[k].p) != NIL) cout << "parent key = " << A[k].p << ", ";
		if (int(A[k].l) != NIL) cout << "left key = " << A[k].l << ", ";
		if (int (A[k].r) != NIL) cout << "right key = " << A[k].r << ", ";
		cout << "\n";
	}
	return 0;
}

