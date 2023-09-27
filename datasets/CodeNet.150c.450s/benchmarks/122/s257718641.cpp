#include <iostream>

using namespace std;

struct Heap {
    int *set;
    int numberKeys;

    Heap() {
        this->set = new int[2000001];
        this->numberKeys = 0;
    }

    ~Heap() {
        delete [] this->set;
    }

    void insert(int key) {
        this->set[++this->numberKeys] = key;

        bool isHeap = false;
        for (int i = this->numberKeys; !isHeap && i > 1; i /= 2) {
            if (this->set[i] <= this->set[i / 2])
                isHeap = true;
            else {
                int aux = this->set[i];
                this->set[i] = this->set[i / 2];
                this->set[i / 2] = aux;
            }
        }
    }

    int extractMax() {
        int max = this->set[1];
        this->set[1] = this->set[this->numberKeys--];
        heapify(1);

        return max;
    }

    void heapify(int position) {
        if (position <= this->numberKeys / 2) {
            int sonPos = position * 2;

            if (sonPos + 1 <= this->numberKeys && this->set[sonPos + 1] > this->set[sonPos])
                sonPos++;

            if (this->set[sonPos] > this->set[position]) {
                int aux = this->set[position];
                this->set[position] = this->set[sonPos];
                this->set[sonPos] = aux;

                heapify(sonPos);
            }
        }
    }
};

int main() {
    Heap heap;
    string input;

    while (cin >> input && input != "end") {
        if (input == "insert") {
            int key;
            cin >> key;
            heap.insert(key);
        } else {
            int max = heap.extractMax();
            cout << max << endl;
        }
    }

    return 0;
}
