#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

class Node
{
public:
	Node* prev;
	Node* next;
	int key;
};

Node* nil;

void init()
{
	nil->key = 0;
	nil->prev = nil;
	nil->next = nil;
}

void print()
{
	Node* cur = nil->next;
	int isf = 0;
	while (true)
	{
		if (cur == nil)
		{
			break;
		}
		if (isf++ > 0)
		{
			cout << " ";
		}
		cout << cur->key;
		cur = cur->next;
	}
	cout << endl;
}

void insert(int key)
{
	Node* node = new Node;
	node->key = key;
	node->next = nil->next;
	nil->next->prev = node;
	nil->next = node;
	node->prev = nil;
}

Node* listSearch(int key)
{
	Node* cur = nil->next;
	while (cur != nil && cur->key != key)
	{
		cur = cur->next;
	}
	return(cur);
}

void deleteNode(Node* t)
{
	if (t == nil)
	{
		return;
	}
	t->prev->next = t->next;
	t->next->prev = t->prev;
	delete(t);
}

void deleteKey(int key)
{
	deleteNode(listSearch(key));
}

void deleteFirst()
{
	deleteNode(nil->next);
}

void deleteLast()
{
	deleteNode(nil->prev);
}

void solve()
{
	int n;
	cin >> n;
	nil = new Node;
	init();
	for (int i = 0; i < n; ++i)
	{
		char command[12];
		scanf("%s", command);
		if (command[6] == 'F')
		{
			deleteFirst();
		}
		else if (command[6] == 'L')
		{
			deleteLast();
		}
		else
		{
			int key;
			scanf("%d", &key);
			if (command[0] == 'i')
			{
				insert(key);
			}
			else if (command[0] == 'd')
			{
				deleteKey(key);
			}
		}
	}
	print();
	delete nil;
}

int main()
{
	solve();
	return(0);
}