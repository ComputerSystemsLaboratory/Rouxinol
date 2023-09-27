#include<iostream>

#define NIL -2000000001

using namespace std;

struct Node {
	int key, p_key, l_key, r_key;
};


int main() {
	int n, num;
	cin >> n;
	Node nodes[270];
	for (int i = 1;i < n+1;++i) {

		cin >> num;
		nodes[i].key = num;
		nodes[i].r_key = NIL;
		nodes[i].l_key = NIL;
		if (i == 1) {
			nodes[i].p_key = NIL;
			nodes[i].r_key = NIL;
			nodes[i].l_key = NIL;
			continue;
		}

		nodes[i].p_key = nodes[i / 2].key;
		if (i % 2 == 0) {
			nodes[i / 2].l_key = nodes[i].key;
		}
		else {
			nodes[i / 2].r_key = nodes[i].key;
		}
		

	}
	for (int i = 1;i < n + 1;++i) {
		cout << "node " << i << ": key = " << nodes[i].key << ", ";
		if (nodes[i].p_key != NIL){
			cout << "parent key = " << nodes[i].p_key << ", ";
		}
		if (nodes[i].l_key != NIL) {
			cout << "left key = " << nodes[i].l_key << ", ";
		}
		if (nodes[i].r_key != NIL) {
			cout << "right key = " << nodes[i].r_key << ", ";
		}
		cout << endl;
	}


	return 0;
}
