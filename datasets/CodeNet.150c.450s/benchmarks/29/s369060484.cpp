#include <cstdio>
#include <cstdlib>
typedef struct Node
{
	int key;
	struct Node* prev;
	struct Node* next;
} Node;

Node* head;

void initNode()
{
	head = (Node*)malloc(sizeof(Node));
	head->prev=head;
	head->next=head;
}

void insertFirst(int key)
{
	Node* x=(Node*)malloc(sizeof(Node));
	x->key=key;
	x->next=head->next;
	head->next->prev=x;
	x->prev=head;
	head->next=x;
}

Node* listSearch(int key)
{
	Node* current=head->next;
	while(current!=head&&current->key!=key)
	{
		current=current->next;
	}
	return current;
}

void deleteFirst()
{
	Node* t=head->next;
	head->next=t->next;
	t->next->prev=head;
	free(t);
}

void deleteLast()
{
	Node* t=head->prev;
	head->prev=t->prev;
	t->prev->next=head;
	free(t);
}

void deleteNode(int key)
{
	Node* t=listSearch(key);
	if(t==head) return;
	t->prev->next=t->next;
	t->next->prev=t->prev;
	free(t);
}

int main()
{
	initNode();
	int n;
	scanf("%d",&n);
	char com[20];
	int x;
	for(int i=0; i<n; i++)
	{
		scanf("%s",com);
		if(com[6]=='\0')
		{
			scanf("%d",&x);
			if(com[0]=='i')
			{
				insertFirst(x);
			}
			else if(com[0]=='d')
			{
				deleteNode(x);
			}
		}
		else
		{
			if(com[6]=='F')
			{
				deleteFirst();
			}
			else if(com[6]=='L')
			{
				deleteLast();
			}
		}
	}
	Node* temp=head->next;
	int isf=0;
	while(temp!=head)
	{
		if(isf++>0) printf(" ");
		printf("%d",temp->key);
		temp=temp->next;
	}
	printf("\n");
	return 0;
}