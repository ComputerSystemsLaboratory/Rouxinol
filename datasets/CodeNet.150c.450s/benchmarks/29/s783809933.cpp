#include<iostream>
#include<string>
using namespace std;

class Node {
public:
	Node *next;
	Node *prev;

	void setKey(int k) {
		key = k;
	}

	int getKey() {
		return key;
	}

private:
	int key;
	//string ??????
};

class DLinLis {
public:
	DLinLis() {
		guadman = new Node();
		guadman->next = guadman;
		guadman->prev = guadman;
	}

	void insertKey(int k) {
		Node *node = new Node();
		node->setKey(k);
		//next??¨prev????????????????????????????????????????????????
		node->next = guadman->next;
		guadman->next->prev = node;
		node->prev = guadman;
		guadman->next = node;
	}

	void deleteKey(int k) {
		deleteNode(searchList(k));
	}

	void deleteNode(Node *n) {
		if (n == guadman) return;
		n->prev->next = n->next;
		n->next->prev = n->prev;
		delete n; //?§£???
	}

	void deleteFirst() {
		deleteNode(guadman->next);
	}

	void deleteLast() {
		deleteNode(guadman->prev);
	}

	void printList() {
		Node *node = guadman->next;
		while (node != guadman) {
			cout << node->getKey();
			if (node->next != guadman) cout << " ";
			node = node->next;
		}
		cout << endl;
	}

private:
	//?????¨??§??¢??????????????????
	Node* searchList(int k) {
		Node *node = guadman->next;
		while (node->getKey() != k && node != guadman){
			node = node->next;
		}
		return node;
	}

	Node *guadman;
};

int main() {
	DLinLis *list = new DLinLis();
	string command;
	int numCom;

	cin >> numCom;
	for (int i = 0; i < numCom; i++) {
		cin >> command;
		if (command[0] == 'i') {
			int key;
			cin >> key;
			list->insertKey(key);
		}
		else if (command[0] == 'd') {
			if (command.length() >= 6) {
				if (command[6] == 'F') {
					list->deleteFirst();
				}
				else if (command[6] == 'L') {
					list->deleteLast();
				}
				else {
					int key;
					cin >> key;
					list->deleteKey(key);
				}
			}
		}
	}

	list->printList();

	return 0;
}