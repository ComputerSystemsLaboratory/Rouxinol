#include <iostream>
#include <stdlib.h>

using namespace std;

class node{
public:
	int key;
	node *parent;
	node *right;
	node *left;
	node(){
		this->key = 0;
		this->parent = NULL;
		this->right = NULL;
		this->left = NULL;
	}
};

void print(int n,node H[]){

	int i;

	for(i = 0;i < n;i++){
		cout << "node " << i+1 << ": ";
		cout << "key = " << H[i].key << ", ";
		if(H[i].parent != NULL){
			cout << "parent key = " << H[i].parent->key << ", ";
		}
		if(H[i].left != NULL){
			cout << "left key = " << H[i].left->key << ", ";
		}
		if(H[i].right != NULL){
			cout << "right key = " << H[i].right->key << ", ";
		}
		cout << endl;
	}
}

int main(){

	int i;
	int n;
	node* H;

	cin >> n;

	H = new node[n];

	for(i = 0;i < n;i++){
		cin >> H[i].key;
		if(i != 0){
			H[i].parent = &H[((i+1)/2)-1];
		}
		if((i+1)*2 <= n){
			H[i].left = &H[((i+1)*2)-1];
		}
		if((i+1)*2+1 <= n){
			H[i].right = &H[(((i+1)*2)+1)-1];
		}
	}

	print(n,H);

	delete[] H;

	return 0;
}