#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Process{
    string name;
    int time;
};

int main(void){
    queue<Process> que;
    int n, q;
    int i;
    Process tmp;
    int lapsed = 0;
    
    cin >> n >> q;
    for(i = 0; i < n; i++){
        cin >> tmp.name >> tmp.time;
        que.push(tmp);
    }
    
    while(!que.empty()){
        tmp = que.front(); que.pop();
        
        if(tmp.time <= q){
            lapsed += tmp.time;
            cout << tmp.name << " " << lapsed << endl;
        } else {
            tmp.time -= q;
            lapsed += q;
            que.push(tmp);
        }
    }
    
    return 0;
}