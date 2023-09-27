#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

struct process {
    string name;
    int time;
};

class Queue {
    private:
        int head_;
        int tail_;

    public:
        process queue[100001];
        
        void initialize() {
            head_ = 0;
            tail_ = 0;    
        }

        bool isEmpty() {
            return head_ == tail_;
        }

        bool isFull() {
            return head_ == (tail_ + 1) % 100001;
        }

        void enqueue(struct process ps) {
            if (isFull()) {
                cout << "Warning, queue is full" << endl;
            }
            queue[tail_] = ps;
            if (tail_ + 1 == 100001) {
                tail_ = 0;
            }
            else {
                tail_++;
            }
        }

        process dequeue() {
            if (isEmpty()) {
                cout << "Warning, queue is empty" << endl;
            }
            process ps = queue[head_];
            if (head_ + 1 == 100001) {
                head_ = 0;
            }
            else {
                head_++;
            }
            return ps;
        }
};

void test(void) {
    process a = {"ABC", 123};
    Queue q;
    q.initialize();
    q.enqueue(a);
    q.enqueue({"BCD", 345});
    process y = q.dequeue();
    cout << y.name << endl;
    process z = q.dequeue();
    cout << z.name << endl;
}

int main(void) {
    int processNum, quantum;
    string processName;
    int processTime;
    int processTotalTime = 0;

    cin >> processNum >> quantum;
    Queue processQ;

    processQ.initialize();

    // すべてのプロセスをキューに登録
    for (int i=0; i < processNum; i++) {
        cin >> processName >> processTime;
        processQ.enqueue( {processName, processTime} );
    }

    // シミュレーション
    while (processQ.isEmpty() == false) {
        process target = processQ.dequeue();
        
        if (target.time <= quantum) {
            processTotalTime += target.time;
            target.time = 0;
            cout << target.name << " "<< processTotalTime << endl;
        }
        else {
            processTotalTime += quantum;
            target.time -= quantum;
            processQ.enqueue(target);
        }

    }

    return 0;
}
