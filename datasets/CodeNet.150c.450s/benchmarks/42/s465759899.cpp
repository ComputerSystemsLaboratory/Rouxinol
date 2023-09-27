#include <cstdio>
#include <cstring>

typedef struct task
{
	int time;
	char name[10];
} task;

struct queue
{
	task container[1000005];
	int front, tail;
} queue;

int main()
{
	int n, runtime;
	queue.front = queue.tail = 0;

	scanf("%d %d", &n, &runtime);
	for (int i = 0; i < n; i++) {
		scanf("%s %d", queue.container[i].name, &queue.container[i].time);
		queue.tail++;
	}

	int timer = 0;
	while (queue.tail - queue.front > 0) { // Not empty
		if (queue.container[queue.front].time > runtime) {
			timer += runtime; // queue.container[queue.front % 100005].time;
			strcpy(queue.container[queue.tail % 1000005].name, queue.container[queue.front % 1000005].name);
			queue.container[queue.tail++ % 1000005].time = queue.container[queue.front++ % 1000005].time -= runtime;
		}
		else {
			timer += queue.container[queue.front % 1000005].time;
			printf("%s %d\n", queue.container[queue.front % 1000005].name, timer);
			queue.front++;
		}
	}

	return 0;
}