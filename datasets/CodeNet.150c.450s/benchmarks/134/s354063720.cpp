#include <iostream>
using namespace std;

struct Node{
	long id, left, right, parent;
};

void preorderWalk(struct Node T[], long id){
	cout << " " << id;
	if (T[id].left != -1) preorderWalk(T, T[id].left);
	if (T[id].right != -1) preorderWalk(T, T[id].right);
}

void inorderWalk(struct Node T[], long id){
	if (T[id].left != -1) inorderWalk(T, T[id].left);
	cout << " " << id;
	if (T[id].right != -1) inorderWalk(T, T[id].right);
}

void postorderWalk(struct Node T[], long id){
	if (T[id].left != -1) postorderWalk(T, T[id].left);
	if (T[id].right != -1) postorderWalk(T, T[id].right);
	cout << " " << id;
}

int main(){
	long n;
	cin >> n;
	struct Node T[25];
	for (long i = 0; i < n; i++){
		T[i].id = T[i].left = T[i].right = T[i].parent = -1;
	}
	for (long i = 0; i < n; i++){
		long id, left, right;
		cin >> id >> left >> right;
		T[id].id = T[left].parent = T[right].parent = id;
		T[id].left = left;
		T[id].right = right;
	}
	long rootid = -1;
	for (long i = 0; i < n; i++){
		if (T[i].parent == -1){
			rootid = i;
			break;
		}
	}
	cout << "Preorder" << endl;
	preorderWalk(T, rootid);
	cout << endl;
	cout << "Inorder" << endl;
	inorderWalk(T, rootid);
	cout << endl;
	cout << "Postorder" << endl;
	postorderWalk(T, rootid);
	cout << endl;
	return 0;
}