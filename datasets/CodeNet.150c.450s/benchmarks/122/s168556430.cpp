#include <iostream>

using namespace std;

struct Heap {
    int *H;
    int size;
    Heap() {
        this->H = new int[2000000];
        this->size = 0;
    }
    int siz() {
        return this->size;
    }
    void swap(int a, int b) {
        int aux = this->H[b];
        this->H[b] = this->H[a];
        this->H[a] = aux;
    }
    void Iheapify(int i) {
        int f;
        if(i > 0) {
            f = i / 2;
            if(i%2 == 0 && f > 0) {
                f-=1;
            }
            if (this->H[i] > this->H[f]) {
                swap (i, f);
                Iheapify (f);
            }
        }
    }

    void Rheapify(int i) {
        int l,r,m;
        m = i;
        l = (2*i) + 1;
        r = (2*i) + 2;
        if(l < this->size && this->H[l] >= this->H[m]) {
            m = l;
        }
        if(r < this->size && this->H[r] >= this->H[m]) {
            m = r;
        }
        if(m != i) {
            swap (i, m);
            Rheapify (m);
        }
    }
    void insert(int k) {
        this->H[size] = k;
        Iheapify(size);
        this->size++;
    }
    int extract () {
        int temp = this->H[0];
        swap (0, size-1);
        this->size--;
        Rheapify (0);
        return temp;
    }

    void print() {
        for(int i = 1; i <= size; i++) {
            cout << H[i] << endl;
        }
    }
};

int main() {
    string s="";
    int k;
    bool b = true;
    Heap *heap = new Heap();
    while(b) {
        cin >> s;
        if(s == "end") {
            break;
        }
        if(s[0]=='i') {
            cin >> k;
            heap->insert (k);
        } else {
            if(heap->siz() > 0) {
                k = heap->extract ();
                cout << k << endl;
            }
        }
    }
    return 0;
}
