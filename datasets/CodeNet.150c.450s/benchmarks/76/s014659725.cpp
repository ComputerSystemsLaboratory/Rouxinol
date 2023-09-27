#include<iostream>
#include <vector>
#include <string>
using namespace std;
const int NIL = -2;
class bintree{
public:
	int left;
	int right;
	int parent;
	int key;
	bintree():left(NIL),right(NIL),parent(NIL),key(0){
	}
};

void PrintID(int key) {
	cout << " " << key;
}
void TraversePrint_Preorder(vector<bintree> & T,int id) {
	bintree & t = T[id];
	PrintID(t.key);
	if (t.left != NIL) {
		TraversePrint_Preorder(T,t.left);
	}
	if (t.right != NIL) {
		TraversePrint_Preorder(T,t.right);
	}
}
void TraversePrint_Inorder(vector<bintree> & T,int id) {
	bintree & t = T[id];
	if (t.left != NIL) {
		TraversePrint_Inorder(T,t.left);
	}
	PrintID(t.key);
	if (t.right != NIL) {
		TraversePrint_Inorder(T,t.right);
	}
}
void TraversePrint_Postorder(vector<bintree> & T,int id) {
	bintree & t = T[id];
	if (t.left != NIL) {
		TraversePrint_Postorder(T,t.left);
	}
	if (t.right != NIL) {
		TraversePrint_Postorder(T,t.right);
	}
	PrintID(t.key);
}
int TraverseSearch_Inorder(vector<bintree> & T,int id,int key) {
	bintree & t = T[id];
	if (t.key == key){
		return	1;
	} else if (key < t.key) {
		if (t.left != NIL) {
			return TraverseSearch_Inorder(T,t.left,key);
		}
	} else {
		if (t.right != NIL) {
			return TraverseSearch_Inorder(T,t.right,key);
		}
	}
	return 0;
}

void TreeInsert(vector<bintree> & T,int &top,int z){
	int y = NIL;
	int x = top;
	while (x != NIL){
		y = x;
		if (T[z].key < T[x].key) {
			x = T[x].left;
		}
		else {
			x = T[x].right;
		}
	}
	T[z].parent = y;
	if (y == NIL) {
		top = z;
	} else if (T[z].key < T[y].key) {
		T[y].left = z;
	} else {
		T[y].right = z;
	}
}
int main(){
	vector<bintree> T;
	int n;
	cin >> n;
	T.resize(n);
	int top = NIL;
	for(int z=0;z<n;++z) {
		string op;
		cin >> op;
		if (op == "insert") {
			cin >> T[z].key;
			TreeInsert(T,top,z);
		} else if (op == "find") {
			int k;
			cin >> k;
			int find = TraverseSearch_Inorder(T,top,k);
			const char *findmsg[] = {"no","yes"};
			cout << findmsg[find] << std::endl;
		} else if (op == "print") {
			TraversePrint_Inorder(T,top);
			cout << std::endl;
			TraversePrint_Preorder(T,top);
			cout << std::endl;
		}
	}
}