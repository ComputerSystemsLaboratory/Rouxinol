#include <iostream>
#include <vector>
using namespace std;

int n;
int _left[25];
int _right[25];
int root_id;
vector<int> pre, in, post;

void input() {
	cin >> n;
	
	bool is_root[25];
	int i;
	for (i = 0; i < n; i++) is_root[i] = true;
	for (i = 0; i < n; i++) {
		int id;
		cin >> id;
		cin >> _left[id] >> _right[id];
		if (_left[id] >= 0) {  is_root[_left[id]] = false; }
		if (_right[id] >= 0) { is_root[_right[id]] = false; }
	}
	for (i = 0; i < n; i++) {
		if (is_root[i]) {
			root_id = i;
			break;
		}
	}
}

void dfs(int v) {
	pre.push_back(v);
	if (_left[v] != -1) dfs(_left[v]);
	in.push_back(v);
	if (_right[v] != -1) dfs(_right[v]);
	post.push_back(v);
}

int main() {
	input();
	dfs(root_id);
	
	cout << "Preorder" << endl << " ";
	for (int i = 0; i < pre.size(); i++) {
		cout << pre[i];
		if (i + 1 < pre.size()) cout << " ";
	}
	cout << endl;
	
	cout << "Inorder" << endl << " ";
	for (int i = 0; i < in.size(); i++) {
		cout << in[i];
		if (i + 1 < in.size()) cout << " ";
	}
	cout << endl;
	
	cout << "Postorder" << endl << " ";
	for (int i = 0; i < post.size(); i++) {
		cout << post[i];
		if (i + 1 < post.size()) cout << " ";
	}
	cout << endl;
	return 0;
}