/*
 * ALDS1_7_C.cpp
 *
 *  Created on: May 1, 2018
 *      Author: 13743
 */

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct Node {
	int pa, lc, rc;
};

Node T[25];
vector<int> pre;
vector<int> in;
vector<int> post;

void preorder(int u) {
	if(u == -1) return;
	pre.push_back(u);
	preorder(T[u].lc);
	preorder(T[u].rc);
}

void inorder(int u) {
	if(u == -1) return;
	inorder(T[u].lc);
	in.push_back(u);
	inorder(T[u].rc);
}

void postorder(int u) {
	if(u == -1) return;
	postorder(T[u].lc);
	postorder(T[u].rc);
	post.push_back(u);
}

int main() {
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		T[i].pa = -1;
	}
	for(int i=0; i<n; i++) {
		int id, l, r;
		cin >> id >> l >> r;
		T[id].lc = l;
		T[id].rc = r;
		if(l != -1) {
			T[l].pa = id;
		}
		if(r != -1) {
			T[r].pa = id;
		}
	}
	int root;
	for(int i=0; i<n; i++) {
		if(T[i].pa == -1) root = i;
	}
	preorder(root);
	inorder(root);
	postorder(root);

	cout << "Preorder" << endl;
	for(int i=0; i<n; i++) {
		cout << " " << pre[i];
	}
	cout << endl;
	cout << "Inorder" << endl;
	for(int i=0; i<n; i++) {
		cout << " " << in[i];
	}
	cout << endl;
	cout << "Postorder" << endl;
	for(int i=0; i<n; i++) {
		cout << " " << post[i];
	}
	cout << endl;
}

