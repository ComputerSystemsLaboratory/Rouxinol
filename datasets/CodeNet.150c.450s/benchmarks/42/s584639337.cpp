#include <iostream>
#include <algorithm>

#define MAX 100005

using namespace std;

struct process{
    int time;
    string name;
};

class my_queue{
private:
    int head, tail;
    process queue[MAX];


public:
    my_queue()
    {
        head = 0;
        tail = 0;
    }

    bool isEmpty()
    {
        return head == tail;
    }

    bool isFull()
    {
        return head == (tail + 1) % MAX;
    }

    void enqueue(process n)
    {
        if(isFull())
        {
            cout << "Queue is full." << endl;
            return;
        }
        queue[tail++] = n;

        if(tail == MAX) tail = 0;

        return;
    }

    process dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue is empty." << endl;
            exit(-1);
        }
        
        process ret = queue[head];

        if(head+1 == MAX) head = 0;
        else head++;

        return ret;
    }
};

int main(void)
{
    my_queue queue;
    process proc;
    int n, q;
    int time = 0;

    cin >> n >> q;
    for(int i = 0; i < n; i++)
    {
        cin >> proc.name >> proc.time;
        queue.enqueue(proc);
    }

    while(!queue.isEmpty())
    {
        proc = queue.dequeue();
        if(proc.time <= q)
        {
            time += proc.time;
            cout << proc.name << " " << time << endl;
        }
        else
        {
            proc.time = proc.time - q;
            queue.enqueue(proc);
            time += q;
        }
    }

    return 0;
}