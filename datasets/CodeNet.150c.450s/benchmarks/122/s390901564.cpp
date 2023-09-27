#include <iostream>

using namespace std;

class priorityQueue {
private:
    long *queueArray;
    long size;
public:
    priorityQueue() {
        this->queueArray = new long[2000001];
        this->size = 0;
    }

    void insert(long num) {
        this->queueArray[size+1] = num;
        size++;
        heapfyInsert();
    }

    void clean(){
        delete[] this->queueArray;
        size=0;
    }

    long remove() {
        long max = queueArray[1];
        queueArray[1] = queueArray[size];
        size--;
        heapfyRemove();
        return max;
    }

    void heapfyInsert() {
        bool heap = false;
        long pos = size;
        while (!heap && pos > 1) {
            if (queueArray[pos] < queueArray[pos / 2]) {
                heap = true;
            } else {
                long aux = queueArray[pos];
                queueArray[pos] = queueArray[pos / 2];
                queueArray[pos / 2] = aux;
                pos = pos / 2;
            }
        }
    }

    void heapfyRemove() {
        bool heap = false;
        long pos = 1;
        long maxPos;
        while(!heap && pos < size) {
            if (pos * 2 <= size && queueArray[2 * pos] > queueArray[pos] && queueArray[2 * pos] > queueArray[2 * pos + 1]) {
                maxPos = 2 * pos;
            }else if(pos * 2 + 1 <= size && queueArray[2 * pos + 1] > queueArray[pos]){
                maxPos = 2*pos+1;
            }else{
                maxPos = pos;
            }
            if(maxPos != pos) {
                long aux = queueArray[pos];
                queueArray[pos] = queueArray[maxPos];
                queueArray[maxPos] = aux;
                pos = maxPos;
            }else{
                heap = true;
            }
        }
    }
};


int main() {
    auto heap = new priorityQueue();
    string operation;
    long n;
    while (cin >> operation && operation != "end") {
        if (operation == "insert") {
            cin >> n;
            heap->insert(n);
        } else {
            long aux = heap->remove();
            cout << aux << endl;
        }
    }
    heap->clean();
    delete heap;
    return 0;
}
