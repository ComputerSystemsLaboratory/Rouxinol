#include <iostream>
using namespace std;

struct Heap {
    int *heapTable;
    int length;
    int curr;

    Heap () {
        this->heapTable = new int[20000001];
        this->length = 0;
        this->curr = 1;
    }

    void add (int valor) {
        this->heapTable[this->curr] = valor;
        this->curr++;
        this->length++;
    }

    void bottomUp() {
        if (this->length > 1) {
            int k = this->length;
            int v = this->heapTable[k];
            bool heapConfirm = false;
            while (!heapConfirm && k > 1) {
                int j = k / 2;
                if (v <= this->heapTable[j]) {
                    heapConfirm = true;
                } else {
                   this->heapTable[k] = this->heapTable[j];
                   this->heapTable[j] = v;
                   k = j;
                }
            }
        }
    }
    void upDown() {
            int k = 1;
            int v = this->heapTable[k];
            bool heapConfirm = false;
            while (!heapConfirm) {
                int j = 2 * k;
                if (j < this->curr) {
                    if (this->heapTable[j] < this->heapTable[j+1]) {
                        j = j + 1;
                    }
                } if (v >= this->heapTable[j]) {
                    heapConfirm = true;
                } else {
                    this->heapTable[k] = this->heapTable[j];
                    k = j;
                }
            }
            this->heapTable[k] = v;
        }


    void extract () {
        int aux = this->heapTable[1];
        this-> heapTable[1] = this->heapTable[length];
        this->heapTable[length] = 0;
        this->curr--;
        this->length--;
        cout << aux << endl;
    }
};

int main () {
    Heap *heap = new Heap();
    bool stop = false;
    while (!stop) {
        string action = "";
        int valor = 0;
        cin >> action;
        if (action == "end") {
            stop = true;
        }
        else if (action == "insert") {
            cin >> valor;
            heap->add(valor);
            heap->bottomUp();
        } else {
            heap->extract();
            heap->upDown();
        }
    }
}
