#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define LEN 100005

typedef struct pp{
	char name[100];
	int t;
}P;

P Q[LEN];
int head, tail, n,total;

void enqueue(P x){
	Q[tail] = x;
	tail = (tail + 1) % LEN;
}

P dequeue(){
	P x = Q[head];
	head = (head + 1) % LEN;
	return x;
}

int roundrobin(int rest,int q){
	if (q < rest){
		total += q;
		rest -= q;
	}
	else{
		total += rest;
		rest = 0;
	}
	return rest;
}

int main(){
	total = 0;
	P u;
	int q;
	scanf("%d %d", &n,&q);
	for(int i=1;i<=n;i++){
		scanf("%s %d", Q[i].name, &Q[i].t);
	}
	head = 1;
	tail = n + 1;
	while (head != tail){
		u = dequeue();
		u.t = roundrobin(u.t, q);
		if (u.t > 0){
			enqueue(u);
		}
		else{
			printf("%s %d\n", u.name, total);
		}
	}
	return 0;
}