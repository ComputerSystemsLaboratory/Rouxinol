#include<stdio.h>
#define MAX 100000

struct Queue{
	char s[15];
	int time;
};

int head=0,tail=0;
Queue name[100000];

int FULL(){
	return head == (tail+1)%MAX;
}

int EMPTY(){
	return head == tail;
}

void enqueue(Queue x){
	name[tail] = x;
	tail=(tail + 1)%MAX;
}

Queue dequeue(){
	Queue x =name[head];
	head = (head + 1)%MAX;
	return x;
}

int main(){
	int i,n,j,k,q;
	scanf("%d",&n);
	scanf("%d",&q);
	getchar();
	int cur=0;
	for(i=0;i<n;i++){
		scanf("%s",name[i].s);
		scanf("%d",&name[i].time);
		tail++;
		getchar();
	}
	while(head != tail){
		Queue u=dequeue();
		if(u.time>q){
			u.time-=q;
			cur+=q;
			enqueue(u);
		}
		else{
			cur+=u.time;
			printf("%s %d\n",u.s,cur);
		}
	}
} 
