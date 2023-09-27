#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int maxn = 500000 + 5;

struct Node{
	int value;
	Node *Left_Child,*Right_Child;
}pool[maxn],*tail = pool;

Node *root,*NUL;

void Insert(int key){
	Node *x = tail++;
	Node *fa = NUL;
	Node *cur = root;
	
	x->value = key;
	x->Left_Child = NUL;
	x->Right_Child = NUL;
	
	while(cur != NUL){
		fa = cur;
		if(cur->value > x->value)cur = cur->Left_Child;
		else cur = cur->Right_Child;
	}
	
	if(fa == NUL)root = x;
	else {
		if(fa->value > x->value)fa->Left_Child = x;
		else fa->Right_Child = x;
	}
}

void Preorder(Node *cur){
	if(cur == NUL)return;
	printf(" %d",cur->value);
	Preorder(cur->Left_Child);
	Preorder(cur->Right_Child);
}

void Inorder(Node *cur){
	if(cur == NUL)return;
	Inorder(cur->Left_Child);
	printf(" %d",cur->value);
	Inorder(cur->Right_Child);
}

bool find(int key){
	Node *cur = root;
	while(cur != NUL){
		if(cur->value > key)cur = cur->Left_Child;
		else if(cur->value < key)cur = cur->Right_Child;
		else return true;
	}
	return false;
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i = 1;i <= n; i++){
		char s[15];
		scanf("%s",s);
		if(strcmp(s,"insert") == 0){
			int key;
			scanf("%d",&key);
			Insert(key);
		}
		else if(strcmp(s,"print") == 0){
			Inorder(root);
			printf("\n");
			Preorder(root);
			printf("\n");
		}
		else {
			int key;
			scanf("%d",&key);
			if(find(key))printf("yes\n");
			else printf("no\n");
		}
	}
}