#include <iostream>
#include <string>

using namespace std;

class Node {
public:
	int key;
	Node* prev;
	Node* next;
	Node(int _key, Node* _prev, Node* _next) {
		key = _key;
		prev = _prev;
		next = _next;
	}
};

class List {
public:
	Node* head;
	Node* last;
	List() {
		head = NULL;
		last = NULL;
	}
	void insert(int key) {
		auto node = head;
		head = new Node(key, NULL, node);
		if (node)
			node->prev = head;
		else
			last = head;
	}
	void deleteNode(Node* node) {
		if (! node)
			return;
		
		if (node == head)
			head = node->next;
		else
			node->prev->next = node->next;
		if (node == last)
			last = node->prev;
		else
			node->next->prev = node->prev;
		delete node;
	}
	Node* find(int key) {
		Node* current = head;
		while (current) {
			if (current->key == key) {
				break;
			} else {
				current = current->next;
			}
		}
		return current;
	}
	void deleteFirst() {
		deleteNode(head);
	}
	void deleteLast() {
		deleteNode(last);
	}
};

int main() {
	int n;
	cin >> n;
	
	auto list = List();
	string name;
	int key;
	for (int i=0; i<n; i++) {
		cin >> name;
		if (name == "insert") {
			cin >> key;
			list.insert(key);
		} else if (name == "delete") {
			cin >> key;
			list.deleteNode(list.find(key));
		} else if (name == "deleteFirst") {
			list.deleteFirst();
		} else if (name == "deleteLast") {
			list.deleteLast();
		}
	}
	
	auto current = list.head;
	while (current) {
		if (current != list.head)
			cout << ' ';
		cout << current->key;
		current = current->next;
	}
	cout << endl;
}