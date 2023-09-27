#include <iostream>
#include <queue>
using namespace std;

int main(void) {
    int n, q, time, passed;
    string name;
    typedef pair<string, int> P;
    queue<P> que;

    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> name >> time;
        que.push(make_pair(name, time));
    }

    passed = 0;
    while (!que.empty()) {
        name = que.front().first;
        time = que.front().second;
        que.pop();

        if (time <= q) {
            passed += time;
            cout << name << ' ' << passed << endl;
        }
        else {
            passed += q;
            que.push(make_pair(name, time - q));
        }
    }

    return 0;
}