#include <iostream>
#include <queue>
using namespace std;

typedef pair<string, int> p_pair;

int main() {
    int n, q;
    queue<p_pair> PQ;

    cin >> n >> q;

    p_pair in_p;
    for(int i = 0; i < n; i++) {
        cin >> in_p.first >> in_p.second;
        PQ.push(in_p);
    }

    int elapsed_time = 0;
    while(!PQ.empty()) {
        if(PQ.front().second > q) {
            p_pair p_tmp;
            p_tmp.first = PQ.front().first;
            p_tmp.second = PQ.front().second - q;
            elapsed_time += q;
            PQ.pop();
            PQ.push(p_tmp);
        }
        else {
            elapsed_time += PQ.front().second;
            cout << PQ.front().first << " " << elapsed_time << endl;
            PQ.pop();
        }
    }
    
    return 0;
}

