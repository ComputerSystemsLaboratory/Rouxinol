#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct Process {
    string name;
    int time;
};

int main() {
    int n, q;
    cin >> n >> q;

    queue<Process> qu;

    for (int i = 0; i < n; i++) {
        Process process;
        cin >> process.name >> process.time;
        qu.push(process);
    }

    int timeCount = 0;
    while (!qu.empty()) {
        Process process = qu.front();
        qu.pop();

        process.time -= q;
        if (process.time > 0) {
            qu.push(process);
            timeCount += q;
        }
        else {
            timeCount += q + process.time;
            cout << process.name << " " << timeCount << endl;
        }
    }

    return 0;
}