#include <iostream>
struct Node {
    int index;
    Node *parent, *left, *right;
};
Node* NIL;
Node* getNil()
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->index = -1;
    node->parent = node;
    node->left = node;
    node->right = node;
    return node;
}
Node* getNewNode()
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->index = -1;
    node->parent = NIL;
    node->left = NIL;
    node->right = NIL;
    return node;
}
Node* insertNode(Node* rootNode, int index)
{
    Node* node = rootNode;
    Node* parentNode = NIL;
    Node* indexNode = getNewNode();
    indexNode->index = index;
    if (node->index == -1) {
	return indexNode;
    }
    while (node->index != -1) {
	parentNode = node;
	if (node->index > index) {
	    node->left->parent = node;
	    node = node->left;
	} else {
	    node->right->parent = node;
	    node = node->right;
	}
    }
    indexNode->parent = parentNode;
    if (parentNode->index > index) {
	parentNode->left = indexNode;
    } else {
	parentNode->right = indexNode;
    }
    return rootNode;
}
void printNodeIn(Node* node)
{
    if (node->index == -1) {
	return;
    }
    std::cout << " " << node->index;
    printNodeIn(node->left);
    printNodeIn(node->right);
}
void printNodePre(Node* node)
{
    if (node->index == -1) {
	return;
    }
    printNodePre(node->left);
    std::cout << " " << node->index;
    printNodePre(node->right);
}
int main()
{
    NIL = getNil();
    Node* node = NIL;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
	std::string command;
	std::cin >> command;
	if (command == "insert") {
	    int index;
	    std::cin >> index;
	    node = insertNode(node, index);
	} else if (command == "print") {
	    printNodePre(node);
	    std::cout << std::endl;
	    printNodeIn(node);
	    std::cout << std::endl;
	}
    }
}