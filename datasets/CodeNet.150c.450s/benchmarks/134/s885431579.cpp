#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
using namespace std;

struct Node {
	int left;
	int right;
};

void solve(Node node[], int i,vector<int> order[]) {

	order[0].push_back(i);

	if (node[i].left != -1)solve(node, node[i].left, order);
	order[1].push_back(i);

	if (node[i].right != -1)solve(node, node[i].right, order);
	order[2].push_back(i);
}

int main() {
	int n;
	Node node[25];
	bool table[25] = { false };
	vector<int> order[3];
	string str[3] = { "Preorder","Inorder","Postorder" };

	

	cin >> n;
	for (int i = 0; i < n; i++) {
		int id, l, r;
		cin >> id >> l >> r;
		node[id].left = l;
		node[id].right = r;
		
		if (l != -1)table[l] = true;
		if (r != -1)table[r] = true;
	}

	int root;
	for (int i = 0; i < n; i++) {
		if (table[i] == false) {
			root = i;
			break;
		}
	}

	solve(node, root,order);

	for (int i = 0; i < 3; i++) {
		cout << str[i] << endl;
		for (int j = 0; j < n; j++) {
			cout << " " << (order[i])[j];
		}
		cout << endl;
	}

	return 0;
}