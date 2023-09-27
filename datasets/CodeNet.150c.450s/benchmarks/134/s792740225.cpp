#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

struct node{
	int left;
	int right;
	int id_parent;
};

struct tree{
	int n_nodes;
	node *nodes;
};

void preorder(tree t, int id){
	printf(" %d", id);
	if(t.nodes[id].left != -1) preorder(t, t.nodes[id].left);
	if(t.nodes[id].right != -1) preorder(t, t.nodes[id].right);
}

void inorder(tree t, int id){
	if(t.nodes[id].left != -1) inorder(t, t.nodes[id].left);
	printf(" %d", id);
	if(t.nodes[id].right != -1) inorder(t, t.nodes[id].right);
}

void postorder(tree t, int id){
	if(t.nodes[id].left != -1) postorder(t, t.nodes[id].left);
	if(t.nodes[id].right != -1) postorder(t, t.nodes[id].right);
	printf(" %d", id);
}

int main(void){
	tree t;
	int i,id, n, left, right;
	scanf("%d", &t.n_nodes);
	t.nodes = new node[t.n_nodes];
	
	for(i=0;i<t.n_nodes;i++){
		t.nodes[i].id_parent = -1;
	}
	for(i=0;i<t.n_nodes;i++){
		scanf("%d %d %d",&id, &left, &right);
		t.nodes[id].left = left;
		t.nodes[id].right = right;

		if(left != -1){
			t.nodes[left].id_parent = id;
		}
		if(right != -1){
			t.nodes[right].id_parent = id;
		}
	}

	for (i=0;i<t.n_nodes;i++){
		if(t.nodes[i].id_parent == -1){
			id = i;
			break;
		}
	}
	printf("Preorder\n");
	preorder(t,id);
	printf("\nInorder\n");
	inorder(t, id);
	printf("\nPostorder\n");
	postorder(t, id);
	printf("\n");
	delete []t.nodes;

	return 0;
}