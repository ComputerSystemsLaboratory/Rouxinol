#include <iostream>
#include <cstdlib>
#include <queue>
using namespace std;

struct Process {
    string name;
    int time;
};

/* ALDS1_3_B: Queue */
int main() {
    int n, quantum;
    cin >> n >> quantum;

    queue<Process*> pqueue;
    Process *ps;

    for (int i = 0; i < n; i++) {
        ps = new Process();
        cin >> ps->name >> ps->time;
        pqueue.push(ps);
    }

    int elapsed = 0;
    while(! pqueue.empty() ) {
        ps = pqueue.front();
        pqueue.pop();

        if (quantum < ps->time) {
            elapsed += quantum;
            ps->time -= quantum;
            pqueue.push(ps);
        } else {
            elapsed += ps->time;
            cout << ps->name << " " << elapsed << endl;
        }
    }
    free(ps);

    return 0;
}