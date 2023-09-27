#include <stdio.h>
#include <iostream>
using namespace std;

class Node {
private:
	int id;
	Node *parent;
	Node *child_l;
	Node *child_r;
public:
	Node(int id){ this->id = id; parent = NULL; child_l = NULL; child_r = NULL;}
	void setChildl(Node *nl);
	void setChildr(Node *nr);
	void setParent(Node *np){ parent = np; }
	int getId(){ return id; }
	Node *getParent(){ return parent; }
	Node *getChildl(){ return child_l; }
	Node *getChildr(){ return child_r; }
};

void Node::setChildl(Node *nl)
{
	child_l = nl;
	if (child_l != NULL) child_l->setParent(this);
}

void Node::setChildr(Node *nr)
{
	child_r = nr;
	if (child_r != NULL) child_r->setParent(this);
}

class BinaryTree {
private:
	Node *root;
	void walkPreorder(Node *node);
	void walkInorder(Node *node);
public:
	BinaryTree(){ root = NULL; }
	void insert(int id);
	void find(int id);
	void walkPreorder();
	void walkInorder();
};

void BinaryTree::insert(int id)
{
	if (root == NULL) {
		root = new Node(id);
		return;
	}

	Node *node = root;
	while (1) {
		if (id < node->getId()) {
			if (node->getChildl() == NULL) {
				node->setChildl(new Node(id));
				break;
			}
			else {
				node = node->getChildl();
			}
		}
		else if (id > node->getId()) {
			if (node->getChildr() == NULL) {
				node->setChildr(new Node(id));
				break;
			}
			else {
				node = node->getChildr();
			}
		}
	}
}

void BinaryTree::find(int id)
{
	Node *node = root;
	while (node != NULL) {
		if (id == node->getId()) {
			cout << "yes" << endl;
			return;
		}
		else if (id < node->getId()) {
			node = node->getChildl();
		}
		else {
			node = node->getChildr();
		}
	}
	cout << "no" <<endl;
}

void BinaryTree::walkPreorder()
{
	walkPreorder(root);
	cout << endl;
}

void BinaryTree::walkPreorder(Node *node)
{
	if (node == NULL) return;
	cout << " " << node->getId();
	walkPreorder(node->getChildl());
	walkPreorder(node->getChildr());
}

void BinaryTree::walkInorder()
{
	walkInorder(root);
	cout << endl;
}

void BinaryTree::walkInorder(Node *node)
{
	if (node == NULL) return;
	walkInorder(node->getChildl());
	cout << " " << node->getId();
	walkInorder(node->getChildr());
}

int main(void)
{
	BinaryTree bt;

	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		char command[7] = "\0";
		cin >> command;
		if (command[0] == 'i') {			
			int id;
			cin >> id;
			bt.insert(id);
		}
		else if (command[0] == 'f') {
			int id;
			cin >> id;
			bt.find(id);
		}
		else {
			bt.walkInorder();
			bt.walkPreorder();
		}
	}
		
	return 0;
}