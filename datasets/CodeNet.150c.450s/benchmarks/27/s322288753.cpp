#include<iostream>
#include<cstdlib>
using namespace std;


struct tree{
	tree* left;
	tree* right;
	tree* parent;
	int val;
};

void printPreorder(tree* root){
	if(root== NULL)return;
	cout << " " << root->val;
	printPreorder(root->left);
	printPreorder(root->right);
	return;
}
void printInorder(tree* root){
	if(root== NULL)return;
	printInorder(root->left);
	cout << " " << root->val;
	printInorder(root->right);
	return;
}

tree* findNode(int val, tree* root){
	if(root->val == val)return root;

	tree* next;
	if(val < root->val)next = root->left;
	else next = root->right;

	if(next)return findNode(val,next);
	else return NULL;
}
tree* getMax(tree* root){
	if(root->right == NULL)return root;
	else return getMax(root->right);
};

void deleteNode(tree* node){
	return;
	bool nodeIsRoot = node->parent == NULL;
	bool nodeIsLeft = false;
	if(!nodeIsRoot)nodeIsLeft = node->parent->left == node;
	tree* subNode = NULL;
	if(node->left == NULL && node->right == NULL){
	}else if(node->left != NULL && node->right != NULL){
		subNode = getMax(node->left);
		if(subNode -> left != NULL){
			subNode->parent->right = subNode->left;
			subNode->left->parent = subNode->parent;
		}else{
			subNode->parent->right = NULL;
		}
		subNode->left = node->left;
		subNode->right = node->right;
	}else{
		if(node->left == NULL)subNode = node->right;
		else subNode = node->left;
	}
	if(subNode)subNode->parent = node->parent;
	if(nodeIsLeft)node->parent->left = subNode;
	else if(!nodeIsRoot)node->parent->right = subNode;
	free(node);
};

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
		}else if(order[0] == 'p'){
			printInorder(root);
			cout << endl;
			printPreorder(root);
			cout << endl;
		}else if(order[0] == 'f'){
			cin >> val;
			if(findNode(val, root) == NULL)cout << "no" << endl;
			else cout << "yes" << endl;
		}else{
			cin >> val;
			deleteNode(findNode(val, root));	
		}
	}


	return 0;

}