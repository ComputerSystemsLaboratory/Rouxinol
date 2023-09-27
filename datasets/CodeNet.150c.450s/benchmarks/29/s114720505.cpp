/*
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_C
created at 31.8.2015 by charis 
last edited at 1.9.2015 by charis
*/

#include<cstdio>
#include<cstdlib>
#include<string>
using namespace std;

struct node{
	unsigned int key; 
	struct node *next;
	struct node *prev; 
}; 

typedef struct node* NodePointer;

NodePointer nil;

void init(){
	nil = new struct node;
	nil->next = nil;
	nil->prev = nil;
} 
void insert(int key){
	NodePointer x; 
	x = new struct node; 
	x->key = key; 
	
	x->next = nil->next ;
	nil->next->prev = x ;
	nil->next = x ;
	x->prev = nil;
} 
void deleteFirst(){
	NodePointer z = nil->next; 
	if ( z == nil ) return;
	NodePointer y = z->next ;
	
	nil->next = y ;
	y->prev = nil ; 
	delete[] z;
} 
void deleteLast(){
	NodePointer x = nil->prev; 
	if ( x == nil ) return; 
	NodePointer y = x->prev;
	
	y->next = nil ;
	nil->prev = y;
	delete[] x;
} 
void del(int key){
	NodePointer y = nil->next ;
	while(1){
		if (y == nil) break;
		if (y->key == key) {
			NodePointer z = y->prev;
			NodePointer x = y->next;
			z->next = x;
			x->prev = z;
				
			delete[] y;	
			break;
		}			
		else {
			NodePointer t = y->next;
			y = t;
		}
	}
} 
void printList(){
	NodePointer cur = nil->next; 
	while(1){ 	
		if (cur->next == nil){
			printf("%d\n", cur->key );
			break;
		} 
		printf("%d ", cur->key );
		cur = cur->next; 
	} 
} 

int main(){ 
	int key, n, i; 
	char com[10]; 
	scanf("%d", &n); 
	init();
	for ( i = 0; i < n; i++ ){
		scanf("%s", &com); 
		if ( com[0] == 'i' ) {
			scanf("%d", &key) ;
			insert(key);
		}			
		else if ( com[6] == 'F' ) deleteFirst();
		else if ( com[6] == 'L' ) deleteLast(); 
		else {
			scanf("%d", &key) ;
			del(key) ;

		}
	}
	
	printList();
	return 0; 
}