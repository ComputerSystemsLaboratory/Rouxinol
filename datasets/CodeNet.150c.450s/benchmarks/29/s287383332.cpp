#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

//
class Node {
private:
	int key;
	Node *p_next = NULL;
	Node *p_prev = NULL;
public:
	Node(int k);
	void linkNext(Node *n);
	void linkPrev(Node *n);
	Node *getNext();
	Node *getPrev();
	bool hasKey(int k);
	void printKey();
};

Node::Node(int k)
{
	key = k;
}

void Node::linkNext(Node *p_n)
{
	p_next = p_n;
}

void Node::linkPrev(Node *p_n)
{
	p_prev = p_n;
}

Node *Node::getNext()
{
	return p_next;
}

Node *Node::getPrev()
{
	return p_prev;
}

bool Node::hasKey(int k)
{
	return key == k;
}

void Node::printKey()
{
	cout << key;
}

//
class LinkedList {
private:
	Node *p_dummy;
	void linkNode(Node *p_n1, Node *p_n2);
public:
	LinkedList();
	void insertNode(int key);
	void deleteNode(int x);
	void deleteFirst();
	void deleteLast();
	void print();
};

LinkedList::LinkedList()
{
	p_dummy = new Node(-1);
	linkNode(p_dummy, p_dummy);
}

void LinkedList::linkNode(Node *p_n1, Node *p_n2)
{
	p_n1->linkNext(p_n2);
	p_n2->linkPrev(p_n1);
}

void LinkedList::insertNode(int key)
{
	Node *p_n = new Node(key);
	linkNode(p_n, p_dummy->getNext());
	linkNode(p_dummy, p_n);
}

void LinkedList::deleteNode(int x)
{
	Node *p_n = p_dummy->getNext();
	while (!p_n->hasKey(x)) {
		if (p_n->hasKey(-1)) return;
		p_n = p_n->getNext();
	}
	
	linkNode(p_n->getPrev(), p_n->getNext());
	delete p_n;
}

void LinkedList::deleteFirst()
{
	linkNode(p_dummy, p_dummy->getNext()->getNext());
}

void LinkedList::deleteLast()
{
	linkNode(p_dummy->getPrev()->getPrev(), p_dummy);
}

void LinkedList::print()
{
	Node *p_n = p_dummy->getNext();
	if (p_n->hasKey(-1)) return;
	while (1) {
		p_n->printKey();
		p_n = p_n->getNext();
		if (p_n->hasKey(-1)){
			cout << endl;
			break;
		} else {
			cout << " ";
		}
	}
}

//
int main(void)
{	
	LinkedList list;
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		char command[12] = "\0";
		cin >> command;
		if (strcmp(command, "insert") == 0) {
			int key;
			cin >> key;
			list.insertNode(key);
		} else if (strcmp(command, "delete") == 0) {
			int key;
			cin >> key;
			list.deleteNode(key);
		} else if (strcmp(command, "deleteFirst") == 0) {
			list.deleteFirst();
		} else {
			list.deleteLast();
		}
	}

	list.print();
	
	return 0;
}