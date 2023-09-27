#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>


using namespace std;

struct node
{
	node *next;
	node *prev;
	int num;
};


node *head;


void initialize()
{
	head = (node *)malloc( sizeof(node) );
		head->next = head;
		head->prev = head;

}


void insert(int m)
{
	node *p = (node *)malloc( sizeof(node) );

	p->num = m;
	p->next = head->next;
	head->next->prev = p;
	p->prev = head;
	head->next = p;
}

void del(node *p)
{
	p->prev->next = p->next;
	p->next->prev = p->prev;

	free(p);

}

void deletefirst()
{
	del(head->next);
	/*head->next->next->prev = head;
	free(head->next);
	head->next = head->next->next;*/
}

void deletelast()
{
	del(head->prev);
	/*head->prev->prev->next= head;
	free(head->prev);
	head->prev = head->prev->prev;*/
}

node* search(int key,int count)
{
	node* cur = (node *)malloc( sizeof(node) );
	cur = head->next;

	for(int i = 0; i < count; i++)
	{
		if (cur->num == key)
		{
			return cur;
		}
		cur = cur->next;
	}

    return NULL;
}

int main()
{
	node *pp = (node *)malloc( sizeof(node) );
	int n;
	int key;
	char str[12];

	int count = 0;

	initialize();

	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%s", str);

		if (str[6] == 'F')
		{
			deletefirst();
			count--;

		}else if (str[6] == 'L')
		{
			deletelast();
			count--;

		}else
		{
			scanf("%d", &key);

			if (str[0] == 'i')
			{
				insert(key);
				count++;

			}else if (str[0] == 'd')
			{
				pp = search(key, count);
				if (pp != NULL)
				{
					del(pp);
					count--;
				}
				
			}
		}

	}

	pp = head->next;

	for(int i = 1; i <= count; i++)
	{
		if (i == count)
		{
			printf("%d\n", pp->num);
		}
		else
		{
			printf("%d ", pp->num);
		}
		pp = pp->next;
	}




	return 0;
}