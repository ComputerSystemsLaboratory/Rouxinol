#include <cstdio>
#define NUM 1000001 * 100
typedef struct process {
    char name[11];
    int time;
} Process;


Process queue[NUM];
int head=0, tail = 0;
void enqueue(Process process) {
    queue[tail] = process;
    tail++;
}

Process dequeue() {
    Process h = queue[head];
    head++;
    return h;
}

int size() {
    return tail - head;
}

int main()
{
    int n, q;
    scanf("%d %d", &n, &q);
    for (int i=0; i<n; i++) {
        Process process;
        scanf("%s %d", process.name, &process.time);
        enqueue(process);
    }
    unsigned long sum_time = 0;
    while (1 < size()) {
        Process tgt = dequeue();
        if (tgt.time <= q) {
            sum_time += (unsigned long)tgt.time;
            printf("%s %lu\n", tgt.name, sum_time);
        } else {
            sum_time += q;
            tgt.time -= q;
            enqueue(tgt);
        }
    }
    Process tgt = dequeue();
    sum_time += (unsigned long)tgt.time;
    printf("%s %lu\n", tgt.name, sum_time);
}