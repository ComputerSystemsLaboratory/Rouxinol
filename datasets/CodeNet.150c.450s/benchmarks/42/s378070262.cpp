#include <iostream>
#include <string>
#include <map>
#include <queue>

using namespace std;

void sche(queue<pair<string, int> > &q, int qtime){
    int time = 0;
    while(q.size() > 0){
        pair<string, int> task = q.front();
        int t = qtime > task.second ? task.second : qtime;
        time += t;
        task.second -= t;
        q.pop();
        if(task.second > 0)
            q.push(task);
        else
            cout << task.first << " " << time << endl;
    }
}

int main(){
    int n, qtime;
    cin >> n >> qtime;
    queue<pair<string, int> > q;
    for(int i=0; i < n; i++){
        string name;
        int t;
        cin >> name >> t;
        q.push(make_pair(name, t));
    }
    sche(q, qtime);
    return 0;
}