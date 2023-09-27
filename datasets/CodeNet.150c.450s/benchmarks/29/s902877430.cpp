#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

class ele
{
public:
	ele();
	int key;
	ele *prev, *next;
};

ele::ele(){}

ele *null = new ele();

void insert(int n)
{
	ele *node = new ele();
	node->key = n;
	node->prev = null;
	node->next = null->next;
	null->next->prev = node;
	null->next = node;
}

ele* search(int n)
{
	ele *ser = new ele();
	ser = null->next;
	while (ser != null&&ser->key != n)
	{
		ser = ser->next;
	}
	return ser;
}

void adelete(ele* a)
{
	if (a == null)return;
	a->prev->next = a->next;
	a->next->prev = a->prev;
	delete a;
}

void searchdelete(int n)
{
	adelete(search(n));
}

void deletefirst()
{
	adelete(null->next);
}

void deletelast()
{
	adelete(null->prev);
}
	
int main()
{
	null->prev = null->next = null;
	int n, i, a;
	char c[11];
	string str;
	ele *e = new ele();
	e = null;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s",c);
		str=c;
		if (str == "deleteLast")deletelast();
		else if (str == "deleteFirst")deletefirst();
		else if (str == "insert") { scanf("%d", &a); insert(a); }
		else { scanf("%d", &a); searchdelete(a); }
	}
	e = e->next;
	while (e != null->prev)
	{
		printf("%d ", e->key);
		e = e->next;
	}
	printf("%d\n", e->key);
    return 0;
}