#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int value;
    struct node* prev,* next;
}Node;
Node* head;
void Init()
{
    head=(Node*)malloc(sizeof(Node));
    head->next=head;
    head->prev=head;
}

Node* FindNode(int x)
{
	Node*temp=head->next;
	while(temp!=head&&temp->value!=x)
        temp=temp->next;
    return temp;
}
void Insert(int x)
{
	Node*temp=(Node*)malloc(sizeof(Node));
    temp->value=x;
    head->next->prev=temp;
    temp->next=head->next;
    head->next=temp;
    temp->prev=head;
}

void Delete(Node*temp)
{
	if(temp==head)
        return ;
	temp->next->prev=temp->prev;
	temp->prev->next=temp->next;
    free(temp);
}

void DeleteFirst()
{
    Delete(head->next);
}
void DeleteLast()
{
	Delete(head->prev);
}
void DeleteValue(int x)
{
    Delete(FindNode(x));
}
void PrintList()
{
    Node*temp=head->next;
    int flag=0;
    while(1)
    {
        if(temp==head)
            break;
        else
        {
            if(flag++>0)
                printf(" ");
            printf("%d",temp->value);
            temp=temp->next;
        }
    }
    printf("\n");
}
int main()
{
	int n;
	int i;
	scanf("%d",&n);
	char str[12];
	int x;
	Init();
    /*
	while(n--)
	{
		scanf("%s%d",str,&x);
		if(str[0]=='i'){Insert(x);}
		else if(str[0]=='d'&&str[6]=='F')DeleteFirst();
		else if(str[0]=='d'&&str[6]=='L')DeleteLast();
		else if(str[0]=='d'){Delete(FindNode(x));}
	}
    */

	for(i = 0; i < n; i++) {
        scanf("%s %d", str, &x);
        if (str[0] == 'i') {
            Insert(x);
        }
        else if(str[0] == 'd') {
            if(str[6] == 'F')
                DeleteFirst();
            else if(str[6] == 'L')
                DeleteLast();
            else
                DeleteValue(x);
        }
    }
    /*
    Node* temp=head->next;
    while(temp->next!=head)
    {
        printf("%d ",temp->value);
        temp=temp->next;
    }
    printf("%d\n",temp->value);
    */
    PrintList();
	return 0;
}