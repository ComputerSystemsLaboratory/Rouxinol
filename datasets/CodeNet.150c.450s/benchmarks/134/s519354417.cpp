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
	Node *searchNode(int id);
	int getId(){ return id; }
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

Node *Node::searchNode(int id)
{
	if (this->id == id) return this;
	if (child_l != NULL) {
		Node *sl = child_l->searchNode(id);
		if (sl != NULL) return sl;
	}
	if (child_r != NULL) {
		Node *sr = child_r->searchNode(id);
		if (sr != NULL) return sr;
	}
	return NULL;
};

class BinaryTree {
private:
	Node *root[26];
	void walkPre(Node *node);
	void walkIn(Node *node);
	void walkPost(Node *node);
public:
	BinaryTree(){ for(int i = 0; i < 26; i++) root[i] = NULL; }
	Node *setNode(int id);
	void setChildl(Node *node, int idl);
	void setChildr(Node *node, int idr);
	void walkPreorder();
	void walkInorder();
	void walkPostorder();
};

Node *BinaryTree::setNode(int id)
{
	Node *node;
	int i;
	for (i = 0; root[i] != NULL; i++) {
		if ((node = root[i]->searchNode(id)) != NULL) return node;
	}
	root[i] = new Node(id);
	return root[i];
}

void BinaryTree::setChildl(Node *node, int idl)
{
	if (idl == -1) return;

	int i;
	for (i = 0; root[i] != NULL; i++) {
		if (root[i]->searchNode(idl) != NULL) {
			node->setChildl(root[i]);
			int j;
			for (j = i; root[j + 1] != NULL; j++) {
				root[j] = root[j + 1];
			}
			if (j != 0) root[j] = NULL;
			return;
		}
	}

	node->setChildl(new Node(idl));
	return;	
}

void BinaryTree::setChildr(Node *node, int idr)
{
	if (idr == -1) return;

	int i;
	for (i = 0; root[i] != NULL; i++) {
		if (root[i]->searchNode(idr) != NULL) {
			node->setChildr(root[i]);
			int j;
			for (j = i; root[j + 1] != NULL; j++) {
				root[j] = root[j + 1];
			}
			if (j != 0) root[j] = NULL;
			return;
		}
	}

	node->setChildr(new Node(idr));
	return;	
}

void BinaryTree::walkPreorder()
{
	cout << "Preorder" << endl;
	walkPre(root[0]);
	cout << endl;
}

void BinaryTree::walkInorder()
{
	cout << "Inorder" << endl;
	walkIn(root[0]);
	cout << endl;
}

void BinaryTree::walkPostorder()
{
	cout << "Postorder" << endl;
	walkPost(root[0]);
	cout << endl;
}

void BinaryTree::walkPre(Node *node)
{
	if (node == NULL) return;
	cout << " " << node->getId();
	walkPre(node->getChildl());
	walkPre(node->getChildr());
}

void BinaryTree::walkIn(Node *node)
{
	if (node == NULL) return;
	walkIn(node->getChildl());
	cout << " " << node->getId();
	walkIn(node->getChildr());
}

void BinaryTree::walkPost(Node *node)
{
	if (node == NULL) return;
	walkPost(node->getChildl());
	walkPost(node->getChildr());
	cout << " " << node->getId();
}

int main(void)
{
	BinaryTree bt;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int id, idl, idr;
		cin >> id >> idl >> idr;
		Node *node = bt.setNode(id);
		bt.setChildl(node, idl);
		bt.setChildr(node, idr);
	}

	bt.walkPreorder();
	bt.walkInorder();
	bt.walkPostorder();
		
	return 0;
}