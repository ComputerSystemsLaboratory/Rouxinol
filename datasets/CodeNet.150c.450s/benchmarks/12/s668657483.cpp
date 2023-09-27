#include <bits/stdc++.h>
using namespace std;
#define r(i,n) for(auto i=0;i<n;i++)
#define s(c) static_cast<int>((c).size())

struct Node{
	int key;
	Node *l;
	Node *r;
	Node *p;
};
Node *nil = new Node{INT_MAX};

Node* get(Node *node, int i){
	stack<bool> s;
	do{
		s.push(i%2 ? true : false);
	}while((i/=2) != 0);
	s.pop();

	Node *x = node;
	while(!s.empty()){
		x = s.top() ? x->r : x->l;
		s.pop();
	}
	return x;
}

int main(){
	int m;
	cin >> m;

	Node *root = new Node{INT_MAX, nil, nil, nil};
	int i, key;
	for(i = 1; i <= m; i++){
		cin >> key;
		if(i == 1){
			root->key = key;
			continue;
		}

		Node *x = get(root, i/2);

		Node *node = new Node{key, nil, nil, x};
		if(i%2){
			x->r = node;
		}else{
			x->l = node;
		}
	}

	for(i = 1; i <= m; i++){
		Node *node = get(root, i);
		printf("node %d: key = %d, ", i, node->key);
		if(node->p != nil)
			printf("parent key = %d, ", node->p->key);
		if(node->l != nil)
			printf("left key = %d, ", node->l->key);
		if(node->r != nil)
			printf("right key = %d, ", node->r->key);
		printf("\n");
	}

	return 0;
}

