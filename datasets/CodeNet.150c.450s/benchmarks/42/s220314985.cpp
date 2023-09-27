#include <iostream>
#include <queue>
using namespace std;

struct Process
{
    char name[11];
    int time;
};

int main()
{
    int n = 0;
    int q = 0;
    cin >> n >> q;
    queue<Process> que;
    for (int i = 0; i != n; ++i){
        Process prc;
        cin >> prc.name >> prc.time;
        que.push(prc);
    }
    int t = 0;
    while (!que.empty()){
        auto prc = que.front();
        que.pop();
        if (prc.time <= q){
            t += prc.time;
            cout << prc.name << ' ' << t << endl;
        }else{
            t += q;
            prc.time -= q;
            que.push(prc);
        }
    }
    return 0;
}