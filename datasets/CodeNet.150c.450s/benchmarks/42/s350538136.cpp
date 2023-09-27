#include <iostream>
#include <string>
#include <vector>

using namespace std;

template<typename T>
class Queue {
private:
    vector<T> vec;
    uint32_t head;
    uint32_t tail;

public:
    Queue(uint32_t n) {
        vec.resize(n + 1);
        head = 0;
        tail = 0;
    }

    void increment(uint32_t &x) {
        x++;
        x %= vec.size();
        return;
    }

    void enqueue(T x) {
        vec[tail] = x;
        increment(tail);
    }

    T dequeue() {
        T x = vec[head];
        increment(head);
        return x;
    }

    bool empty() {
        return head == tail;
    }
};

struct Process {
    string name;
    int32_t time;
};

int main() {
    int64_t n;
    int32_t q;

    cin >> n >> q;

    Queue<Process> queue(n);

    while (n--) {
        Process p;
        cin >> p.name >> p.time;
        queue.enqueue(p);
    }

    int64_t sum = 0;
    while (!queue.empty()) {
        Process proc = queue.dequeue();

        if (proc.time > q) {
            sum += q;
            proc.time -= q;
            queue.enqueue(proc);
        } else {
            sum += proc.time;
            cout << proc.name << " " << sum << endl;
        }
    }

    return 0;
}