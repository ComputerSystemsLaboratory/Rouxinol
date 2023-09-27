#include<iostream>

using namespace std;

struct BSTNode {
	int data;
	BSTNode *left;
	BSTNode *right;
};

BSTNode* getnode(int data);
BSTNode* Insert(BSTNode *root, int data);
void PreOrder(BSTNode *root);
void InOrder(BSTNode *root);
void Visit(BSTNode *root);


int main() {
	
	BSTNode *root = NULL;
	
	int n;
	string s;
	int data;
	
	while(cin >> n) {
		
		for(int i=0;i<n;i++) {
			
			cin >> s;
			
			if(s[0] == 'i') {
				
				cin >> data;
				root = Insert(root, data);
			
		}
			else {
				
				InOrder(root);
				cout << "\n";
				PreOrder(root);	
				cout << "\n";
				
				
			}
				
			
		}
		
		
		
	}
	
	return 0;
}

BSTNode* getnode(int data) {
	
	BSTNode *newnode = new BSTNode;
	
	newnode -> data = data;
	newnode -> left = NULL;
	newnode -> right = NULL;
	
	return newnode;
}

BSTNode* Insert(BSTNode *root, int data) {
	
	if(root == NULL)
		root = getnode(data);
		
	else if(data < root -> data )
		root -> left = Insert(root -> left, data);
		
	else
		root -> right = Insert(root -> right, data);
	
	return root;
	
}

void PreOrder(BSTNode *root) {
	
	if (root != NULL) {
      Visit(root); 
      PreOrder(root -> left);   
      PreOrder(root -> right);
      
   }

}

void InOrder(BSTNode *root) {
	
	if (root != NULL) {
		
      InOrder(root -> left);   
      Visit(root);
      InOrder( root -> right);
      
   }

}
void Visit(BSTNode *root) {
	cout << " " << root->data;
}
