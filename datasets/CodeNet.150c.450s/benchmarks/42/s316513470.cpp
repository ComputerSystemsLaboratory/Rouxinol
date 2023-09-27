//
// Created by Nivras on 2017/5/14.
//

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
using namespace std;

class Task {
public:
    int times;
    char name[10];

    void read();
};

void Task::read() {
    scanf("%s%d", name, &times);
}

class TaskQueue {
public:
    Task data[101000];
    const int MAXLEN = 100100;
    int head;
    int tail;

    TaskQueue();
    void push(Task element);
    Task front();
    bool isEmpty();
};

TaskQueue::TaskQueue() {
    memset(data, 0, sizeof(data));
    head = tail = 0;
}

void TaskQueue::push(Task element) {
    data[tail] = element;
    tail = (tail + 1) % MAXLEN;
}

Task TaskQueue::front() {
    Task result = data[head];
    head = (head + 1) % MAXLEN;
    return result;
}

bool TaskQueue::isEmpty() {
    return head == tail;
}

int main()
{
    int n, pertime;
    scanf("%d%d", &n, &pertime);
    TaskQueue queue;
    for (int i = 0; i < n; i++) {
        Task tempTask;
        tempTask.read();
        queue.push(tempTask);
    }
    int nowtime = 0;
    while (!queue.isEmpty()) {
        Task nowTask = queue.front();
        if (nowTask.times <= pertime) {
            nowtime += nowTask.times;
            printf("%s %d\n", nowTask.name, nowtime);
        }
        else {
            nowTask.times -= pertime;
            nowtime += pertime;
            queue.push(nowTask);
        }
    }
    return 0;
}