#include <iostream>
#include <deque>
#include <string>

using namespace std;

class Process {
public:
    Process() {}
    Process(string name, int32_t t) : name(name), t(t) {}

    string name;
    int32_t t;
};

int main() {
    int64_t n;
    int32_t q;
    deque<Process> dq;

    cin >> n >> q;

    while (n--) {
        string name;
        int32_t t;
        cin >> name >> t;
        dq.push_back(Process(name, t));
    }

    int64_t sum = 0;
    while (!dq.empty()) {
        Process proc = dq.front();
        dq.pop_front();

        if (proc.t > q) {
            sum += q;
            proc.t -= q;
            dq.push_back(proc);
        } else {
            sum += proc.t;
            cout << proc.name << " " << sum << endl;
        }
    }

    return 0;
}