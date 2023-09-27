#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using namespace std;

#define LEN 100005

typedef struct pp
{
    char name[100];
    int t;
} P;

class queue
{
public:
    P Q[LEN];
    int head;
    int tail;
    queue()
    {
        head = 0;
        tail = 0;
    }
    ~queue() {}
    bool isEmpty()
    {
        return head == tail;
    }
    bool isFull()
    {
        return head == (tail + 1) % LEN;
    }
    void enqueue(P x)
    {
        Q[tail] = x;
        tail = (tail + 1) % LEN;
    }
    P dequeue()
    {
        P x = Q[head];
        head = (head + 1) % LEN;
        return x;
    }
};

int main()
{
    queue *que = new queue;
    int n, q;
    int elaps = 0;
    int c;
    P u;
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
    {
        scanf("%s", que->Q[i].name);
        scanf("%d", &que->Q[i].t);
    }

    que->head = 1;
    que->tail = n + 1;
    while (que->head != que->tail)
    {
        u = que->dequeue();
        c = std::min(q, u.t);
        u.t -= c;
        elaps += c;
        if (u.t > 0)
            que->enqueue(u);
        else
        {
            printf("%s %d\n", u.name, elaps);
        }
    }

    delete que;

    return 0;
}
