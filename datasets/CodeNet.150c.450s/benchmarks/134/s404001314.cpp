#include <bits/stdc++.h>
#define MAX_N 100000
using namespace std;

int n;
int parent[MAX_N];
pair<int, int> child[MAX_N];

void Preorder(int c) {
	if (c == -1) return;
	cout << ' ' << c;
	Preorder(child[c].first);
	Preorder(child[c].second);
}

void Inorder(int c) {
	if (c == -1) return;
	Inorder(child[c].first);
	cout << ' ' << c;
	Inorder(child[c].second);
}

void Postorder(int c) {
	if (c == -1) return;
	Postorder(child[c].first);
	Postorder(child[c].second);
	cout << ' ' << c;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		parent[i] = -1;

	for (int i = 0, id; i < n; i++) {
		cin >> id;
		cin >> child[id].first >> child[id].second;
		if (child[id].first != -1) parent[child[id].first] = id;
		if (child[id].second != -1) parent[child[id].second] = id;
	}

	int rt;
	for (int i = 0; i < n; i++) {
		if (parent[i] == -1) {
			rt = i;
			break;
		}
	}
	cout << "Preorder" << endl;
	Preorder(rt);
	cout << endl;

	cout << "Inorder" << endl;
	Inorder(rt);
	cout << endl;

	cout << "Postorder" << endl;
	Postorder(rt);
	cout << endl;
	return 0;
}