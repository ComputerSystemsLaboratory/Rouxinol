#include <iostream>

using namespace std;

static const int MAX = 500000;

class BinaryHeap {
private:
    int heap[MAX + 1];
    int size;

    void set()
    {
        int value;
        for(int i = 1; i <= size; i++)
        {
            cin >> value;
            heap[i] = value;
        }
    }

public:
    BinaryHeap(int size)
    {
        this->size = size;
        set();
    }

    int parent(int index)
    {
        return index / 2;
    }

    int left(int index)
    {
        return 2 * index;
    }

    int right(int index)
    {
        return 2 * index + 1;
    }

    void maxHeapify(int root)
    {
        int left_id = left(root);
        int right_id = right(root);

        int largest;
        if(left_id <= size && heap[left_id] > heap[root])
            largest = left_id;
        else
            largest = root;
        if(right_id <= size && heap[right_id] > heap[largest])
            largest = right_id;

        if(largest != root)
        {
            swap(heap[largest], heap[root]);
            maxHeapify(largest);
        }
    }

    void build_max_heap()
    {
        for(int i = size / 2; i >= 1; i--)
            maxHeapify(i);
    }

    void print()
    {
        for(int i = 1; i <= size; i++)
            cout << " " << heap[i];
        cout << endl;
    }
};

int main()
{
    int H_size;
    cin >> H_size;
    BinaryHeap heap(H_size);
    heap.build_max_heap();
    heap.print();
}
