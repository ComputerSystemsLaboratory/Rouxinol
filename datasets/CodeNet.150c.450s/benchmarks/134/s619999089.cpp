#include <iostream>
#define NIL -1
struct Node {
    int parent, left, right;
};

void preorder(Node* nodeArray, int root)
{
    if (root == NIL) {
	return;
    }
    std::cout << " " << root;
    preorder(nodeArray, nodeArray[root].left);
    preorder(nodeArray, nodeArray[root].right);
}

void inorder(Node* nodeArray, int root)
{
    if (root == NIL) {
	return;
    }
    inorder(nodeArray, nodeArray[root].left);
    std::cout << " " << root;
    inorder(nodeArray, nodeArray[root].right);
}

void postorder(Node* nodeArray, int root)
{
    if (root == NIL) {
	return;
    }
    postorder(nodeArray, nodeArray[root].left);
    postorder(nodeArray, nodeArray[root].right);
    std::cout << " " << root;
}
int main()
{
    int n = 0;
    std::cin >> n;
    Node* nodeArray = (Node*)malloc(n * sizeof(Node));
    for (int i = 0; i < n; i++) {
	nodeArray[i].parent = NIL;
	nodeArray[i].left = NIL;
	nodeArray[i].right = NIL;
    }
    for (int i = 0; i < n; i++) {
	int index, left, right;
	std::cin >> index;
	std::cin >> left;
	std::cin >> right;
	nodeArray[index].left = left;
	nodeArray[index].right = right;
	nodeArray[left].parent = index;
	nodeArray[right].parent = index;
    }
    //??????????????¢?´¢
    int root;
    for (int i = 0; i < n; i++) {
	if (nodeArray[i].parent == NIL) {
	    root = i;
	    break;
	}
    }
    std::cout << "Preorder" << std::endl;
    preorder(nodeArray, root);
    std::cout << std::endl;
    std::cout << "Inorder" << std::endl;
    inorder(nodeArray, root);
    std::cout << std::endl;
    std::cout << "Postorder" << std::endl;
    postorder(nodeArray, root);
    std::cout << std::endl;
}