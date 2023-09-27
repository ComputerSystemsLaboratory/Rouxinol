#include    <iostream>
#include    <string>
#include    <queue>
#include    <utility>

using namespace std;

int main() {
    int n, q;

    cin >> n >> q;

    queue< pair<string, int> > pq, comp;

    // 入力
    for(int i = 0; i < n; i++) {
        string name;
        int time;

        cin >> name >> time;
        pq.push(make_pair(name, time));
    }

    // 処理
    unsigned int stime = 0;
    while(!pq.empty()) {
        const auto x = pq.front();
        pq.pop();
        if(x.second <= q) {
            stime += x.second;
            comp.push(make_pair(x.first, stime));
        } else {
            stime += q;
            pq.push(make_pair(x.first, x.second - q));
        }
    }

    // 出力
    while(!comp.empty()) {
        auto x = comp.front();
        cout << x.first << ' ' << x.second << endl;
        comp.pop();
    }

    return 0;
}
