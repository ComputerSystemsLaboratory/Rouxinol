#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

struct Node
{
	int value;
	Node* prev;
	Node* next;
};

Node* nil;

void insertValue(int value)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->value = value;
	node->next = nil->next;
	node->prev = nil;
	node->next->prev = node;
	nil->next = node;
}

void deleteNode(Node* node)
{
	if (node == nil) return;
	node->prev->next = node->next;
	node->next->prev = node->prev;
	free(node);
}

void deleteValue(int value)
{
	Node* node = nil->next;
	while(node->value != value && node != nil)
	{
		node = node->next;
	}
	deleteNode(node);
}

int main(int argc, char const *argv[])
{
	nil = (Node*)malloc(sizeof(Node));
	nil->next = nil;
	nil->prev = nil;

	int n = 0;
	char cmd[20];
	int value;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		scanf("%s %d", cmd, &value);
		if (strcmp(cmd, "insert") == 0)
		{
			insertValue(value);
		} else if(strcmp(cmd, "deleteFirst") == 0) {
			deleteNode(nil->next);
		} else if (strcmp(cmd, "deleteLast") == 0) {
			deleteNode(nil->prev);
		} else {
			deleteValue(value);
		}
	}
	Node* node = nil->next;
	while(node != nil->prev)
	{
		cout << node->value << " ";
		node = node->next;
	}
	cout << node->value << endl;
	return 0;
}