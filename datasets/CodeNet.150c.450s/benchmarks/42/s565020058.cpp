#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <queue>


using namespace std;

typedef struct process {
    string name;
    int time;
} proc;



int main() {
    int n, q;
    queue<process> Q;
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        proc p;
        cin >> p.name >> p.time;
        Q.push(p);
    }
    int id = 0;
    int timeSum= 0;
    while (!Q.empty()) {
        proc p = Q.front();
        Q.pop();
        int c = min(p.time,q);
        timeSum += c;
        p.time -= c;
        if(p.time > 0) Q.push(p);
        else cout << p.name << " " << timeSum <<endl;
    }
    return 0;
}
