#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct node{
	int parent_id;
	int left_child_id;
	int right_child_id;
};

int get_root(node* b, int num);
void print_preorder(node* b, int root_id);
void print_inorder(node* b, int root_id);
void print_postorder(node* b, int root_id);

int main(){
	int n;
	cin >> n;
	node* b = (node*)calloc(n, sizeof(node));
	for(int i = 0; i < n; ++i){
		b[i].parent_id  = -1;
	}
	//input data
	for(int i = 0; i < n; ++i){
		int id;
		int left_child_id;
		int right_child_id;
		cin >> id;
		cin >> left_child_id;
		cin >> right_child_id;
		b[id].left_child_id  = left_child_id;
		b[id].right_child_id = right_child_id;
		if(left_child_id  != -1) b[left_child_id].parent_id  = id;
		if(right_child_id != -1) b[right_child_id].parent_id = id;
	}
	int root_id = get_root(b, n);
	printf("Preorder\n");
	print_preorder(b, root_id);
	putchar('\n');
	printf("Inorder\n");
	print_inorder(b, root_id);
	putchar('\n');
	printf("Postorder\n");
	print_postorder(b, root_id);
	putchar('\n');
	return 0;
}

void print_preorder(node* b, int root_id){
	printf(" %d", root_id);
	if(b[root_id].left_child_id  != -1) print_preorder(b, b[root_id].left_child_id);
	if(b[root_id].right_child_id != -1) print_preorder(b, b[root_id].right_child_id);
}

int get_root(node* b, int num){
	for(int i = 0; i < num; ++i){
		if(b[i].parent_id == -1) return i;
	}
	return -1;
}
void print_inorder(node* b, int root_id){
	if(b[root_id].left_child_id  != -1) print_inorder(b, b[root_id].left_child_id);
	printf(" %d", root_id);
	if(b[root_id].right_child_id != -1) print_inorder(b, b[root_id].right_child_id);
}
void print_postorder(node* b, int root_id){
	if(b[root_id].left_child_id  != -1) print_postorder(b, b[root_id].left_child_id);
	if(b[root_id].right_child_id != -1) print_postorder(b, b[root_id].right_child_id);
	printf(" %d", root_id);
}