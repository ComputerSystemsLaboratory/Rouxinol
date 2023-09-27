#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

struct Node
{
	int key;
	Node *prev, *next;
};

Node *nil;

void init()
{
	nil = (Node *)malloc(sizeof(Node));
	nil->next = nil;
	nil->prev = nil;
}

void insert(int key)
{
	Node *x = (Node *)malloc(sizeof(Node));
	x->key = key;
	x->next = nil->next;
	nil->next->prev = x;
	nil->next = x;
	x->prev = nil;
}

Node* listsearch(int key)
{
	Node *cur = nil->next;
	while(cur != nil && cur->key != key)
	{
		cur = cur->next;
	}
	return cur;
}

void deleteNode(Node *t)
{
	if(t == nil)
	{
		return ;
	}
	t->next->prev = t->prev;
	t->prev->next = t->next;
	free(t);
}

void deleteFirst()
{
	deleteNode(nil->next);
}

void deleteLast()
{
	deleteNode(nil->prev);
}

void deleteKey(int key)
{
	deleteNode(listsearch(key));
}

void print()
{
	int j = 0;
	Node *cur = nil->next;
	while(1)
	{
		if(cur == nil)
		{
			break;
		}
		if(j++ > 0)
		{
			printf(" ");
		}
		printf("%d", cur->key);
		cur = cur->next;
	}
	putchar('\n');
}

int main()
{
	char com[20];
	int n, i, key;
	init();
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%s %d", com, &key);
		if(com[0] == 'i')
		{
			insert(key);
		}
		else
		{
			if(com[6] == 'L')
			{
				deleteLast();
			}
			else if(com[6] == 'F')
			{
				deleteFirst(); 
			}
			else
			{
				deleteKey(key);
			}
		}
	}
	print();
	
	return 0;
}
