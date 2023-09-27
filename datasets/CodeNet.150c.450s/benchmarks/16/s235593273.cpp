#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <string>
#define N 20000

using namespace std;

struct Point {
	int start, end;
	int qty;
};

Point newP(int start, int end, int qty){
	Point *p = new Point;
	p->start = start; p->end = end; p->qty = qty;
	return *p;
}

int *stack1;
int end1;
Point *stack2;
int end2;
Point NIL = newP(-1,-1,-1);


void init(){
 	stack1 = new int[N];
 	stack2 = new Point[N];
 	end1 = end2 = 0;
}

void push1(int i){
	stack1[end1] = i;
	end1++;
}
int pop1(){
	if(end1 <= 0) return -1;
	end1--;
	return stack1[end1];
}
void push2(Point p){
	stack2[end2] = p;
	end2++;
}
Point pop2(){
	if(end2 <= 0) return NIL;
	end2--;
	return stack2[end2];
}
void st(){
	if(end2 <= 1) return;
	int now = end2-2;
	Point p = stack2[end2-1];
	while(1){
		if( now>=0 && p.start < stack2[now].start && stack2[now].end < p.end){
			p.qty += stack2[now].qty;
			now--;
		} else {
			break;
		}
	}
	stack2[now+1] = p;
	end2 = now+2;
}

int main(){
	init();
	int sum = 0;
	string inp;
	getline(cin, inp);
	for(int i=0;i<inp.size();i++){
		if(inp[i] == '\\'){
			push1(i);
		} else if(inp[i] == '/'){
			int b = pop1();
			if(b != -1){
				sum += i-b;
				push2(newP(b, i, i-b));
				st();
			}
		}
	}
	printf("%d\n%d", sum, end2);
	if(end2 != 0){
		printf(" ");
		for(int i=0;i<end2;i++){
			printf("%d", stack2[i].qty);
			if(i != end2-1) printf(" ");
		}
	}
	printf("\n");
	return 0;
}