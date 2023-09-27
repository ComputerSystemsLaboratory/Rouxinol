#include <iostream>
#include <utility>
#include <queue>
#include <string>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int timecounter = 0;

    queue<pair<string, int>> que;
    for(int i = 0; i < n; i++) {
        string s;
        int time;
        cin >> s >> time;
        pair<string, int> p(s, time);
        que.push(p);
    }
    int count = 0;
    while(count < n) {
        pair<string, int> p = que.front();
        que.pop();

        if(p.second <= q) {
            timecounter += p.second;
            cout << p.first << " " << timecounter << endl;
            count += 1;
        } else {
            p.second -= q;
            timecounter += q;
            que.push(p);
        }
    }
    return 0;
}
