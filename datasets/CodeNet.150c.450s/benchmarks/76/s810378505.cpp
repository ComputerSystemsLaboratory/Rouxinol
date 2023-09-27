#include <cstdio>
#include <iostream>
using namespace std;
struct Node{
	struct Node *p;
	struct Node *cl;
	struct Node *cr;
	int key;
};
typedef struct Node *node;
node root;
int cnt;
void insert(int v){
	node y = NULL;
	node x = root;
	node z;
	z = (node)malloc(sizeof(Node));
	z->cl= NULL;
	z->cr= NULL;
	z->key = v;
	while(x!=NULL){
		y = x;
		if(z->key < x->key) x = x->cl;
		else x = x->cr;
	}
	z->p = y;
	if(y== NULL){
		root = z;
	}
	else if(z->key < y->key) y->cl = z;
	else y->cr = z;
}
bool find_node(int x, node t){
	if(t == NULL) return false;
	if(t->key == x) return true;
	if(x < t->key){ 
		if(find_node(x, t->cl) == true) return true;
	}
	else {
		if(find_node(x, t->cr) == true) return true;
	}
	return false;

}
void print_preorder(node x){
	if(x == NULL) return;
	printf(" %d", x->key);
	print_preorder(x->cl);
	print_preorder(x->cr);
}
void print_inorder(node x){
	if(x == NULL) return;
	print_inorder(x->cl);
	printf(" %d", x->key);
	print_inorder(x->cr);
}
int main(){
	int n;
	int tmp;
	string t;
	scanf("%d", &n);
	for(int i=0; i<n;i++){
		cin >> t;
		if(t=="insert"){
			cin >> tmp;
			insert(tmp);
		}else if(t=="print"){
			cnt = 0;
			print_inorder(root);
			printf("\n");
			cnt = 0;
			print_preorder(root);
			printf("\n");
		}else if(t=="find"){
			cin >> tmp;
			if(find_node(tmp, root) ==true) cout <<"yes" <<endl;
			else cout <<"no"<<endl;
		}
	}
}





