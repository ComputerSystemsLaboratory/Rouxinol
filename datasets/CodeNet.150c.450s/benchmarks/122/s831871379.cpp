#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

#define MAX_DATA_NUM 2000000
int heap[MAX_DATA_NUM], size = 0;

int parent(int i)      { return (i-1) / 2;}
int left_child(int i)  { return 2*i + 1; }
int right_child(int i) { return 2*i + 2; }

void push(int x)
{
    int i = size++;

    while (i > 0) {
        int p = parent(i);
        if (heap[p] >= x) break;
        else {
            heap[i] = heap[p];
            i = p;
        }
    }

    heap[i] = x;
}

int pop()
{
    int ret = heap[0];
    int x = heap[--size];

    int i=0;
    while (left_child(i) < size) {
        int l = left_child(i), r = right_child(i);
        if (r < size && heap[r] > heap[l]) l = r;
        if (heap[l] <= x) break;
        heap[i] = heap[l];
        i = l;
    }
    heap[i] = x;

    return ret;
}
        
int main()
{
    string S;
    while (cin >> S, S != "end") {
        if (S == "insert") {
            int x;
            cin >> x;
            push(x);
        } else {
            cout << pop() << endl;
        }
    }
}