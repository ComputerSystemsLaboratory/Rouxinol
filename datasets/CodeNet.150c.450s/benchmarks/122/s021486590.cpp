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

    void print() {
        for (int i = 1; i <= size; i++) {
            cout << queueArray[i] << " ";
        }
        cout << endl;
    }

    void insert(long num) {
        this->queueArray[size+1] = num;
        size++;
        heapfyInsert();
        //print();
    }

    long remove() {
        long max = queueArray[1];
        queueArray[1] = queueArray[size];
        size--;
        heapfyRemove();
        //print();
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
        long biggest = -1;
        while(!heap && pos < size) {
            if (pos * 2 <= size && queueArray[2 * pos] > queueArray[pos] ) {
                biggest = 2 * pos;
            } else{
                biggest = pos;
            }
            if(pos * 2 + 1 <= size && queueArray[2 * pos + 1] > queueArray[biggest]){
                biggest = 2*pos+1;
            }
            if(biggest != pos) {
                long aux = queueArray[pos];
                queueArray[pos] = queueArray[biggest];
                queueArray[biggest] = aux;
                pos = biggest;
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
    //heap->print();
    return 0;
}
