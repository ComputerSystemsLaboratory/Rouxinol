#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>

using namespace std;
class bTree{
	int Id;
	int parent;
	int depth;
	int degree;
	int sibling;
	int hight;
	string type;
	int left, right;
public:
	bTree(){
		Id = 0, parent = -1, depth = 0, type = "", left = -1, right = -1,
			degree = 0, sibling = -1, hight = 0;
	}	
	int takeId(){ return this->Id; }
	int takeParent(){ return this->parent; }
	int takeDepth(){ return this->depth; }
	int takeDegree(){ return this->degree; }
	int takeSibling(){ return this->sibling; }
	int takeHight(){ return this->hight; }
	int takeLeft(){ return this->left; }
	int takeRight(){ return this->right; }
	string takeType(){ return this->type; }
	void setId(int a){ this->Id = a; }
	void setParent(int a){ this->parent = a; }
	void setDepth(int a){ this->depth = a; }
	void setSibling(int a){ this->sibling = a; }
	void setLeft(int a){ this->left = a; }
	void setRight(int a){ this->right = a; }
	void setHight(int a){ this->hight = a; }
	void setType(){
		if (this->parent == -1) this->type = "root";
		else if (this->left == -1 && this->right==-1) this->type = "leaf";
		else this->type = "internal node";
	}
	void setDegree(){
		if (this->left == -1 && this->right == -1) this->degree = 0;
		else if (this->left == -1 || this->right == -1) this->degree = 1;
		else this->degree = 2;
	}
};
bTree nodes[25];

void preorder(int id){
	cout << ' ' << id;
	int left = nodes[id].takeLeft();
	if(left!=-1) preorder(left);
	int right = nodes[id].takeRight();
	if (right != -1) preorder(right);
	return;
}
void inorder(int id){
	int left = nodes[id].takeLeft();
	if (left != -1) inorder(left);	
	cout << ' ' << id;
	int right = nodes[id].takeRight();
	if (right != -1) inorder(right);	
	return;
}
void postorder(int id){
	int left = nodes[id].takeLeft();
	if (left != -1) postorder(left);
	int right = nodes[id].takeRight();
	if (right != -1) postorder(right);
	cout << ' ' << id;
	return;
}
int main(){
	int n; scanf("%d",&n);
	for (int i = 0; i < n;++i){
		int id, Lchild, Rchild; scanf("%d %d %d", &id, &Lchild, &Rchild);
		nodes[id].setId(id);
		nodes[id].setLeft(Lchild);
		if (Lchild != -1) {
			nodes[Lchild].setParent(id);
		}
		nodes[id].setRight(Rchild);
		if (Rchild != -1){
			nodes[Rchild].setParent(id);
		}
	}
	int p = -1;
	for (int i = 0; i < n; ++i) if (nodes[i].takeParent() == -1){ p = i; break; }
	cout << "Preorder\n";
	preorder(p); cout << '\n';
	cout << "Inorder\n";
	inorder(p); cout << '\n';
	cout << "Postorder\n";
	postorder(p); cout << '\n';
}