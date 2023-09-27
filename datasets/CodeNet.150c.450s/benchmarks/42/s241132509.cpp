#include<cstdio>
#include<iostream>
using namespace std;

int allTime;

struct Data{
	char name[10];
	int time;
};

Data Q[100000];
int head,tail;
int MAX;

void init(int n){
	head=tail=allTime=0;
	MAX = n+1;
}

bool isEmpty(){
	return head==tail;
}

bool isFull(){
	return head == (tail+1)%MAX;
}

void enqueue(Data D){
	if(tail==MAX){
		tail=0;
	}
	Q[tail] = D;
	tail++;
}

Data dequeue(){
	Data D;
	D = Q[head];
	head++;
	if(head==MAX){
		head=0;
	}
	return D;
}

int main(){
	int n,q;
	scanf("%d%d",&n,&q);
	init(n);
	for(int i=0;i<n;i++){
		Data T;
		scanf("%s",T.name);
		scanf("%d",&T.time);
		enqueue(T);
	}
	
	while(!isEmpty()){
		Data T;
		T = dequeue();
		
		
		if(T.time > q){
			T.time -= q;
			allTime += q;
			enqueue(T);
		}else{
			allTime += T.time;
			printf("%s ",T.name);
			cout<<allTime<<endl;
		}
		
	}
	
	return 0;
}