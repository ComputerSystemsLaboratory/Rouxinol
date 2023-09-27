#include <iostream>
#include <string>

using namespace std;

class Process {
private:
    string name;
    int time;
public:
    Process() = default;
    Process(string name, int time) {
        this->name = name;
        this->time = time;
    }
    string getName() {
        return this->name;
    }
    int getTime() {
        return this->time;
    }
    void setTime(int time) {
        this->time = time;
    }
};

int pos_min = 0;
int pos_max = 0;
Process queue[1000000];

void enqueue(Process &process) {
    queue[pos_max] = process;
    pos_max++;
}

Process dequeue() {
    Process process = queue[pos_min];
    pos_min++;
    return process;
}

bool isEmpty() {
    return pos_min == pos_max;
}

int main() {

    int num, quantum;
    scanf("%d %d", &num, &quantum);

    for (int i = 0; i < num; i++) {
        char name[100];
        int time;
        scanf("%s %d", name, &time);
        Process process(name, time);
        enqueue(process);
    }

    int cost = 0;
    while (true) {
        Process process = dequeue();
        if (process.getTime() > quantum) {
            cost += quantum;
            process.setTime(process.getTime() - quantum);
            enqueue(process);
        } else if (process.getTime() <= quantum) {
            cost += process.getTime();
            printf("%s %d\n", process.getName().c_str(), cost);
            if (isEmpty()) {
                break;
            }
        }
    }

    return 0;
}

