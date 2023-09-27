#include <bits/stdc++.h>
using namespace std;

struct MaximumHeap {
    MaximumHeap(const vector < int >& dat) : size(dat.size())
    {
        data = dat;
        for ( int i = (size - 2) / 2; i >= 0; i-- ) {
            maxHeapify(i);
        }
    }
    
    void print()
    {
        for ( int i = 0; i < size; i++ ) {
            cout << " " << data[i];
        }
        cout << endl;
    }

private:
    vector < int > data;
    int size;
    
    void maxHeapify(int node)
    {
        int l = node * 2 + 1, r = node * 2 + 2;
        int largest = node;
        if ( l < size && data[l] > data[node] ) largest = l;
        if ( r < size && data[r] > data[largest] ) largest = r;
        if ( largest != node ) {
            swap(data[largest], data[node]);
            maxHeapify(largest);
        }
    }
};

int main()
{
    int H;
    cin >> H;

    vector < int > data(H);
    
    for ( int i = 0; i < H; i++ ) {
        cin >> data[i];
    }

    MaximumHeap tree(data);

    tree.print();
    
    return ( 0 );
}

