#include <stdio.h>
#include <iostream>

using namespace std;

#define BUF_SIZE 22

struct Node{
	Node(){
		left_child = right_child = parent = 0;
		data = 0;
	}
	Node *left_child,*right_child,*parent;
	long long data;
};

class Tree{
public:
	Tree(){
		root = new Node();
		num_of_node = 0;
	}
	void insert(long long insert_data){
		if(num_of_node == 0){
			root->data = insert_data;
			num_of_node++;
		}else{
			Node* tmp = root;
			while(true){
				if(tmp->data < insert_data){
					if(tmp->right_child == 0){
						tmp->right_child = new Node();
						tmp->right_child->data = insert_data;
						tmp->right_child->parent = tmp;
						num_of_node++;
						break;
					}else{
						tmp = tmp->right_child;
					}
				}else{
					if(tmp->left_child == 0){
						tmp->left_child = new Node();
						tmp->left_child->data = insert_data;
						tmp->left_child->parent = tmp;
						num_of_node++;
						break;
					}else{
						tmp = tmp->left_child;
					}
				}
			}
		}
	}

	void print(){
		inORDER(root);
		printf("\n");
		preORDER(root);
		printf("\n");
	}

private:

	Node* root;
	int num_of_node;

private:
	void preORDER(Node* node){
		printf(" %lld",node->data);
		if(node->left_child != 0) preORDER(node->left_child);
		if(node->right_child != 0) preORDER(node->right_child);
	}

	void inORDER(Node* node){
		if(node->left_child != 0) inORDER(node->left_child);
		printf(" %lld",node->data);
		if(node->right_child != 0) inORDER(node->right_child);
	}
};


int main(){
	int m;
	long long insert_data;
	char buf[BUF_SIZE];
	Tree tree;

	scanf("%d",&m);
	getchar();

	for(int i = 0; i < m; i++){
		fgets(buf,BUF_SIZE,stdin);
		if(buf[0] == 'i'){
			insert_data = 0;
			for(int k = 0; buf[k] != '\0';k++){
				if(buf[k] >= '0' && buf[k] <= '9'){
					insert_data = 10*insert_data + (buf[k] - '0');
				}
			}
			tree.insert(insert_data);
		}else{
			tree.print();
		}
	}
}