#include <iostream>
#include <vector>
using namespace std;

class BinaryNode{
public:
	int left, right;
};

class BinaryTree{
public:
	int num;
	vector<BinaryNode> tree;
	vector<int> parent;
	
	BinaryTree(int _num){
		num = _num;
		tree.resize(num);
		parent.resize(num);
		for(int i=0;i<num;++i)parent[i] = -1;
	}
	
	int top(){
		for(int i=0;i<num;++i){
			if(parent[i] == -1){
				return i;
			}
		}
	}
	
	void preorder(int n){
		BinaryNode cur = tree[n];
		cout<<" "<<n;
		if(cur.left != -1){
			preorder(cur.left);
		}
		if(cur.right != -1){
			preorder(cur.right);
		}
	}
	void inorder(int n){
		BinaryNode cur = tree[n];
		if(cur.left != -1){
			inorder(cur.left);
		}
		cout<<" "<<n;
		if(cur.right != -1){
			inorder(cur.right);
		}
	}
	void postorder(int n){
		BinaryNode cur = tree[n];
		if(cur.left != -1){
			postorder(cur.left);
		}
		if(cur.right != -1){
			postorder(cur.right);
		}
		cout<<" "<<n;
	}
};


int main() {
	int n, id, left, right, top=-1;
	cin>>n;
	BinaryTree bTree = BinaryTree(n);
	for(int i=0;i<n;++i){
		cin>>id>>left>>right;
		
		bTree.tree[id].left = left;
		bTree.tree[id].right = right;
		if(left+1)bTree.parent[left] = id;
		if(right+1)bTree.parent[right] = id;
	}
	
	top = bTree.top();
	
	cout<<"Preorder"<<endl;
	bTree.preorder(top);
	cout<<endl;
	cout<<"Inorder"<<endl;
	bTree.inorder(top);
	cout<<endl;
	cout<<"Postorder"<<endl;
	bTree.postorder(top);
	cout<<endl;
	return 0;
}