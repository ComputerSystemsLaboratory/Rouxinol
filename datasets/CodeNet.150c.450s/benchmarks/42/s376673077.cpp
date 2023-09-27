#include <stdio.h>
#include <stdlib.h>
#define LEN 100005

typedef struct Process
{
	char name[15];
	int time;
}Process;

Process Queue[LEN];
int head = 0, tail = 0;

Process dequeue()
{
	Process p = Queue[head];
	head = ++head == LEN ? 0 : head;

	return p;
}

void enqueue(Process p)
{
	Queue[tail] = p;
	tail = ++tail == LEN ? 0 : tail;
}

int isQueueEmpty() 
{
	return head == tail;
}


int main()
{
	int N, Q;
	scanf("%d %d", &N, &Q);

	for (int i = 0; i < N; i++)
	{
		scanf("%s %d", Queue[i].name, &Queue[i].time);
	}
	head = 0;
	tail = N;

	int timeSum = 0;
	while (!isQueueEmpty())
	{
		Process p = dequeue();
		if (p.time <= Q)
		{
			printf("%s %d\n", p.name, timeSum += p.time);
		}
		else
		{
			p.time -= Q;
			enqueue(p);
			timeSum += Q;
		}
	}

	return 0;
}