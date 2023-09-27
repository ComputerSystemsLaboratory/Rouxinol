#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>
#include <stdio.h>
#include <cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;

struct list {
	int key;
	list *next,*prev;
};

list *head, *tail, *p;

void insert_x(int key) {
	list *make = new list;
	make->key = key;
	if (head == NULL) {
		head = tail = make;
		make->next = make->prev = NULL;
	}
	else {
		head->prev = make;
		make->next = head;
		head = make;
	}
}

void deleteFirst() {
	list* tmp = head;
	if (head == tail) {
		head = tail = NULL;
	}
	else {
		head = head->next;
		head->prev = NULL;
	}
	delete tmp;
}
void deleteLast() {
	list* tmp = tail;
	if (tail == head) {
		head =  tail = NULL;
	}
	else {
		tail = tail->prev;
		tail->next = NULL;
	}
	delete tmp;
}
void delete_x(int key) {
	p = head;
	while (p->key != key) {
		if (p->next == NULL)
			return;
		p = p->next;
	}
	if (p == head)
		deleteFirst();
	else if (p == tail)
		deleteLast();
	else {
		p->prev->next = p->next;
		p->next->prev = p->prev;
		delete p;
	}
}

int main() {
	head = tail = p = NULL;
	int n=0;
	char command[12];
	int key =0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%s", command);
		if (strcmp(command, "insert") == 0) {
			scanf("%d", &key);
			insert_x(key);
		}
		else if (strcmp(command, "delete") == 0) {
			scanf("%d", &key);
			delete_x(key);
		}
		else if (strcmp(command, "deleteFirst") == 0) {
			deleteFirst();
		}
		else if (strcmp(command, "deleteLast") == 0) {
			deleteLast();
		}
	}

	while(true){
		if (head->next != NULL) {
			cout << head->key << " ";
			head = head->next;
		}
		else {
			cout << head->key << endl;
			break;
		}
	}

	return 0;
}