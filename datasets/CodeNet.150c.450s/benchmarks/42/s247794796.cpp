
#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct proc {
    string name;
    int time;
};

int main() {
    int n, q, curTime = 0;
    cin >> n >> q;
    
    queue<proc> que;
    for(int i = 0; i < n; i++){
        proc p;
        cin >> p.name >> p.time;
        que.push(p);
    }
    
    while(que.size()){
        proc p = que.front(); que.pop();
        p.time -= q;
        curTime += q;
        if(p.time <= 0){
            curTime += p.time;
            cout << p.name << " " << curTime << endl;
            continue;
        }
        que.push(p);
    }
    
    return 0;
}