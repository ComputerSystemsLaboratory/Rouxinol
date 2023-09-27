#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>

using namespace std;

#define MAX_TASK_SIZE 100000

struct Task {
    char name[100];
    int time;
};

Task* Q[MAX_TASK_SIZE+1];
int head, tail, n;

int elaps = 0;

void enqueue(Task* x) {
    Q[tail] = x;
    tail = (tail + 1) % MAX_TASK_SIZE;
}

Task* dequeue() {
    Task* task = Q[head];
    head = (head + 1) % MAX_TASK_SIZE;
    return task;
}

bool isEmpty() {
    return head == tail;
}

void update (int dt) {

    Task* t = dequeue();
    if (t->time > dt) {
        t->time -= dt;
        elaps += dt;
        enqueue(t);
    }
    else {
        elaps += t->time;
        printf("%s %d\n", t->name, elaps);
    }
}

void execute (int dt) {
    while (!isEmpty()) {
        update(dt);
    }
}

int main(){
    int q;
    scanf("%d %d", &n, &q);

    head = 1;
    tail = 1;
    for ( int i = 1; i <= n; i++) {
        char c[100];
        int t;
        scanf("%s", c);
        scanf("%d", &t);
        Task* task = new Task;
        strcpy(task->name, c);
        task->time = t;
        enqueue(task);
    }

    execute(q);

    return 0;
}