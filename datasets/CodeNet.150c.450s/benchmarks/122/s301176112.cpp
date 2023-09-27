#include <cstdio>
#include <vector>
#include <cmath>
#include <cstdint>

using namespace std;

template<typename T>
class PriorityQueue {
private:
    vector<T> v;

public:
    PriorityQueue() {}

    void insert(T k) {
        v.push_back(k);

        int32_t i = v.size() - 1;
        int32_t p = (i-1)/2;
        while (p >= 0 && v[p] < v[i]) {
            swap(v[p], v[i]);
            i = p;
            p = (i-1)/2;
        }

        return;
    }

    T extractMax() {
        T maximum = v[0];
        swap(v[0], v[v.size()-1]);
        v.pop_back();

        int32_t i = 0;
        while (true) {
            int32_t l = i*2+1, r = i*2+2, largest = i;
            if (l < v.size() && v[l] > v[largest]) largest = l;
            if (r < v.size() && v[r] > v[largest]) largest = r;

            if (largest != i) {
                swap(v[largest], v[i]);
                i = largest;
            } else {
                break;
            }
        }

        return maximum;
    }
};

int main() {
    PriorityQueue<int32_t> pq;

    while (true) {
        uint8_t command[8];
        scanf("%s", command);

        if (command[0] == 'i') {
            int32_t k;
            scanf("%d", &k);
            pq.insert(k);
        } else if (command[1] == 'x') {
            printf("%d\n", pq.extractMax());
        } else if (command[1] == 'n') {
            break;
        }
    }

    return 0;
}