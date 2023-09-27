#include <iostream>
#include <string>
#include <vector>
#define MAX 1000000
using namespace std;

struct pp{
    int t;
    string s;
};

class queue{
public:
    int head;
    int tail;
    vector<pp> v;
    queue();
    void enqueue(pp x);
    pp dequeue();
    bool isEmpty();
};

queue::queue(){
    head = 0;
    tail = 0;
    v.resize(MAX);
}

void queue::enqueue(pp x){
    v[tail].t = x.t;
    v[tail].s = x.s;
    tail++;
}

pp queue::dequeue(){
    head++;
    return v[head-1];
}

bool queue::isEmpty(){
    return head == tail;
}


int main(){
    int n;cin >> n;
    int q;cin >> q;
    queue q1;
    for(int i=0;i<n;i++){
        pp p;
        cin >> p.s >> p.t;
        // cout << p.s << endl;
        q1.enqueue(p);
    }

    int passtime = 0;
    vector<pp> v;
    while(!q1.isEmpty()){
        pp ptmp = q1.dequeue();
        // cout << ptmp.s << endl;
        if(ptmp.t > q){
            passtime +=q;
            ptmp.t -= q;
            q1.enqueue(ptmp);
        }
        else{
            passtime += ptmp.t;
            ptmp.t = passtime;
            v.push_back(ptmp);
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i].s << " " << v[i].t << endl;
    }
}