#include <stdio.h>
using namespace std;

class Node
{
public:
	int key;
	Node* previous;
	Node* next;
};

class DoublyLinkedList
{
private:
	Node* sentinel;
public:
	DoublyLinkedList ()
	{
		sentinel = new Node;
		sentinel->previous = sentinel;
		sentinel->next = sentinel;
	}
	~DoublyLinkedList ()
	{
		Node* element = sentinel->next;

		while (element != sentinel)
		{
			element = element->next;
			delete element->previous;
		}

		delete sentinel;
	}

	void Insert (int key)
	{
		Node* newElement = new Node;
		newElement->key = key;

		Node* firstElement = sentinel->next;
		
		sentinel->next = newElement;
		newElement->previous = sentinel;
		newElement->next = firstElement;
		firstElement->previous = newElement;
	}
	void Delete (int key)
	{
		Node* element = sentinel->next;

		//1??¨?????????????????????????????????
		while (element != sentinel && element->key != key)
		{
			element = element->next;
		}

		if (element != sentinel)
		{
			Node* previousElement = element->previous;
			Node* nextElement = element->next;

			previousElement->next = nextElement;
			nextElement->previous = previousElement;

			delete element;
		}
	}
	void DeleteFirst ()
	{
		Node* firstElement = sentinel->next;
		Node* secondElement = firstElement->next;

		if (firstElement != sentinel)
		{
			sentinel->next = secondElement;
			secondElement->previous = sentinel;

			delete firstElement;
		}
	}
	void DeleteLast ()
	{
		Node* lastElement = sentinel->previous;
		Node* lastPreviousElement = lastElement->previous;

		if (lastElement != sentinel)
		{
			sentinel->previous = lastPreviousElement;
			lastPreviousElement->next = sentinel;

			delete lastElement;
		}
	}
	void PrintData ()
	{
		Node* element = sentinel->next;

		while (element != sentinel->previous)
		{
			printf ("%d ", element->key);
			element = element->next;
		}
		printf ("%d\n", sentinel->previous->key);
	}
};

int main ()
{
	DoublyLinkedList list;

	int processCount;

	scanf ("%d", &processCount);

	for (int lp = 0; lp < processCount; lp++)
	{
		char command[20];
		scanf ("%s", command);

		if (command[0] == 'i')
		{
			int key;
			scanf ("%d", &key);
			list.Insert (key);
		}
		else if (command[6] == 'F')
		{
			list.DeleteFirst ();
		}
		else if (command[6] == 'L')
		{
			list.DeleteLast ();
		}
		else
		{
			int key;
			scanf ("%d", &key);
			list.Delete (key);
		}
	}

	list.PrintData ();

	return 0;
}