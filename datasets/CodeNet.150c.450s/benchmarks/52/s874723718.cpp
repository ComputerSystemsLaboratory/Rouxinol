#include<iostream>
#include<malloc.h>
using namespace std;

struct stack{
	int element;
	struct stack *next;
};
int top(struct stack *s){
	return s->element;
}
struct stack* pop(struct stack *s){
	struct stack *p, *q;
	q = s;
	p = s->next;
	free(q);
	s = p;
	return s;
}
struct stack* push(struct stack *s, int x){
	struct stack *p, *q;
	q = s;
	p = (struct stack*)malloc(sizeof(struct stack));
	p->element = x;
	p->next = q;
	s = p;
	return s;
}

int main(){
	struct stack *S=NULL;
	int num;
	while (cin>>num){	
		if (num==0){
			cout<<top(S)<<endl;
			S = pop(S);
		} else{
			S=push(S, num);
		}
	}
	return 0;
}