#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

class Node{
public:
	int key;
	Node* right;
	Node* left;
	Node* parent;
};
Node* root;
Node* NIL;
void insert(int k){
	Node* y = NIL; // x ??????
	Node* x = root;
	Node* z;
	z = (Node*)malloc(sizeof(Node));
	z->key = k;
	z->left = NIL;
	z->right = NIL;
	while (x != NIL){
		y = x; // ???????¨????
		if (z->key < x->key) x = x->left; // ?????????????§????
		else x = x->right; // ?????????????§????
	}
	z->parent = y;
	if (y == NIL) root = z; // T ???????????´???
	else {
		if (z->key < y->key) y->left = z; // z ??? y ?????????????????????
		else y->right = z; // z ??? y ?????????????????????
	}
}
bool find(Node* z, int k){
	if (z == NIL) return false;
	if (z->key == k) return true;
	else if (z->key < k) return find(z->right, k);
	else if (z->key > k) return find(z->left, k);
	return false;
}
void preorder(Node* z){
	if (z == NIL) return;
	cout << ' ' << z->key ;
	if (z->left != NIL) preorder(z->left);
	if (z->right != NIL) preorder(z->right);
}
void inorder(Node* z){
	if (z == NIL) return;
	if (z->left != NIL) inorder(z->left);
	cout << ' ' << z->key;
	if (z->right != NIL) inorder(z->right);
}
int main(){
	root = NIL;
	int n; scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		char str[20]; scanf("%s", &str);
		if (strcmp(str, "insert") == 0){
			int tmp; scanf("%d", &tmp);
			insert(tmp);
		}
		else if (strcmp(str, "find") == 0){
			int tmp; scanf("%d", &tmp);
			if (find(root, tmp)) cout << "yes\n";
			else cout << "no\n";
		}
		else{
			inorder(root); cout << '\n';
			preorder(root); cout << '\n';
		}
	}

}