#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct Node {
	int key;
	Node* next;
	Node* prev;
};

class List {
	private:
		Node* nil;
	
	public:
		List() {
			nil = (Node*)malloc(sizeof(Node));
			nil->key = 0;
			nil->next = nil;
			nil->prev = nil;
		}

		Node* find(int key) {
			for(Node* node = nil->next;node != nil;node = node->next) {
				if(node->key == key) return node;
			}
		}

		void insert(Node* x) {
			x->next = nil->next;
			nil->next->prev = x;
			nil->next = x;
			x->prev = nil;
		}

		void add(int x) {
			Node* tmp = (Node*)malloc(sizeof(Node));
			tmp->key = x;
			insert(tmp);
		}

		void delete_x(int key) {
			Node* x = find(key);
			if(x == nil) return;

			x->prev->next = x->next;
			x->next->prev = x->prev;
			free(x);
		}

		void deleteFirst() {
			Node* x = nil->next;
			x->prev->next = x->next;
			x->next->prev = x->prev;
			free(x);
		}

		void deleteLast() {
			Node* x = nil->prev;
			x->prev->next = x->next;
			x->next->prev = x->prev;
			free(x);
		}

		void show() {
			int space = 0;

			for(Node* node = nil->next;node != nil;node = node->next) {
				if(space) cout << " ";
				cout << node->key;
				space = 1;
			}

			cout << endl;
		}
};

int main() {
	List list;
	int n;
	cin >> n;
	string op;
	int x;

	for(int i = 0;i < n;i++) {
		cin >> op;

		if(op == "insert") {
			cin >> x;
			list.add(x);
		} else if(op == "delete") {
			cin >> x;
			list.delete_x(x);
		} else if(op == "deleteFirst") {
			list.deleteFirst();
		} else if(op == "deleteLast") {
			list.deleteLast();
		}
	}

	list.show();

	return 0;
}


