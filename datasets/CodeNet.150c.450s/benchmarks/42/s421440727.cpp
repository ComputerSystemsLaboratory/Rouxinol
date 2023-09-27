#include <cstdio>
#include <iostream>
#include <utility>
#include <string>
#include <queue>

using namespace std;

typedef pair<string, int> P;

int main() {
        int n, quantum, time;
        string name;
        queue<P> q;

        cin >> n >> quantum;
        
        while (n--) {
                cin >> name >> time;
                q.push(P(name, time));
        }

        time = 0;
        while ( !q.empty() ) {
                P cp = q.front();
                q.pop();
                if (cp.second > quantum){
                        cp.second -= quantum;
                        q.push(cp);
                        time += quantum;
                } else {
                        time += cp.second;
                        cout << cp.first << " " << time << endl;
                }
        }

        return 0;
}