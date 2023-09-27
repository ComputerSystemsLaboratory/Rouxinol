#include <iostream>
using namespace std;

#define MAX 25
#define NIL -1

typedef struct {
	int parent;
	int left;
	int right;
} Node, Tree;

void Preorder(Tree T[], int rootId)
{
	int id = rootId;
	
	if (id == NIL)
		return;
		
	cout << " " << id;
	Preorder(T, T[id].left);
	Preorder(T, T[id].right);
}

void Inorder(Tree T[], int rootId)
{
	int id = rootId;
	
	if (id == NIL)
		return;
	
	Inorder(T, T[id].left);
	cout << " " << id;
	Inorder(T, T[id].right);
}

void Postorder(Tree T[], int rootId)
{
	int id = rootId;
	
	if (id == NIL)
		return;
	
	Postorder(T, T[id].left);
	Postorder(T, T[id].right);
	cout << " " << id;
}

int main(void)
{
	Tree T[MAX];
	int n;
	int rootId;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		T[i].parent = NIL;
	} 
	for (int i = 0; i < n; i++) {
		int id, l, r;
		
		cin >> id >> l >> r;
		T[id].left = l;
		T[id].right = r;
		
		T[l].parent = id;
		T[r].parent = id;
	}
	for (int i = 0; i < n; i++) {
		if (T[i].parent == NIL) {
			rootId = i;
			break;
		}
	}
	cout << "Preorder" << '\n';
	Preorder(T, rootId);
	cout << '\n';
	cout << "Inorder" << '\n';
	Inorder(T, rootId);
	cout << '\n';
	cout << "Postorder" << '\n';
	Postorder(T, rootId);
	cout << '\n';
	
	return 0;
}
