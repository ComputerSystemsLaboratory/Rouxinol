#include <iostream>
#include <queue>
#include <string>
using namespace std;

void insert(priority_queue<int> &q, int k)
{
    q.push(k);
    return;
}

int extractMax(priority_queue<int> &q)
{
    if (q.empty())
    {
        return -1;
    }
    int max = q.top();
    q.pop();
    return max;
}

int main()
{
    string cmd;
    priority_queue<int> Q;

    while (cin >> cmd && cmd != "end")
    {
        if (cmd == "insert")
        {
            int k;
            cin >> k;
            insert(Q, k);
        }
        else if (cmd == "extract")
        {
            int result = extractMax(Q);
            printf("%d\n", result);
        }
    }
}
