#include <iostream>

using namespace std;

static const int MAX = 250;

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

    void print()
    {
        for(int i = 1; i <= size; i++)
        {
            cout << "node " << i << ": key = " << heap[i] << ", ";
            int parent_id = parent(i);
            int left_id = left(i);
            int right_id = right(i);
            if(parent_id <= size && parent_id >= 1)
                cout << "parent key = " << heap[parent_id] << ", ";
            if(left_id <= size && left_id >= 1)
                cout << "left key = " << heap[left_id] << ", ";
            if(right_id <= size && right_id >= 1)
                cout << "right key = " << heap[right_id] << ", ";
            cout << endl;
        }
    }
};

int main()
{
    int H_size;
    cin >> H_size;
    BinaryHeap heap(H_size);
    heap.print();
}
