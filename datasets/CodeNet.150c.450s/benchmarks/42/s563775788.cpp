#include <iostream>
#include <string>
using namespace std;

struct Pro{
    string name; int t;
};
Pro Q[100005]; int head, tail;

void enqueue(Pro x){
    Q[tail]=x;
    tail=(tail+1)%100005;
}
Pro dequeue(){
    Pro x=Q[head];
    head=(head+1)%100005;
    return x;
}

int main() {
    int n, q, time=0; cin >> n >> q;
    for(int i=1;i<=n;++i){
        cin >> Q[i].name >> Q[i].t;
    }
    head=1; tail=n+1;
    while(head!=tail){
        Pro x=dequeue();
        int c=min(q,x.t); x.t-=c; time+=c;
        if(x.t) enqueue(x);
        else cout<<x.name << " " <<  time <<endl;
    }
    return 0;
}