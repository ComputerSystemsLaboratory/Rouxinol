#include <iostream>
#include <vector>
#include <memory>

using namespace std;

enum {
	NA = -1,
};


struct node {
	int id;
	int l;
	int r;
	node() :id(NA), l(NA), r(NA) {
	}
};


inline void show_preorder(vector<node> v, int node_id) {
	cout << " " << v[node_id].id;
	if(v[node_id].l != NA)	show_preorder(v, v[node_id].l);
	if(v[node_id].r != NA)  show_preorder(v, v[node_id].r);
}

inline void show_inorder(vector<node> v, int node_id) {
	if (v[node_id].l != NA)	show_inorder(v, v[node_id].l);
	cout << " " << v[node_id].id;
	if (v[node_id].r != NA)  show_inorder(v, v[node_id].r);
}

inline void show_postorder(vector<node> v, int node_id) {
	if (v[node_id].l != NA)  show_postorder(v, v[node_id].l);
	if (v[node_id].r != NA)  show_postorder(v, v[node_id].r);
	cout << " " << v[node_id].id;
}

int main() {
	const int N_MAX = 25;
	int n;
	cin >> n;

	vector<node> nodes;
	nodes.resize(n);

	vector<bool> is_root_flags;
	is_root_flags.resize(n, true);

	for (int i = 0; i < n; i++) {
		int id, l, r;
		cin >> id >> l >> r;
		nodes[id].id = id;
		nodes[id].r = r;
		nodes[id].l = l;
		if(l != NA)is_root_flags[l] = false;
		if(r != NA)is_root_flags[r] = false;
	}

	int root_id = NA;
	root_id = 0; 
	for (int i = 0; i < n; i++) {
		if (is_root_flags[i])
			root_id = i;
	}

	cout << "Preorder\n";
	show_preorder(nodes, root_id);
	cout << "\n";

	cout << "Inorder\n";
	show_inorder(nodes, root_id);
	cout << "\n";

	cout << "Postorder\n";
	show_postorder(nodes, root_id);
	cout << "\n";

	return 0;
}