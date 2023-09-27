#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

struct Node{
	int key;
	Node *parent,*left,*right;
};
int n;
Node *NIL,*root;
void insert(int k){
	Node *x = root;
	Node *y = NIL;
	Node *z;
	z = new Node();
	z->key = k;
	z->left = z->right = NIL;
	while(x != NIL){
		y = x;
		if(z->key > x->key){
			x = x->right;
		}else{
			x = x->left;
		}
	}
	z->parent = y;
	if(y == NIL){
		root = z;
	}else{
		if(z->key > y->key){
			y->right = z;
		}else{
			y->left = z;
		}
	}
}

void inorder(Node *a){
	if(a == NIL) return;
	inorder(a->left);
	cout << " " << a->key; 
	inorder(a->right);
}

void preorder(Node *a){
	if(a == NIL) return;
	cout << " " << a->key; 
	preorder(a->left);
	preorder(a->right);	
}

int main(){
	cin >> n;
	int key;
	char s[10];
	for(int i = 0;i < n;i++){
		scanf("%s",s);
		if(s[0] == 'i'){
			cin >> key;
			insert(key);
		}else if(s[0] == 'p'){
			inorder(root);
			cout << endl;
			preorder(root);
			cout << endl;
		}
	}
	return 0;
}