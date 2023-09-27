#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define rrep(ri,n) for(int ri = (int)(n-1); ri >= 0; ri--)
#define rep2(i,x,n) for(int i = (int)(x); i < (int)(n); i++)
#define repit(itr,x) for(auto itr = x.begin(); itr != x.end(); itr++)
#define rrepit(ritr,x) for(auto ritr = x.rbegin(); ritr != x.rend(); ritr++)
#define ALL(n) begin(n), end(n)
using ll = long long;
using namespace std;

struct node{
	int data;
	node *l, *r;
};

node *new_node(int in){
	node *ret = (node *)malloc(sizeof(node));
	ret->data = in;
	ret->l = NULL;
	ret->r = NULL;
	return ret;
}

void insert_node(node **root, int in){
	node *add = new_node(in);
	if(*root == NULL){
		*root = add;
		return ;
	}
	node *p = *root, *pp = NULL;
	while(p != NULL){
		pp = p;
		if(add->data < p->data) p = p->l;
		else p = p->r;
	}
	if(add->data < pp->data) pp->l = add;
	else pp->r = add;
	return ;
}

void print_n(node *root, bool mode){
	if(mode == true) cout << " " << root->data;
	if(root->l != NULL) print_n(root->l, mode);
	if(mode == false) cout << " " << root->data;
	if(root->r != NULL) print_n(root->r, mode);
}

void print_node(node *root){
	print_n(root, false);
	cout << endl;
	print_n(root, true);
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	node *root = NULL;
	rep(i, n){
		string s;
		cin >> s;
		if(s == "print"){
			print_node(root);
		}else{
			int in;
			cin >> in;
			insert_node(&root, in);
		}
	}
	return 0;
}
