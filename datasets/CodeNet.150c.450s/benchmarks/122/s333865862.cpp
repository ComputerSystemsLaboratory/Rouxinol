#include <iostream>
#include <string>

using namespace std;

#define MAX 2000000
#define INFINITY (1<<30)

class PriorityQueue
{
    long long H[MAX + 1];
    int size;

public:
    PriorityQueue()
    {
        size = 0;
    }

    void insert(long long k)
    {
        size++;
        H[size] = -INFINITY;
        heapIncreaseKey(size, k);
    }

    void heapIncreaseKey(int i, long long k)
    {
        if(H[i] > k)
        {
            return;
        }

        H[i] = k;

        while(i > 1 && H[i] > H[i / 2])
        {
            swap(H[i],H[i/2]);
            i = i / 2;
        }
    }

    long long extractMax()
    {
        if (size < 1)
        {
            return -INFINITY;
        }

        long long max = H[1];
        H[1] = H[size];
        size--;
        maxHeapify(1);
        return max;
    }

    void maxHeapify(int i)
    {
        int l, r, largest;

        l = i * 2;
        r = i * 2 + 1;

        largest = i;

        if (l <= size &&  H[l] > H[i])
        {
            largest = l;
        }

        if (r <= size &&  H[r] > H[largest])
        {
            largest = r;
        }

        if (largest != i)
        {
            swap(H[i],H[largest]);
            maxHeapify(largest);
        }
    }
};

int main()
{
    PriorityQueue *pq = new PriorityQueue();

    string message;

    while (cin >> message)
    {
        //cout << message << endl;

        if (message == "end")
        {
            break;
        }

        if (message == "insert")
        {
            long long key;
            cin >> key;
            pq->insert(key);
        }
        else if (message == "extract")
        {
            cout << pq->extractMax() << endl;
        }
    }
}
