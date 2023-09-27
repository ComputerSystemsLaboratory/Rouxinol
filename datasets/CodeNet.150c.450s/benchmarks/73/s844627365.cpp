#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct node {
	int begin;
	int end;
	int sum = 0;
	node* child1;
	node* child2;
	node(int begin, int end) {
		this->begin = begin;
		this->end = end;
	}
};

node* root;

node* init(int begin, int end) {
	node* parent = new node(begin, end);
	if (begin != end) {
		int mid = (begin + end) / 2;
		parent->child1 = init(begin, mid);
		parent->child2 = init(mid + 1, end);
	}
	return parent;
}

void add(int x, int y) {
	node* nod = root;
	while (nod->begin != nod->end) {
		nod->sum += y;
		if (x <= nod->child1->end)
			nod = nod->child1;
		else
			nod = nod->child2;
	}
	nod->sum += y;
}

int getSum(node* nod, int x, int y) {
	if (nod->end < x)
		return 0;
	if (nod->begin > y)
		return 0;
	if (nod->begin == x && y == nod->end)
		return nod->sum;
	return getSum(nod->child1, x, min(y,nod->child1->end)) + getSum(nod->child2, max(nod->child2->begin,x), y);	
}

int main() {
	int n, q;
	cin >> n >> q;
	root = init(1, n);
	for (int i = 0; i < q; ++i) {
		int com, x, y;
		cin >> com >> x >> y;
		if (com == 0)
			add(x, y);
		else
			cout << getSum(root,x, y) << endl;
	}
}