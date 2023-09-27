#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

struct binarytree{
	int parent, left, right;
};

int order(vector <binarytree> &node, int i, int mode){
	int e1, e2;

	if (mode==0) cout << " " << i;

	e1 = node[i].left;
	if (e1 != -1) order(node, e1, mode);
	if (mode==1) cout << " " << i;

	e2 = node[i].right;
	if (e2 != -1) order(node, e2, mode);
	if (mode==2) cout << " " << i;
	return 0;
}

int main(void){
	int n, e, tmp;
	stringstream ss;

	cin >> n;
	vector <binarytree> node(n);
	for (int i=0; i<n; i++){
		node[i].parent = -1;
		node[i].left = -1;
		node[i].right = -1;
	}

	for (int i=0; i<n; i++){
		cin >> e;

		cin >> tmp;
		node[e].left = tmp;
		if (tmp != -1) node[tmp].parent = e;

		cin >> tmp;
		node[e].right = tmp;
		if (tmp != -1) node[tmp].parent = e;
	}

	e = 0;
	tmp = node[e].parent;
	while (tmp!=-1){
		e = tmp;
		tmp = node[e].parent;
	}

	cout << "Preorder" << endl;
	order(node, e, 0);
	cout << endl;

	cout << "Inorder" << endl;
	order(node, e, 1);
	cout << endl;

	cout << "Postorder" << endl;
	order(node, e, 2);
	cout << endl;

	return 0;
}