#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>

using namespace std;

struct node {
	int key;
	node *next, *prev;
};

class list {
	int length;
public:
	node *nil;
	list(): length(0) {
		nil=new node;
		nil->next=nil;
		nil->prev=nil;
	} 

	int len(){  return length;  }

	void insert(int);
	void del(node*);
	void dell();
	void delf();
	node* search(int);

	
};

void list::insert(int k)
{
	node* nx=new node;

	if( !nx ){
		cout<<"MEMORY ALLOCATION ERROR!"<<endl;
		exit(1);
	}

	length++;


	nx->next=nil->next;
	nx->prev=nil;
	nil->next=nx;
	nx->next->prev=nx;

	nx->key=k;

	
}	

void list::del(node *dn) 
{

	if( dn==nil ){
		return;
	}else{
		dn->prev->next=dn->next;
		dn->next->prev=dn->prev;

		delete dn;
	}
		
		
	
}

void list::dell()
{
	del(nil->prev);
}

void list::delf()
{
	del(nil->next);
}

void show(list l) 
{
	for( node *t=l.nil->next; t!=l.nil; t=t->next ){
		if( t->next != l.nil )
			cout<<t->key<<' '<<flush;
		else
			cout<<t->key<<endl;
	}
}

node *list::search(int k) 
{
	node *t=nil->next;
	while( t->key!=k && t!=nil ){
		t=t->next;
	}

	return t;
}
int main() 
{

	long n;cin>>n;
	char com[20];
	int x;
	list dll;

	for( long i=0; i<n; i++ ) {
		scanf("%s",com);

		if( !strcmp(com,"insert") ){
			scanf("%d",&x);
			dll.insert(x);
		}else if( !strcmp(com,"delete") ){
			scanf("%d",&x);
			dll.del(dll.search(x));
		}else if( !strcmp(com,"deleteFirst") ){
			dll.delf();
		}else if( !strcmp(com,"deleteLast") ){
			dll.dell();
		}
		
	}

	show(dll);
}