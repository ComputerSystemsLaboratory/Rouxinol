#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

struct node{
	node *left;
	node *right;
	int key;
};

struct tree{
	node *nil;
	node *root;
};

void insert(tree *t, int id){
	node *x, *y, *n;
	n = new node;
	n->key = id;
	n->left = t->nil;
	n->right = t->nil;
	x = t->root;
	while(x != t->nil){
		y = x;
		if(id > x->key){
			x = x->right;
		}
		else{
			x = x->left;
		}
	}
	if(id > y->key){
		y->right = n;
	}
	else{
		y->left = n;
	}
}

void find(tree *t, int key){
	node *x, *y;
	x = t->root;
	char str[4];
	
	strcpy(str, "no");
	while(x != t->nil){
		if (x->key == key){
			strcpy(str, "yes");
			break;
		}
		else if (key > x->key){
			x = x->right;
		}
		else{
			x = x->left;
		}
	}
	printf("%s\n", str);
}

void printIn(tree *t, node *n){
	if (n == t->nil){
		return ;
	}
	else{
		printIn(t, n->left);
		printf(" %d", n->key);
		printIn(t, n->right);
	}
}

void printPre(tree *t, node *n){
	if (n == t->nil){
		return ;
	}
	else{
		printf(" %d", n->key);
		printPre(t, n->left);
		printPre(t, n->right);
	}
}


int main(void){
	tree *t;
	t = new tree;
	char str[10];
	int i,id,n;
	scanf("%d", &n);
	
	t->root = new node;

	t->root->left = t->nil;
	t->root->right = t->nil;
	
	for(i=0;i<n;i++){
		if(i==0){
			scanf("%s %d", str, &(t->root->key));
		}
		else{
			scanf("%s", str);
			if(str[0] == 'i'){
				scanf("%d", &id);
				insert(t, id);
			}
			else if(str[0] == 'p'){
				printIn(t, t->root);
				printf("\n");
				printPre(t, t->root);
                                printf("\n");
			}
			else{
				scanf("%d", &id);
				find(t, id);
			}
		}
	}
	return 0;
}