#include <iostream>
#include <cstdio>

using namespace std;

#define left(x)  (2*(x)+1)
#define right(x) (2*(x)+2)

void maxHeapify(int *heap, int i, int last_index)
{
    int l = left(i);
    int r = right(i);
    int largest = i;

    if (l <= last_index && heap[l] > heap[largest])
        largest = l;
    if (r <= last_index && heap[r] > heap[largest])
        largest = r;

    if (largest != i) {
        swap(heap[i], heap[largest]);
        maxHeapify(heap, largest, last_index);
    }
}

void buildMaxHeap(int *heap, int last_index)
{
    for (int i = (last_index - 1) / 2; i >= 0; i--)
        maxHeapify(heap, i, last_index);
}

void print_heap(int *heap, int h)
{
    for (int i = 0; i < h; i++)
        printf(" %d", heap[i]);
    puts("");
}

int main(void)
{
    int h;
    cin >> h;
    int heap[h];
    for (int i = 0; i < h; i++) 
        cin >> heap[i];

    buildMaxHeap(heap, h - 1);

    print_heap(heap, h);

    return 0;
}