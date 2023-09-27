#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>


using namespace std;

struct Node {
	int key;
	Node *prev;
	Node *next;
};

Node *header;

void init() {
	header = (Node *)malloc(sizeof(Node));
	header->prev = header;
	header->next = header;
}

void insert(int key) {
	Node *data = (Node *)malloc(sizeof(Node));
	data->key = key;
	data->next = header->next;
	data->prev = header;
	header->next->prev = data;
	header->next = data;
}

void deleteKey(int key) {
	Node *p = header;
	while (p->next != header) {
		if (p->next->key == key) {
			Node *temp = p->next;
			p->next = temp->next;
			temp->next->prev = p;
			free(temp);
			return;
		}
		else {
			p = p->next;
		}

	}
}

void deleteFirst() {
	if (header->next == header) {
		return;
	}
	else {
		Node *temp = header->next;
		header->next = temp->next;
		temp->next->prev = header;
		free(temp);
		return;
	}
}

void deleteLast() {
	if (header->prev == header) {
		return;
	}
	else {
		Node *temp = header->prev;
		header->prev = temp->prev;
		temp->prev->next = header;
		free(temp);
		return;
	}

}

void print() {
	Node *p = header;
	while (p->next != header) {
		if (p->next->next == header) {
			cout << p->next->key << endl;
		}
		else {
			cout << p->next->key << " ";
		}
		p = p->next;
	}
}

int main() {
	init();
	int n;
	char com[20];
	int a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%s", com);
		if (com[0] == 'i') {
			scanf("%d", &a);
			insert(a);
		}
		else if (strlen(com) == 6) {
			scanf("%d", &a);
			deleteKey(a);
		}
		else if (com[6] == 'F') {
			deleteFirst();
		}
		else {
			deleteLast();
		}
	}

	print();

	return 0;
}