#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<string>
#include<stack>
using namespace std;

struct Node{
	int key;
	Node *left,*right,*parent;
	bool visited;
};

Node *root,*NIL;

void insert(int k){
	Node *y = NIL;
	Node *x = root;
	Node *z;
	z = (Node*)malloc(sizeof(Node));
	z->key=k;
	z->left=NIL;
	z->right=NIL;
	while(x!=NIL){
		y=x;
		if(z->key < x->key){
			x=x->left;
		} else {
			x=x->right;
		}
	}
	z->parent=y;
	if(y==NIL){
		root=z;
	}else{
		if(z->key < y->key){
			y->left=z;
		}else{
			y->right=z;
		}
	}
}

Node* find(int key){
	Node *cur=root;
	while(cur!=NIL){
		if(cur->key==key) return cur;
		if(cur->key>key) cur=cur->left;
		else cur=cur->right;
	}
	return cur;
}

void resetVisitedFlag(){
	stack<Node*>st;
	st.push(root);
	while(st.size()!=0){
		Node *cur=st.top(); st.pop();
		if(cur!=NIL) {
			cur->visited=false;
			st.push(cur->left);
			st.push(cur->right);
		}
	}
}

void inOrder(){
	resetVisitedFlag();
	stack<Node*>st;
	st.push(root);
	while (st.size()!=0){
		Node* cur=st.top()->	left;
		while(cur!=NIL && !cur->visited){
			st.push(cur);
			cur=cur->left;
		}
		cur=st.top(); st.pop();
		cout << " " << cur->key;
		cur->visited=true;
		Node *right=cur->right;
		if(right!=NIL&&!right->visited){
			st.push(right);
		}
	}
	cout << endl;
}

void preOrder(){
	stack<Node*> st;
	st.push(root);
	while(st.size()!=0){
		Node *cur=st.top(); st.pop();
		if(cur!=NIL){
			cout << " " << cur->key;
			st.push(cur->right);
			st.push(cur->left);
		}
	}
	cout << endl;
}

int main(){
	int n,k;
	cin >> n;
	for(int i=0;i<n;i++){
		string cmd;
		cin >> cmd;
		if(cmd=="insert"){
			cin >> k;
			insert(k);
		} else if(cmd=="find"){
			cin >> k;
			if(find(k)!=NIL){
				cout << "yes" << endl;
			} else {
				cout << "no" << endl;
			}
		} else if (cmd=="print"){
			inOrder();
			preOrder();
		}
	}
	return 0;
}

