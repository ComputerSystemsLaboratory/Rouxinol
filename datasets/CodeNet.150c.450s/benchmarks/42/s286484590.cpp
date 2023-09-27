/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_B&lang=jp*/
#include <iostream>
#include <map>
#include <queue>

using namespace std;

struct process{
    string name;
    int time;
};

int main(){
    int n,q;
    int time=0;
    queue<struct process> tasks;

    cin>>n;
    cin>>q;
    for(int i=0;i<n;i++){
        struct process p;
        cin>>p.name;
        cin>>p.time;
        tasks.push(p);
    }
    while(!tasks.empty()){
        struct process p=tasks.front();
        p.time-=q;
        tasks.pop();
        if(p.time>0){
            tasks.push(p);
            time+=q;
        }else{
            time+=q+p.time;
            cout<<p.name<<" "<<time<<endl;
        }
    }
    return 0;
}