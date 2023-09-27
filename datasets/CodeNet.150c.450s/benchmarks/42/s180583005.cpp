#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;
typedef struct job {
    string name;
    int t;
} Job;

queue<Job> qu;
int main() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; ++i) {
        string nm;
        int t;
        cin >> nm >> t;
        Job j = {nm, t};
        qu.push(j);
    }
    int time = 0;
    while(!qu.empty()) {
        struct job j = qu.front();qu.pop();
        if(j.t <= q) {
            time += j.t;
            cout << j.name << " " <<  time << endl;
        } else {
            j.t -= q;
            time += q;
            qu.push(j);
        }
    }

    return 0;
}

