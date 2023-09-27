#include<iostream>
#include<string>
#include<stdlib.h>
using namespace  std;
struct NodeB
{
	int key;
	NodeB *left;
	NodeB *right;
};
NodeB *head = NULL;
void insert(int key)
{
	NodeB *next = head;
	NodeB *prev = NULL;
	bool isLeft = true;
	while (next != NULL)
	{
		prev = next;
		if ((*next).key >= key)
		{
			next = (*next).left;
			isLeft = true;
		}
		else if ((*next).key <= key)
		{
			next = (*next).right;
			isLeft = false;
		}
	}
	if (prev == NULL)
	{
		head = (NodeB *)malloc(sizeof(NodeB));
		(*head).key = key;
		(*head).left = NULL;
		(*head).right = NULL;
		return;
	}
	if (isLeft)
	{
		(*prev).left = (NodeB *)malloc(sizeof(NodeB));
		(*(*prev).left).key = key;
		(*(*prev).left).left = NULL;
		(*(*prev).left).right = NULL;
	}
	else
	{
		(*prev).right = (NodeB *)malloc(sizeof(NodeB));
		(*(*prev).right).key = key;
		(*(*prev).right).left = NULL;
		(*(*prev).right).right = NULL;
	}
	
}
void inOrder(NodeB *h)
{
	if (h == NULL)return;
	inOrder((*h).left);
	cout << " " << (*h).key;
	inOrder((*h).right);
}
void preOrder(NodeB *h)
{
	if (h == NULL)return;
	cout << " " << (*h).key;
	preOrder((*h).left);
	preOrder((*h).right);
}
void print()
{
	inOrder(head);
	cout << endl;
	preOrder(head);
	cout << endl;
}
bool find(int key)
{
	NodeB *next = head;
	while (next != NULL)
	{
		if ((*next).key == key)
		{
			return true;
		}
		else if ((*next).key < key)
		{
			next = (*next).right;
		}
		else if ((*next).key > key)
		{
			next = (*next).left;
		}
	}
	return false;
}
int main()
{
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		string inst;
		cin >> inst;
		if (inst.compare("insert") == 0)
		{
			int key;
			cin >> key;
			insert(key);
		}
		else if (inst.compare("print") == 0)
		{
			print();
		}
		else if (inst.compare("find") == 0)
		{
			int key;
			cin >> key;
			if (find(key))
			{
				cout << "yes" << endl;
			}
			else
			{
				cout << "no" << endl;
			}
		}
	}
	return 0;
}