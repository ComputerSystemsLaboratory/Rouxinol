#include<iostream>
#include<string>
#include<stdlib.h>
using namespace  std;
struct NodeA
{
	int key;
	NodeA *left;
	NodeA *right;
};
NodeA *head = NULL;
void insert(int key)
{
	NodeA *next = head;
	NodeA *prev = NULL;
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
		head = (NodeA *)malloc(sizeof(NodeA));
		(*head).key = key;
		(*head).left = NULL;
		(*head).right = NULL;
		return;
	}
	if (isLeft)
	{
		(*prev).left = (NodeA *)malloc(sizeof(NodeA));
		(*(*prev).left).key = key;
		(*(*prev).left).left = NULL;
		(*(*prev).left).right = NULL;
	}
	else
	{
		(*prev).right = (NodeA *)malloc(sizeof(NodeA));
		(*(*prev).right).key = key;
		(*(*prev).right).left = NULL;
		(*(*prev).right).right = NULL;
	}
	
}
void inOrder(NodeA *h)
{
	if (h == NULL)return;
	inOrder((*h).left);
	cout << " " << (*h).key;
	inOrder((*h).right);
}
void preOrder(NodeA *h)
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
	}
	return 0;
}