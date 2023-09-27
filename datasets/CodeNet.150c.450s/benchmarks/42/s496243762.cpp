#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct proc{
    string name;
    long int time;
};

int main(){
    int n, q;
    cin >> n >> q;
    queue<proc> procs;
    for(int i=0; i<n; i++){
        proc p;
        cin >> p.name >> p.time;
        procs.push(p);
    }
    
    int time = 0;
    while(!procs.empty()){
        if(procs.front().time > q){
            proc p = procs.front();
            procs.pop();
            p.time -= q;
            procs.push(p);
            time += q;
        }else{
            time += procs.front().time;
            cout <<  procs.front().name << " " << time <<  endl;
            procs.pop();
        }
    }
    
    return 0;
}