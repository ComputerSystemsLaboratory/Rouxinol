#include<cstdio>
#include<cstdlib>
using namespace std;
struct Node {
	int key;
	Node *prev, *next;
};
Node *nil;

void init(){
 	nil = (Node *)malloc(sizeof(Node));
 	nil -> next = nil;
 	nil -> prev = nil;
}

void insert(int key){
	Node *x = (Node *)malloc(sizeof(Node));
	x -> key = key;
	x -> next = nil -> next;
	nil -> next -> prev = x;
	nil -> next = x;
	x -> prev = nil;
}
Node *listSearch(int key){
	Node *x = nil->next;
	while(x != nil && x -> key != key) x = x -> next;
	return  x;
}
void deleteNode(Node *t){
	if(t == nil) return;
	t -> prev -> next = t -> next;
	t -> next -> prev = t -> prev;
	free(t);
}
void deleteFirst(){
	deleteNode(nil -> next);
}

void deleteLast(){
	deleteNode(nil -> prev);
}

void printList(){
	Node *t = nil -> next;
	while(t != nil){
		printf("%d", t -> key);
		if(t -> next != nil) printf(" ");
		t = t -> next;
	}
	printf("\n");
}

int main(){
	int n, key;
	scanf("%d", &n);
	init();
	while(n--){
		char s[20];
		scanf("%s", s);
		if(s[0] == 'i'){
			scanf("%d", &key);
			insert(key);
		}
		else{
			if(s[6] == 'F') deleteFirst();
			else if(s[6] == 'L') deleteLast();
			else{
				scanf("%d", &key);
				deleteNode(listSearch(key));
			}
		}
		//printList();
	} 
	printList();
	
	return 0;
}
