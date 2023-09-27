#include<iostream>
using namespace std;

struct NODE{
	int id = -1;
	int parent = -1;
	int left = -1;
	int right = -1;
	int sibling = -1;
	int degree = 0;
};

void show_id(NODE *nodes, int id){
	cout << " " << nodes[id].id;
}

void show_preorder(NODE *nodes, int id){
	show_id(nodes, id);
	if(nodes[id].left != -1)
		show_preorder(nodes, nodes[id].left);
	if(nodes[id].right != -1)
		show_preorder(nodes, nodes[id].right);
}

void show_inorder(NODE *nodes, int id){
	if(nodes[id].left != -1)
		show_inorder(nodes, nodes[id].left);

	show_id(nodes, id);

	if(nodes[id].right != -1)
		show_inorder(nodes, nodes[id].right);
}

void show_postorder(NODE *nodes, int id){
	if(nodes[id].left != -1)
		show_postorder(nodes, nodes[id].left);

	if(nodes[id].right != -1)
		show_postorder(nodes, nodes[id].right);

	show_id(nodes, id);
}

int main(){
	int n;
	cin >> n;
	NODE *nodes = new NODE[n]; 

	int id;
	for(int i=0; i<n; ++i){
		cin >> id;
		nodes[id].id = id;
		cin >> nodes[id].left >> nodes[id].right;

		nodes[ nodes[id].left ].sibling = nodes[id].right;
		nodes[ nodes[id].right ].sibling = nodes[id].left;
		if(nodes[id].right != -1)
			nodes[ nodes[id].right ].parent = id;
		if(nodes[id].left != -1)
			nodes[ nodes[id].left ].parent = id;
	}

	// Find root
	int root_id;
	for(int i=0; i<n; ++i){
		if(nodes[i].parent == -1){
			root_id = i;
			break;
		}
	}

	cout << "Preorder" << endl;
	show_preorder(nodes, root_id);
	cout << endl;

	cout << "Inorder" << endl;
	show_inorder(nodes, root_id);
	cout << endl;

	cout << "Postorder" << endl;
	show_postorder(nodes, root_id);
	cout << endl;

	return 0;
}
