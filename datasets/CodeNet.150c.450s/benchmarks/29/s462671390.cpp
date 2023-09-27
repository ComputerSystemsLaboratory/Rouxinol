#include <iostream>
#include <string>
#include <malloc.h>
#include <stdlib.h>

using namespace std;

struct Node
{
	int key;
	Node *next, *prev;
};

Node *null;

Node* ListSearch(int key)
{
	Node* cur = null->next;

	while (cur != null && cur->key != key)
		cur = cur->next;

	return cur;
}

void Init()
{
	null = (Node*)malloc(sizeof(Node));

	null->next = null;
	null->prev = null;
}

void OutputList()
{
	Node* cur = null->next;

	int i = 0;
	while (true)
	{
		if (cur == null)
			break;

		if (i > 0)
			cout << " ";

		cout << cur->key;

		cur = cur->next;
		i++;
	}

	cout << endl;
}

void DeleteNode(Node* t)
{
	if (t == null)
		return;

	t->prev->next = t->next;
	t->next->prev = t->prev;

	free(t);
}

void DeleteFirst()
{
	DeleteNode(null->next);
}

void DeleteLast()
{
	DeleteNode(null->prev);
}

void DeleteKey(int key)
{
	DeleteNode(ListSearch(key));
}

void Insert(int key)
{
	Node* x = (Node*)malloc(sizeof(Node));

	x->key = key;

	x->next = null->next;

	null->next->prev = x;
	null->next = x;

	x->prev = null;
}

int main()
{
	int n;
	string com;

	cin >> n;

	Init();
	for (int i = 0;i < n;i++)
	{
		int key;
		cin >> com;

		if (com == "insert")
		{
			cin >> key;

			Insert(key);
		}
		else if (com == "delete")
		{
			cin >> key;

			DeleteKey(key);
		}
		else if (com == "deleteFirst")
			DeleteFirst();
		else if (com == "deleteLast")
			DeleteLast();
	}

	OutputList();

	return 0;
}