#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 1000000

typedef struct p{
	int task;
	char name[100];
}  P;

P newP(int task, char name[100]){
	P *pi;
	pi = (P *)malloc(sizeof(P));

	pi->task = task; 
	for(int i=0;i<100;i++) pi->name[i] = name[i];
	return *pi;
}

P *que;
int start, end;

void push(int task, char name[100]){
	que[end] = newP(task, name);
	end = (end+1)%N;
}

void ppush(P p){
	que[end] = p;
	end = (end+1)%N;
}

P pop(){
	P ans = que[start];
	start = (start+1)%N;
	return ans;
}

int main(){
	que = (P *) malloc(N*sizeof(P));
	start = end = 0;
	int n, q;
	scanf("%d %d", &n, &q);
	for(int i=0;i<n;i++){
		char *name;
		name = (char *) malloc(sizeof(char)* 100);
		int h;
		scanf(" %s %d", name, &h);
		push(h, name);
	}
	int now = 0;
	while(1){
		if(start == end) break;
		P nm = pop();
		if(nm.task <= q){
			now += nm.task;
			printf("%s %d\n", nm.name, now);
		} else {
			now += q;
			nm.task -= q;
			ppush(nm);
		}
	}
	return 0;
}