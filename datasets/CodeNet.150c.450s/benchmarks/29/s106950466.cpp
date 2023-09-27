#include<cstdio>
#include<cstdlib>
#include<cstring>

typedef struct list{
	int key;
	list *prev,*next;
}list;


list *nil;

void Insert(int num){
	list *tmp = new list;
	tmp->key = num;
	
	tmp->next = nil->next;
	tmp->prev = nil;
	
	tmp->next->prev = tmp ;
	nil->next = tmp;
}

void Delete(list *p){
	p->prev->next = p->next;
	p->next->prev = p->prev;
	
	delete p;
}

void Delete(int num){
	list *count = nil;
	while(count->next!=nil){
		count = count->next;
		if(count->key==num){
			Delete(count);
			break;
		}
	}
}

void DeleteFirst(){
	Delete(nil->next);
}

void DeleteLast(){
	Delete(nil->prev);
}



int main(){
	nil = new list;
	nil->prev = nil-> next = nil;
	
	int n;
	scanf("%d",&n);
	getchar();
	
	
	for(int i=0;i<n;i++){
		char input[32];
		fgets(input,32,stdin);
		
		char *order,*num;
		order = strtok(input," ");
		num = strtok(NULL," ");
		
		if(strcmp(order,"insert")==0){
			Insert(atoi(num));
		}else if(strcmp(order,"delete")==0){
			Delete(atoi(num));
		}else if(strcmp(order,"deleteFirst\n")==0){
			DeleteFirst();
		}else if(strcmp(order,"deleteLast\n")==0){
			DeleteLast();
			
		}
		
	}
	
	for(list *i = nil;i->next!=nil;i=i->next){
		if(i!=nil){
			printf(" ");
		}
		printf("%d",i->next->key);
	}
	printf("\n");
	
	
	
	
}