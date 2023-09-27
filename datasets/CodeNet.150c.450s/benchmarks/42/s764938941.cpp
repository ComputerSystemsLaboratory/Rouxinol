#include <iostream>
#include <queue>

using namespace std;

class Process {
private:
    string _name;
    int _time;
public:
    Process(string n, int t):_name(n), _time(t) {}

    string name() const { return _name; }
    int time() const { return _time; }
};

class Finished {
private:
    string _name;
    int _time;
public:
    Finished(string n, int t):_name(n), _time(t) {}

    string name() const { return _name; }
    int time() const { return _time; }
};

int main() {
    int n,q;
    cin >> n >> q;

    queue<Process> ps;

    for (int i = 0; i < n; i++) {
        string name;
        int time;
        cin >> name >> time;
        ps.push(Process(name, time));
    }

    int elapsed = 0;
    vector<Finished> fs;

    while(!ps.empty()) {
        Process p = ps.front();
        ps.pop();

        if (p.time() > q) {
            ps.push(Process(p.name(), p.time() - q));
            elapsed += q;
        } else {
            elapsed += p.time();
            fs.push_back(Finished(p.name(), elapsed));
        }
    }

    for (const auto& f : fs) {
        cout << f.name() << " " << f.time() << endl;
    }

    return 0;
}