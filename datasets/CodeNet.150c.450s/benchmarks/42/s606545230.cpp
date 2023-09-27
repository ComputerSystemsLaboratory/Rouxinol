#include <cstdio>
#include <cstring>

typedef struct{
	char name[10];
	int time;
}QUEUE;

QUEUE q[1000000];
int head, tail;

void enqueue(char *name, int time){
	int len = strlen(name);
	for(int i = 0; i < len; i++){
		q[tail].name[i] = name[i];
	}
	q[tail].time = time;
	tail = (tail+1) % 1000000;
}

QUEUE *dequeue(){
	head = (head + 1) % 1000000;
	if(head == 0){
		return &q[999999];
	}
	return &q[head-1];
}

int main(){
	int n, q;
	char name[10];
	int time;
	QUEUE *queue;
	
	scanf("%d %d", &n, &q);
	for(int i = 0; i < n; i++){
		scanf("%s %d", name, &time);
		enqueue(name, time);
	}
	time = 0;
	while(tail != head){
		queue = dequeue();
		queue->time -= q;
		time += q;
		if(queue->time <= 0){
			time += queue->time;
			printf("%s %d\n", queue->name, time);
		}else {
			enqueue(queue->name, queue->time);
		}
	}
	return 0;
}