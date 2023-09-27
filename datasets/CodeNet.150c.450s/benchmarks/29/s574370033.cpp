#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

struct node {
	int key;
	node *next, *prev;
};

class list {
	int length;
public:
	node *head, *tail;
	list(): length(0) {
		head=new node;  //????????§??????????¢???????????????¨??????????????????????????¨??????????????????????????§????????¢???????¢?????????????????????????
		tail=new node;
		head->next=tail;
		head->prev=NULL;
		tail->next=NULL;
		tail->prev=head;
	} 

	int len(){  return length;  }

	void insert(int);
	void del(int);
	void dell();
	void delf();

	
};

void list::insert(int x)
{
	node* nx=new node;

	if( !nx ){
		cout<<"MEMORY ALLOCATION ERROR!"<<endl;
		exit(1);
	}

	length++;


	nx->next=head->next;
	nx->prev=head;
	head->next->prev=nx; 
	head->next=nx;
	nx->key=x;

	
}	

void list::del(int x)   //???????????????????????????????????????!!
{
	node *t=head;
	while( t->next != tail ) {
		t=t->next;
		if( t->key == x ){
			t->prev->next=t->prev->next->next;
			t->next->prev=t->next->prev->prev;

			delete t;


			



			length--;

			return;
		}
	}
}

void list::dell()
{
	if( head->next==tail )
		return;
	node *d=tail->prev;

	tail->prev->prev->next=tail;
	tail->prev=tail->prev->prev;


	delete d;

	length--;
}

void list::delf()
{
	if( head->next==tail )
		return;
	node *d=head->next;

	head->next->next->prev=head;
	head->next=head->next->next;

	delete d;
	length--;
}

void show(list l) 
{
	for( node *t=l.head->next; t !=l.tail; t=t->next ){
		if( t->next != l.tail )
			cout<<t->key<<' '<<flush;
		else
			cout<<t->key<<endl;
	}
}
int main() 
{

	long n;cin>>n;
	char com[20];
	int x;
	list dll;

	for( long i=0; i<n; i++ ) {
		scanf("%s",com);
		
		if( com[0]=='i' ){
			scanf("%d",&x);
			dll.insert(x);
		}else if( com[0]=='d' && com[6]=='F' )
			dll.delf();
		else if( com[0]=='d' && com[6]=='L' )
			dll.dell();
		else{
			scanf("%d",&x);
			dll.del(x);
		}
	}

	show(dll);
}