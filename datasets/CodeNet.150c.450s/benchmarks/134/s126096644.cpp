#include <iostream>
using namespace std;
int P[26] = {};
int L[26] = {};
int R[26] = {};

void preorder(int root)
{
	if (root < 0) return;
	cout << " " << root;
	preorder(L[root]);
	preorder(R[root]);
}

void inorder(int root)
{
	if (root < 0) return;
	inorder(L[root]);
	cout << " " << root;
	inorder(R[root]);
}

void postorder(int root)
{
	if (root < 0) return;
	postorder(L[root]);
	postorder(R[root]);
	cout << " " << root;
}

int main()
{
	int n, p, l, r;
	cin >> n;
	
	for (int i = 0; i < 26; ++i){
		P[i] = i;
		L[i] = R[i] = -1;
	}
	
	while (n--){
		cin >> p >> l >> r;
		L[p] = l;
		R[p] = r;
		if (l != -1) P[l] = p;
		if (r != -1) P[r] = p;
	}
	int root = 0;
	while (P[root] != root) 
		root = P[root];
	
	cout << "Preorder\n";
	preorder(root);
	cout << "\nInorder\n";
	inorder(root);
	cout << "\nPostorder\n";
	postorder(root);
	cout << "\n";
	return 0;
}