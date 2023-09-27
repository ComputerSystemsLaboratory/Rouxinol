#include<iostream>
#include<cstdlib>
using namespace std;


struct tree{
	tree* left;
	tree* right;
	tree* parent;
	int val;
};

void printInorder(tree* root){
	if(root== NULL)return;
	cout << " " << root->val;
	printInorder(root->left);
	printInorder(root->right);
	return;
}
void printPreorder(tree* root){
	if(root== NULL)return;
	printPreorder(root->left);
	cout << " " << root->val;
	printPreorder(root->right);
	return;
}

void insert(int val, tree* root){
	tree* next;
	bool flag = val < root->val;
	if(flag)next = root->left;
	else next = root->right;

	if(next == NULL){
		tree* newNode = (tree*)malloc(sizeof(tree));
		newNode->val = val;
		newNode->left = NULL;
		newNode->right = NULL;
		newNode->parent = root;
		if(flag)root->left = newNode;
		else root->right = newNode;
	}else{
		insert(val,next);
	}
}

int main(){
	ios_base::sync_with_stdio(false);

	tree* root = (tree*)malloc(sizeof(tree));

	char order[10];
	int val;
	int numOfOrder;

	cin >> numOfOrder;
	cin >> order;
	cin >> val;

	root->val = val;
	root->left = NULL;
	root->right = NULL;
	root->parent = NULL;
	

	for(int i = 0; i <  numOfOrder - 1; i++){
		cin >> order;
		if(order[0] == 'i'){
			cin >> val;
			insert(val, root);
		}else{
			printPreorder(root);
			cout << endl;
			printInorder(root);
			cout << endl;
		}
	}


	return 0;

}