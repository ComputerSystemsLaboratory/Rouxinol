#include<iostream>
using namespace std;

#define rep(i,n) for(int i = 0; i < (n); i++)

struct b_tree{
	int left;
	int right;
	int sibling;
	int parent;
};

int getDepth(b_tree* array, int index){
	if(index == -1) return 0;
	if(array[index].left == -1 && array[index].right == -1)return 0;

	int right = getDepth(array, array[index].right);
	int left = getDepth(array, array[index].left);

	return (right > left ? right : left) + 1;
}

void preorder(b_tree* array, int index){
	cout << " " << index;
	if(array[index].left != -1)preorder(array, array[index].left);
	if(array[index].right != -1)preorder(array, array[index].right);
	return;
}
void inorder(b_tree* array, int index){
	if(array[index].left != -1)inorder(array, array[index].left);
	cout << " " << index;
	if(array[index].right != -1)inorder(array, array[index].right);
	return;
}

void postorder(b_tree* array, int index){
	if(array[index].left != -1)postorder(array, array[index].left);
	if(array[index].right != -1)postorder(array, array[index].right);
	cout << " " << index;
	return;
}


int main(){
	ios_base::sync_with_stdio(false);

	int numOfNode;
	cin >> numOfNode;
	b_tree* array = new b_tree[numOfNode];

	rep(i,numOfNode){
		int index;
		cin >> index;
		cin >> array[index].left;
		cin >> array[index].right;
		array[index].parent = -1;
		array[index].sibling = -1;
	}

	int rootIndex;
	
	rep(i, numOfNode){
		array[array[i].left].parent = i;
		array[array[i].right].parent = i;
		array[array[i].left].sibling = array[i].right;
		array[array[i].right].sibling = array[i].left;
	}

	rep(i, numOfNode){
		if(array[i].parent == -1)rootIndex = i; 
	}

	cout << "Preorder" << endl;
	preorder(array, rootIndex); 
	cout << endl;
	

	cout << "Inorder" << endl;
	inorder(array, rootIndex); 
	cout << endl;

	cout << "Postorder" << endl;
	postorder(array, rootIndex); 
        cout << endl;

	return 0;
}