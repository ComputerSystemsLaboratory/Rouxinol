#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct node{
	int data;
	node* prev;
	node* next;
};

void printforward(node* head);
void insert(node*& head, node*& tail, node*& e);
void deleteFirst(node*& head, node*& tail);
void deleteLast(node*& head, node*& tail);
void deleteElement(node*& head, node*& tail, int e);

int main(){

	node* head = NULL;
	node* tail = NULL;
	node* nw;

	int n;
	cin >> n;

	string s;
	for (int i=0; i<n; i++){
		cin >> s;
		if (s.length() > 6){
			if (s[6] == 'F'){
				deleteFirst(head, tail);
			}
			else{
				deleteLast(head, tail);
			}
		}
		else{
			int t;
			cin >> t;
			if (s[0] == 'i'){
				nw = new node;
				nw->data = t;
				insert(head, tail, nw);
			}
			else{
				deleteElement(head, tail, t);
			}
		}
	}
/*	node* n;

	n = new node;
	n->data = 1000000000;
	insert(head, tail, n);

	n = new node;
	n->data = 999999999;
	insert(head, tail, n);

	deleteLast(head, tail);

	n = new node;
	n->data = 1234566890;
	insert(head, tail, n);

	n = new node;
	n->data = 5;
	insert(head, tail, n);

	deleteFirst(head, tail);

	n = new node;
	n->data = 7;
	insert(head, tail, n);

	if (tail->next == NULL){
		cout << "hello" << endl;
	}

	deleteElement(head, tail, 5);
*/
	printforward(head);	

	return 0;
}

void printforward(node* head){
	node* tmp;
	tmp = head;
	while (tmp != NULL){
		if (tmp==head){
			cout << tmp->data;
		}
		else{
			cout << " " << tmp->data;
		}
		tmp = tmp->next;
	}
	cout << endl;
}

void insert(node*& head, node*& tail, node*& e){
	if (head != NULL){
		e->next = head;
		e->prev = NULL;
		head->prev = e;
		head = e;
	}
	else{
		e->prev = NULL;
		e->next = NULL;
		head = e;
		tail = e;
	}
}

void deleteFirst(node*& head, node*& tail){
	if (head != tail){
		head = head->next;
		head->prev = NULL;
	}
	else{
		head = NULL;
		tail = NULL;
	}
}

void deleteLast(node*& head, node*& tail){
	if (head != tail){
		tail = tail->prev;
		tail->next = NULL;
	}
	else{
		head = NULL;
		tail = NULL;
	}
}

void deleteElement(node*& head, node*& tail, int e){
	node* tmp;
	tmp = head;
	bool flag = true;
	while (tmp->data != e && flag){
		if (tmp->next==NULL){
			flag = false;
		}
		else{
			tmp = tmp->next;
		}
	}
	if (flag){
		if (tmp == head){
			deleteFirst(head, tail);
		}
		else if (tmp == tail){
			deleteLast(head, tail);
		}
		else{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
		}
	}
}














