#include <cstdio>
#include <vector>

typedef struct node{
	int number;
	node *parent;
}node;

node *root;

node *find(node *x){
	
	if(x->parent == root) return x;
	else{
		x->parent = find(x->parent);
		return x->parent;
	}
}

int main(void){
	int n,q;
	scanf("%d %d", &n, &q);
	std::vector<node> nodes(n);
	for(int i=0;i<n;i++){
		nodes[i].number = i;
		nodes[i].parent = root;
	}
	for(int i=0;i<q;i++){
		int op,x,y;
		node *x_parent, *y_parent;
		scanf("%d %d %d", &op, &x, &y);
		x_parent = find(&nodes[x]);
		y_parent = find(&nodes[y]);
		if (op==0){
			if (x_parent->number > y_parent->number) x_parent->parent = y_parent;
			else if (x_parent->number < y_parent->number) y_parent->parent = x_parent;
		}
		else{
			if (x_parent->number == y_parent->number) printf("1\n");
			else printf("0\n");
		}
	}
	return 0;
}