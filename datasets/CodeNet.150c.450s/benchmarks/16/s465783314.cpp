#include <cstdio>
#include <cstdlib>
#include <cstring>
struct Node{
	int x;
	int y;
	int type;
	int S;
	Node *next, *prev;
};


Node *nil;

Node *listSearch(int key_y, int type) {
	Node *cur = nil->prev;
	while (cur != nil && ((cur->y != key_y || cur->type != type))){
		cur = cur->prev;
	}
	return cur;
}

int puddleCount(){
	Node *cur = nil->prev->prev;
	int count=0;
	bool puddle_flag = false;
	nil->prev->y ++;

	while (cur != nil && cur->y != 0){
		cur->y += 1;
		cur = cur->prev;
	}
	cur = cur->next->next;
	while (cur != nil){
		if (cur->y ==-1){
			puddle_flag = true;
		}
		if (puddle_flag && cur->y==0){
			count +=1;
			puddle_flag = false;
		}
		cur = cur->next;
	}
	return count;
}

void init(){
	nil = (Node *)malloc(sizeof(Node));
	nil->next = nil;
	nil->prev = nil;
	nil->x = -1;
	nil->y = 0;
	nil->type=0;
	nil->S = 0;
}

void insert(int x, int y, int type, int S){
	Node *n  = (Node *)malloc(sizeof(Node));
	n->x = x;
	n->y = y;
	n->type = type;
	n->S = S;
	n->prev = nil->prev;
	n->next = nil;
	nil->prev->next = n;
	nil->prev = n;

}

int main(){
	char str[20000];
	int i, k, S, y;
	bool puddle_flag = false;
	Node *puddle_end, *cur;
	scanf("%s", str);
	i=k=S=0;
	init();
	
	while(str[i]!='\0'){
		if(str[i]=='\\'){
			y = nil->prev->y;
			insert(i, y-1, -1, S);
			if(!puddle_flag) puddle_flag=true;
		}
		if(puddle_flag && str[i]=='/'){
			y = nil->prev->y;
			S += i-listSearch(y, -1)->x;
			insert(i, y+1, 1, S);
			if(nil->prev->y == 0){
				k++;
				puddle_flag = false;
			}
		}
		i++;
	}

	puddle_end = nil->prev;
	while(puddle_end->type != 1 && puddle_end != nil){
		puddle_end = puddle_end->prev;
	}
	nil->prev = puddle_end;
	puddle_end->next = nil;
	while(nil->prev->y!=0){
		k += puddleCount();
	}
	printf("%d\n", S);
	printf("%d", k);
	
	cur = nil->next->next;
	S=0;
	for(i=0;i<k;i++){
		while(cur->y != 0 || cur->type != 1){
			cur = cur->next;
		}
		printf(" %d",cur->S - S);
		S = cur->S;
		cur = cur->next;
	}
	printf("\n");
	return 0;
}