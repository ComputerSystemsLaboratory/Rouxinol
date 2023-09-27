#include <iostream>
using namespace std;

#define QSIZE 100000
struct Task {
    string name;
    int time;
    Task(string n, int t) : name(n), time(t) {}
    Task() {}
}; 

Task queue[QSIZE+1];
int head, tail;


void enqueue(Task data)
{
    queue[tail] = data;
    tail = (tail + 1) % QSIZE;
}

Task dequeue()
{
    Task res = queue[head];
    head = (head + 1) % QSIZE;
    return res;
}

bool isEmpty()
{
    return head == tail;
}


int main()
{
    int N, Q;
    cin >> N >> Q;

    for (int i=0; i<N; i++) {
        string name;
        int time;
        cin >> name >> time;
        enqueue(Task(name, time));
    }

    int time = 0;
    while (!isEmpty()) {
        Task t = dequeue();
        if (t.time > Q) {
            enqueue(Task(t.name, t.time - Q));
            time += Q;
        } else {
            time += t.time;
            cout << t.name << " " << time << endl;
        }
    }
}