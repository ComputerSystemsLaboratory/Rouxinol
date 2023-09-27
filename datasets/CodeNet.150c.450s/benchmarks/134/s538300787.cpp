#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>

using namespace std;

class node{
public:
	int id;
	vector<int> children;
	int parent;
	int sibling;
	int depth;
	int height;
};

bool operator<=(node a, node b) {
	return a.id <= b.id;
}
bool operator<(node a, node b) {
	return a.id < b.id;
}

void preorder(node* nod, int index, int n) {
	cout << " " << nod[index].id;
	if (nod[index].children[0] != -1) {
		preorder(nod, nod[index].children[0], n);
	}
	if (nod[index].children[1] != -1) {
	 	preorder(nod, nod[index].children[1], n);
	}
}
void inorder(node* nod, int index, int n) {
	
	if (nod[index].children[0] != -1) {
		inorder(nod, nod[index].children[0], n);
	}
	cout << " " << nod[index].id;
	if (nod[index].children[1] != -1) {
		inorder(nod, nod[index].children[1], n);
	}
}
void postorder(node* nod, int index, int n) {

	if (nod[index].children[0] != -1) {
		postorder(nod, nod[index].children[0], n);
	}
	if (nod[index].children[1] != -1) {
		postorder(nod, nod[index].children[1], n);
	}
	cout << " " << nod[index].id;
}

int main() {
	int  n,tmp2,index_root;
	cin >> n;
	node* nod = new node[n];
	bool* root = new bool[n];
	for (int i = 0;i < n;i++) {
		cin >> nod[i].id;
		for (int j = 0;j < 2;j++) {
			cin >> tmp2;
			nod[i].children.push_back(tmp2);
		}
		root[i] = true;
	}
	sort(nod, nod + n);
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < nod[i].children.size();j++) {
			root[nod[i].children[j]] = false;
		}
	}
	for (int i = 0;i < n;i++) {
		if (root[i]) {
			index_root = i;
			break;
		}
	}
	cout << "Preorder" << endl;
	preorder(nod, index_root, n);
	cout << "\nInorder" << endl;
	inorder(nod, index_root, n);
	cout << "\nPostorder\n";
	postorder(nod, index_root, n);
	cout << "\n";


	
}




