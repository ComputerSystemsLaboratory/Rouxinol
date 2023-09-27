#include<cstdio>
#include<algorithm>
using namespace std;

struct Node_tag{
	int key;
	Node_tag *parent, *left, *right;
};

typedef struct Node_tag Node;

Node *root;
Node *nil = (Node *)malloc(sizeof(Node));

void init(){
	nil->parent = nil->left = nil->right = nil;
	root = nil;
}


void inParse(Node *u){
	if(u == nil)
		return;
	inParse(u->left);
	printf(" %d", u->key);
	inParse(u->right);
}

void preParse(Node *u){
	if(u == nil)
		return;
	printf(" %d", u->key);
	preParse(u->left);
	preParse(u->right);
}

void insert(Node *z){
	Node *x = root, *y = nil;
	while(x != nil){
		y = x;
		if(z->key < x->key)
			x = x->left;
		else
			x = x->right;
	}
	z->parent = y;

    if (y == nil)
        root = z;
    else if(z->key < y->key)
        y->left = z;
    else
        y->right = z;
}

Node* find(Node *x, int k){
	while(x != nil && k != x->key){
		if(k < x->key)
			x = x->left;
		else
			x = x->right;
	}
	return x;
}

int main(void){
	int m, i, key;
	char S[10];
	init();
	scanf("%d", &m);
	for(i = 0;i < m;i++){
		scanf("%s", S);
		if(S[0] == 'i'){
			scanf("%d", &key);
			Node *z = (Node *)malloc(sizeof(Node));
			z->key = key;
			z->left = z->right = nil;
			insert(z);
		} else if(S[0] == 'p'){
			inParse(root);
			printf("\n");
			preParse(root);
			printf("\n");
		} else {
			scanf("%d", &key);
			if(find(root, key) != nil)
				printf("yes\n");
			else
				printf("no\n");
		}
	}
	return 0;
}