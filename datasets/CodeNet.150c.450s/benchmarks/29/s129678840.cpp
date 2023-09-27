#include<cstdio>
#include<cstdlib>
#include<cstring>

struct node{
	int key;
	node *next,*prev;
};

node *nil;

node* ls(int key){
	node *cur=nil->next;
	while(cur!=nil&&cur->key!=key){
		cur=cur->next;
	}
	return cur;
}

void init(){
	nil=(node*)malloc(sizeof(node));
	nil->next=nil;
	nil->prev=nil;
}

void pri(){
	node *cur=nil->next;
	int isf=0;
	while(1){
		if(cur==nil)break;
		if(isf++>0)printf(" ");
		printf("%d",cur->key);
		cur=cur->next;
	}
	printf("\n");
}

void deln(node *t){
	if(t==nil)return;
	t->prev->next=t->next;
	t->next->prev=t->prev;
	free(t);
}

void delf(){
	deln(nil->next);
}

void dell(){
	deln(nil->prev);
}

void delk(int key){
	deln(ls(key));
}

void insert(int key){
	node *x=(node *)malloc(sizeof(node));
	x->key=key;
	x->next=nil->next;
	nil->next->prev=x;
	nil->next=x;
	x->prev=nil;
}

int main(){
	int key,n,i;
	int size=0;
	char com[20];
	int np=0,nd=0;
	scanf("%d",&n);
	init();
	for(i=0;i<n;i++){
		scanf("%s%d",com,&key);
		if(com[0]=='i'){insert(key);np++;size++;}
		else if(com[0]=='d'){
			if(strlen(com)>6){
				if(com[6]=='F')delf();
				else if(com[6]=='L')dell();
			}else{
				delk(key);nd++;
			}
			size--;
		}
	}
	
	pri();
	return 0;
}
