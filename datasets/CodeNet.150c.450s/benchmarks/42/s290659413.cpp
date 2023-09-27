#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct process{
    string name;
    int time;
};

int main(void){
    int n, q;
    cin >> n >> q;
    queue<process> src, dst;
    for(int i = 0; i < n; ++i){
        process tmp;
        cin >> tmp.name >> tmp.time;
        src.push(tmp);
    }
    
    int endtime = 0;
    while(!src.empty()){
        process check = src.front();
        src.pop();
        if(check.time > q){
            check.time -= q;
            src.push(check);
            endtime += q;
        }
        else{
            endtime += check.time;
            check.time = endtime;
            dst.push(check);
        }
    }
    
    while(!dst.empty()){
        cout << dst.front().name << " " << dst.front().time << endl;
        dst.pop();
    }
    
    return 0;
}